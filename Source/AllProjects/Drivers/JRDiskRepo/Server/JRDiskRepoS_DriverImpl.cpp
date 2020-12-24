//
// FILE NAME: JRDiskRepoS_DriverImpl.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 06/04/2005
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2020
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and 
//  the author (Dean Roddey.) It is licensed under the MIT Open Source 
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the main implementation file of the driver.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "JRDiskRepoS.hpp"


// ---------------------------------------------------------------------------
//  Magic macros
// ---------------------------------------------------------------------------
RTTIDecls(TJRMCMediaRepoEng,TCQCStdMediaRepoEng)
RTTIDecls(TJRDiskRepoSDriver,TCQCStdMediaRepoDrv)



// ---------------------------------------------------------------------------
//  CLASS: TJRMCMediaRepoEng
// PREFIX: srdb
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
//  TJRMCMediaRepoEng: Constructors and Destructor
// ---------------------------------------------------------------------------

//
//  Indicate the media types we support
//
TJRMCMediaRepoEng::TJRMCMediaRepoEng(const TString& strMoniker) :

    TCQCStdMediaRepoEng(strMoniker, tCQCMedia::EMTFlags::Music)
{
}

TJRMCMediaRepoEng::~TJRMCMediaRepoEng()
{
}


// ---------------------------------------------------------------------------
//  TJRMCMediaRepoEng: Public, inherited methods
// ---------------------------------------------------------------------------

//
//  This is called if an image needs to be loaded. We only support large art directly
//  so we scale down the large art if they ask for a thumb. We should never get called
//  for anything we have already returned, since it will be cached.
//
//  Unfortunately we can't cache the large art if we load it to create the thumb. If
//  the large art is subsequently asked for, we have to load it again. We give up this
//  slight efficiency in order for the standard repo DB engine code that calls this
//  to be a lot simpler.
//
//  We let exceptions propogate back.
//
tCIDLib::TCard4
TJRMCMediaRepoEng::c4LoadRawCoverArt(const  TMediaImg&              mimgToLoad
                                    ,       TMemBuf&                mbufToFill
                                    , const tCQCMedia::ERArtTypes   eType)
{
    tCIDLib::TCard4 c4Ret = 0;
    try
    {
        //
        //  If the large art has already been loaded and they want small, then we
        //  don't have to load the file again.
        //
        if (eType == tCQCMedia::ERArtTypes::SmlCover)
            c4Ret = mimgToLoad.c4QueryArt(mbufToFill, tCQCMedia::ERArtTypes::LrgCover, 0);

        if (!c4Ret)
        {
            //
            //  Apparently not so load the file. Keep in mind that we have to use the
            //  large art path here no matter what, since we don't support the small
            //  directly.
            //
            const TString& strPath = mimgToLoad.strArtPath(tCQCMedia::ERArtTypes::LrgCover);
            if (!strPath.bIsEmpty() && TFileSys::bExists(strPath))
            {
                TBinaryFile flArt(strPath);
                flArt.Open
                (
                    tCIDLib::EAccessModes::Read
                    , tCIDLib::ECreateActs::OpenIfExists
                    , tCIDLib::EFilePerms::Default
                    , tCIDLib::EFileFlags::SequentialScan
                );

                c4Ret = tCIDLib::TCard4(flArt.c8CurSize());
                flArt.c4ReadBuffer(mbufToFill, c4Ret, tCIDLib::EAllData::FailIfNotAll);
            }
        }

        //
        //  If they asked for small art, let's scale it down since we don't support
        //  separate thumbs. We use the same persistent id either way, since it's
        //  the same image.
        //
        if ((eType == tCQCMedia::ERArtTypes::SmlCover) && c4Ret)
        {
            c4Ret = facCIDImgFact().c4CompactToJPEG
            (
                mbufToFill, c4Ret, TSize(kCQCMedia::c4DefThumbSz)
            );
        }
    }

    catch(TError& errToCatch)
    {
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }

    return c4Ret;
}



// ---------------------------------------------------------------------------
//   CLASS: JRDiskRepoSDriver
//  PREFIX: drv
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
//  JRDiskRepoSDriver: Constructors and Destructor
// ---------------------------------------------------------------------------
TJRDiskRepoSDriver::TJRDiskRepoSDriver(const TCQCDriverObjCfg& cqcdcToLoad) :

    TCQCStdMediaRepoDrv(cqcdcToLoad, &m_srdbEngine)
    , m_c4FldId_DBSerialNum(kCIDLib::c4MaxCard)
    , m_c4FldId_Loaded(kCIDLib::c4MaxCard)
    , m_c4FldId_LoadStatus(kCIDLib::c4MaxCard)
    , m_c4FldId_Status(kCIDLib::c4MaxCard)
    , m_c4FldId_ReloadDB(kCIDLib::c4MaxCard)
    , m_c4FldId_TitleCnt(kCIDLib::c4MaxCard)
    , m_pdblRepo(0)
    , m_srdbEngine(cqcdcToLoad.strMoniker())
{
    // Preload the 'loading' text for the status field
    m_strLoadMsg.LoadFromMsg(kJRDRMsgs::midStatus_Loading, facJRDiskRepoS());
}

TJRDiskRepoSDriver::~TJRDiskRepoSDriver()
{
}


// ---------------------------------------------------------------------------
//  TJRDiskRepoSDriver: Protected, inherited methods
// ---------------------------------------------------------------------------
tCIDLib::TBoolean TJRDiskRepoSDriver::bGetCommResource(TThread&)
{
    // We have no comm resource
    return kCIDLib::True;
}


tCIDLib::TBoolean TJRDiskRepoSDriver::bWaitConfig(TThread&)
{
    //
    //  We asynchronously load the database. So we will make multiple passes into
    //  here. The first time, we try to star the loading process, and on subsequent
    //  entries, we check the status of the
    //  load.
    //
    tCIDLib::TBoolean bRet = kCIDLib::False;
    if (m_pdblRepo)
    {
        bRet = bMonitorLoad();
    }
     else
    {
        if (eVerboseLevel() >= tCQCKit::EVerboseLvls::Medium)
        {
            facCQCMedia().LogMsg
            (
                CID_FILE
                , CID_LINE
                , kMedMsgs::midStatus_StartingLoad
                , tCIDLib::ESeverities::Status
                , tCIDLib::EErrClasses::AppStatus
                , m_strXMLFile
            );
        }

        //
        //  We've not got an outstanding load, so see if the repository dir
        //  is present. If not, we just keep saying we haven't gotten config
        //  data.
        //
        if (TFileSys::bExists(m_strXMLFile, tCIDLib::EDirSearchFlags::AllFiles))
        {
            //
            //  Create a loader and start it. Set our verbosity level on it so
            //  that it will do the appropriate logging. We let it load into a
            //  temp DB.
            //
            m_pdblRepo = new TJRDiskRepoLoader(strMoniker());
            m_pdblRepo->eVerboseLevel(eVerboseLevel());
            m_pdblRepo->StartLoad(&m_mdbLoad, m_strXMLFile);
        }
         else if (eVerboseLevel() >= tCQCKit::EVerboseLvls::Medium)
        {
            facCQCMedia().LogMsg
            (
                CID_FILE
                , CID_LINE
                , kMedErrs::errcDB_RepoNotFound
                , tCIDLib::ESeverities::Status
                , tCIDLib::EErrClasses::AppStatus
                , m_strXMLFile
            );
        }
    }
    return bRet;
}


// Handle a write to one of our boolean fields
tCQCKit::ECommResults
TJRDiskRepoSDriver::eBoolFldValChanged(  const   TString&            strName
                                        , const tCIDLib::TCard4     c4FldId
                                        , const tCIDLib::TBoolean   bNewValue)
{
    if (c4FldId == m_c4FldId_ReloadDB)
    {
        // If not already loading, then do a load
        if (!m_pdblRepo)
        {
            // If the file doesn't exist, then reject the operation
            if (!TFileSys::bExists(m_strXMLFile, tCIDLib::EDirSearchFlags::AllFiles))
                return tCQCKit::ECommResults::ResNotFound;

            // Set the status field to show not loaded
            bStoreStringFld
            (
                m_c4FldId_Status
                , facJRDiskRepoS().strMsg(kJRDRMsgs::midStatus_NotLoaded)
                , kCIDLib::True
            );

            // Create a loader and start it
            m_pdblRepo = new TJRDiskRepoLoader(strMoniker());
            m_pdblRepo->eVerboseLevel(eVerboseLevel());
            m_pdblRepo->StartLoad(&m_mdbLoad, m_strXMLFile);
        }
    }
     else
    {
        IncUnknownWriteCounter();
        return tCQCKit::ECommResults::FieldNotFound;
    }
    return tCQCKit::ECommResults::Success;
}


tCQCKit::ECommResults TJRDiskRepoSDriver::eConnectToDevice(TThread& thrCaller)
{
    // We don't have a device to connect to
    return tCQCKit::ECommResults::Success;
}


tCQCKit::EDrvInitRes TJRDiskRepoSDriver::eInitializeImpl()
{
    //
    //  Set the reconnect and poll times to 1 second. We don't poll any
    //  device or have any device to connect to, but we do watch for the
    //  DB loader to finish and want to respond to that quickly.
    //
    SetPollTimes(1000, 1000);

    // We should have gotten a prompt value with the file to load
    const TCQCDriverObjCfg& cqcdcTmp = cqcdcThis();
    if (!cqcdcTmp.bFindPromptValue(L"LibFile", L"File", m_strXMLFile))
    {
        facJRDiskRepoS().LogMsg
        (
            CID_FILE
            , CID_LINE
            , L"The exported library file name prompt was not set for driver %(1)"
            , tCIDLib::ESeverities::Status
            , tCIDLib::EErrClasses::AppStatus
            , strMoniker()
        );
        return tCQCKit::EDrvInitRes::Failed;
    }

    // Make sure it has the right slash types
    m_strXMLFile.bReplaceChar(L'/', L'\\');

    //
    //  And set up our device fields. The bulk of what this driver does is
    //  via the media interface, and this driver doesn't control any device
    //  or app, so there are just a few.
    //
    TVector<TCQCFldDef> colFlds(8);
    TCQCFldDef flddNew;

    TString strFldDBSerialNum(L"DBSerialNum");
    TString strFldLoaded(L"Loaded");
    TString strFldReloadDB(L"ReloadDB");
    TString strFldLoadStatus(L"LoadStatus");
    TString strFldStatus(L"Status");
    TString strFldTitleCnt(L"TitleCount");

    const tCIDLib::TBoolean bV2(c4ArchVersion() > 1);

    //
    //  If V2, prepend the device class prefix to the fields used in V2. Else,
    //  set up any V1 only fields.
    //
    if (bV2)
    {
        const TString& strPref(L"MREPO#");
        strFldDBSerialNum.Prepend(strPref);
        strFldLoadStatus.Prepend(strPref);
        strFldReloadDB.Prepend(strPref);
        strFldStatus.Prepend(strPref);
        strFldTitleCnt.Prepend(strPref);
    }
     else
    {
        flddNew.Set
        (
            strFldLoaded
            , tCQCKit::EFldTypes::Boolean
            , tCQCKit::EFldAccess::Read
        );
        colFlds.objAdd(flddNew);
    }

    //
    //  These are the same, the V2 ones just have the device class prefix.
    //  The DBSerialNum and LoadStatus fields weren't there in V1 but it
    //  doesn't hurt anything to include them V1 drivers, and it makes things
    //  simpler since we don't have to special case them.
    //
    flddNew.Set
    (
        strFldDBSerialNum
        , tCQCKit::EFldTypes::String
        , tCQCKit::EFldAccess::Read
    );
    colFlds.objAdd(flddNew);

    flddNew.Set
    (
        strFldLoadStatus
        , tCQCKit::EFldTypes::String
        , tCQCKit::EFldAccess::Read
        , L"Enum: Initializing, Loading, Ready, Error"
    );
    colFlds.objAdd(flddNew);

    flddNew.Set
    (
        strFldReloadDB
        , tCQCKit::EFldTypes::Boolean
        , tCQCKit::EFldAccess::Write
    );
    colFlds.objAdd(flddNew);

    flddNew.Set
    (
        strFldStatus
        , tCQCKit::EFldTypes::String
        , tCQCKit::EFldAccess::Read
    );
    colFlds.objAdd(flddNew);

    flddNew.Set
    (
        strFldTitleCnt
        , tCQCKit::EFldTypes::Card
        , tCQCKit::EFldAccess::Read
    );
    colFlds.objAdd(flddNew);


    //
    //  Now register our fields with the base driver class, and go back
    //  and look up the ids.
    //
    SetFields(colFlds);
    m_c4FldId_DBSerialNum = pflddFind(strFldDBSerialNum, kCIDLib::True)->c4Id();
    m_c4FldId_LoadStatus = pflddFind(strFldLoadStatus, kCIDLib::True)->c4Id();
    m_c4FldId_ReloadDB = pflddFind(strFldReloadDB, kCIDLib::True)->c4Id();
    m_c4FldId_Status = pflddFind(strFldStatus, kCIDLib::True)->c4Id();
    m_c4FldId_TitleCnt = pflddFind(strFldTitleCnt, kCIDLib::True)->c4Id();

    if (!bV2)
        m_c4FldId_Loaded = pflddFind(strFldLoaded, kCIDLib::True)->c4Id();

    //
    //  Init the status field to indicate not loaded. The loaded field will have
    //  a default initial value of false, which is what we want. And set the load
    //  status field to loading.
    //
    bStoreStringFld
    (
        m_c4FldId_Status
        , facJRDiskRepoS().strMsg(kJRDRMsgs::midStatus_NotLoaded)
        , kCIDLib::True
    );

    bStoreStringFld
    (
        m_c4FldId_LoadStatus, L"Loading", kCIDLib::True
    );

    // We'll try to get a first load of the database before we come online
    return tCQCKit::EDrvInitRes::WaitConfig;
}


tCQCKit::ECommResults TJRDiskRepoSDriver::ePollDevice(TThread& thrCaller)
{
    //
    //  If a database loader is active, then we are loading right now, so
    //  call the load monitoring method.
    //
    if (m_pdblRepo)
        bMonitorLoad();
    return tCQCKit::ECommResults::Success;
}



tCIDLib::TVoid TJRDiskRepoSDriver::ReleaseCommResource()
{
    // Nothing to release
}


tCIDLib::TVoid TJRDiskRepoSDriver::TerminateImpl()
{
    // If a load is going on, then stop it
    if (m_pdblRepo)
        m_pdblRepo->Shutdown();

    try
    {
        delete m_pdblRepo;
        m_pdblRepo = 0;
    }

    catch(...)
    {
    }

    // Tell our engine to flush the media database
    m_srdbEngine.ResetMediaDB();
}


// ---------------------------------------------------------------------------
//  TJRDiskRepoSDriver: Private, non-virtual methods
// ---------------------------------------------------------------------------

//
//  This is called when a load is underway. We watch the load status and
//  handle with it finishes.
//
tCIDLib::TBoolean TJRDiskRepoSDriver::bMonitorLoad()
{
    // We have a load going, so let's check the status
    tCIDLib::TCard4 c4SoFar;
    const tCQCMedia::ELoadStatus eStatus = m_pdblRepo->eStatus(c4SoFar);

    tCIDLib::TBoolean bRet = kCIDLib::False;
    if (eStatus > tCQCMedia::ELoadStatus::Loading)
    {
        try
        {
            // Make sure the repo thread is down and out
            m_pdblRepo->Shutdown();

            // If it failed, log that
            if (eStatus == tCQCMedia::ELoadStatus::Failed)
            {
                if (eVerboseLevel() >= tCQCKit::EVerboseLvls::Medium)
                {
                    facCQCMedia().LogMsg
                    (
                        CID_FILE
                        , CID_LINE
                        , kMedErrs::errcDB_LoadFailed
                        , tCIDLib::ESeverities::Status
                        , tCIDLib::EErrClasses::AppStatus
                        , strMoniker()
                    );
                }

                // REset the temp DB so it doesn't hang on to memory needlessly
                m_mdbLoad.Reset();

                bRet = kCIDLib::False;
            }
             else
            {
                // Give the loader a chance to wrap up
                m_pdblRepo->CompleteLoad();

                //
                //  Let our engine take all of the temp content. This will literally
                //  take all of the content, so it's pretty efficient and it will
                //  leave our temp one empty, so it's not wasting memory when not
                //  in use.
                //
                m_srdbEngine.ResetMediaDB(m_mdbLoad);

                //
                //  Set the status field to loaded and the loaded field to
                //  true, and set the title count field to the count of
                //  titles we loaded.
                //
                bStoreStringFld
                (
                    m_c4FldId_Status
                    , facJRDiskRepoS().strMsg(kJRDRMsgs::midStatus_Loaded)
                    , kCIDLib::True
                );
                bStoreStringFld(m_c4FldId_LoadStatus, L"Ready", kCIDLib::True);

                if (c4ArchVersion() == 1)
                    bStoreBoolFld(m_c4FldId_Loaded, kCIDLib::True, kCIDLib::True);

                bStoreCardFld
                (
                    m_c4FldId_TitleCnt
                    , m_srdbEngine.mdbInfo().c4TitleSetCnt(tCQCMedia::EMediaTypes::Music)
                    , kCIDLib::True
                );

                // Store the DB serial number on our parent class
                const TString& strDBSerNum = m_pdblRepo->strDBSerialNum();
                SetDBSerialNum(strDBSerNum);

                // And set the serial number field
                bStoreStringFld(m_c4FldId_DBSerialNum, strDBSerNum, kCIDLib::True);

                bRet = kCIDLib::True;
            }
        }

        catch(TError& errToCatch)
        {
            errToCatch.AddStackLevel(CID_FILE, CID_LINE);

            m_mdbLoad.Reset();
            delete m_pdblRepo;
            m_pdblRepo = 0;
            throw;
        }

        m_mdbLoad.Reset();
        delete m_pdblRepo;
        m_pdblRepo = 0;
    }
     else
    {
        // Not done yet, so keep waiting, but update the status field
        TString strSet(m_strLoadMsg);
        strSet.eReplaceToken(c4SoFar, kCIDLib::chDigit1);

        bStoreStringFld(m_c4FldId_Status, strSet, kCIDLib::True);
    }
    return bRet;
}

