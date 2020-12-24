//
// FILE NAME: VantageQS.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 03/02/2006
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
//  This is the main implementation file for the Vantage Q series server side
//  driver. It just provides the required function that the server framework
//  uses to ask us  to create an instance of our driver.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "VantageQS.hpp"


namespace VantageQS
{
    // -----------------------------------------------------------------------
    //  Our facility object pointer, which is lazily faulted in.
    // -----------------------------------------------------------------------
    TFacility* pfacVantageQS = nullptr;
}


// ---------------------------------------------------------------------------
//  Glocal functions
// ---------------------------------------------------------------------------
TFacility& facVantageQS()
{
    //
    //  Normally, in a CIDLib facility, this would be a lazy eval method. But,
    //  since this is a driver, we can force it in below when we are loaded.
    //  So we can avoid the overhead of synchronization and checking whether
    //  it exists.
    //
    return *VantageQS::pfacVantageQS;
}



// ---------------------------------------------------------------------------
//  Global function that the server framework dynamically finds and uses to
//  get us to create an instance of our driver.
// ---------------------------------------------------------------------------
extern "C" CID_FNEXPORT TCQCServerBase*
psdrvMakeNewSrv(const  TCQCDriverObjCfg& cqcdcToLoad)
{
    //
    //  Sanity check that the passed config object matches our known client
    //  side driver name.
    //
    facCQCKit().ValidateDrvCfg
    (
        tCIDLib::ECSSides::Server
        , cqcdcToLoad
        , kVantageQS::pszFacName
    );

    //
    //  Create our facility object now. Since we *should* always be loaded
    //  dynamically and this called before anything else, this insures that
    //  the facility object is always there and doesn't have to be faulted
    //  in.
    //
    VantageQS::pfacVantageQS = new TFacility
    (
        kVantageQS::pszFacName
        , tCIDLib::EModTypes::SharedLib
        , kVantageQS::c4MajVersion
        , kVantageQS::c4MinVersion
        , kVantageQS::c4Revision
        , tCIDLib::EModFlags::HasMsgFile
    );

    // And now gen up an instance of our driver and return it
    return new TVantageQSDriver(cqcdcToLoad);
}

