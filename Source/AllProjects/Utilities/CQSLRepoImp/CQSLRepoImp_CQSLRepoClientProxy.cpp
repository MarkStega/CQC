// ----------------------------------------------------------------------------
//  FILE: CQSLRepoImp_CQSLRepoClientProxy.cpp
//  DATE: Thu, Sep 27 21:06:35 2012 -0700
//    ID: 664424407F8B705F-F0C14316C78994B2
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQSLRepoImp.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
AdvRTTIDecls(TCQSLRepoMgrClientProxy,TOrbClientBase)


// ----------------------------------------------------------------------------
// TCQSLRepoMgrClientProxy: Public, static data
// ----------------------------------------------------------------------------
const TString TCQSLRepoMgrClientProxy::strInterfaceId(L"664424407F8B705F-F0C14316C78994B2");
const tCIDLib::TCard4 TCQSLRepoMgrClientProxy::c4ProtoVer(1);
const TString TCQSLRepoMgrClientProxy::strBindingName(L"MgrIntf");
const TString TCQSLRepoMgrClientProxy::strBindingScope(L"/CQC/CQSLRepo/%(m)");



// ----------------------------------------------------------------------------
// TCQSLRepoMgrClientProxy: Constructors and Destructor
// ----------------------------------------------------------------------------
TCQSLRepoMgrClientProxy::TCQSLRepoMgrClientProxy()
{
}

TCQSLRepoMgrClientProxy::
TCQSLRepoMgrClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding)
{
    #if CID_DEBUG_ON
    if (!ooidSrc.oidKey().bIsInterfaceId(strInterfaceId))
    {
        facCIDOrb().ThrowErr
        (
            CID_FILE
            , CID_LINE
            , kOrbErrs::errcClient_BadIntfId
            , tCIDLib::ESeverities::Failed
            , tCIDLib::EErrClasses::BadParms
            , ooidSrc.oidKey().mhashInterface()
            , strInterfaceId
        );
    }
    #endif
    SetObjId(ooidSrc, strNSBinding, kCIDLib::False);
}

TCQSLRepoMgrClientProxy::~TCQSLRepoMgrClientProxy()
{
}

// ----------------------------------------------------------------------------
// TCQSLRepoMgrClientProxy: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bAddToPlayList
(
    const TString& strLeaseId
    , const tCIDLib::TCard4 c4PLId
    , const tCIDLib::TCard4 c4AddId
    , const tCIDLib::TBoolean bIsCollection)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bAddToPlayList");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << c4PLId;
        ocmdToUse.strmOut() << c4AddId;
        ocmdToUse.strmOut() << bIsCollection;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bCheckIdExists
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eMType
    , const tCQCMedia::EDataTypes eDType
    , const tCIDLib::TCard4 c4Id)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bCheckIdExists");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eMType;
        ocmdToUse.strmOut() << eDType;
        ocmdToUse.strmOut() << c4Id;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bCheckUIDExists
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eMType
    , const tCQCMedia::EDataTypes eDType
    , const TString& strUniqueID
    , tCIDLib::TCard4& c4Id
    , TString& strName)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bCheckUIDExists");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eMType;
        ocmdToUse.strmOut() << eDType;
        ocmdToUse.strmOut() << strUniqueID;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4Id;
        ocmdToUse.strmIn() >> strName;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bGetLease
(
    const TString& strLeaseId
    , const tCIDLib::TBoolean bOverride)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bGetLease");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << bOverride;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryArtById
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4Id
    , tCIDLib::TCard4& c4BufSz_mbufArt
    , THeapBuf& mbufArt
    , const tCIDLib::TBoolean bLargeArt
    , const tCIDLib::TBoolean bThrowIfNot)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryArtById");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << bLargeArt;
        ocmdToUse.strmOut() << bThrowIfNot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4BufSz_mbufArt;
        ocmdToUse.strmIn() >> mbufArt;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryCategories
(
    const TString& strLeaseId
    , tCIDLib::TCard4& c4SerialNum
    , const tCQCMedia::EMediaTypes eType
    , TVector<TMediaCat>& colToFill
    , const tCIDLib::TBoolean bIncludeStd)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryCategories");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << c4SerialNum;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << bIncludeStd;
        Dispatch(10000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        if (retVal)
        {
            ocmdToUse.strmIn() >> c4SerialNum;
            ocmdToUse.strmIn() >> colToFill;
        }
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryCollectById
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4Id
    , TMediaCollect& mcolFound
    , const tCIDLib::TBoolean bThrowIfNot)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryCollectById");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << bThrowIfNot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> mcolFound;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryCollectByUID
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const TString& strUniqueID
    , TMediaCollect& mcolFound
    , const tCIDLib::TBoolean bThrowIfNot)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryCollectByUID");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << strUniqueID;
        ocmdToUse.strmOut() << bThrowIfNot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> mcolFound;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryItemById
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4Id
    , TMediaItem& mitemFound
    , const tCIDLib::TBoolean bThrowIfNot)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryItemById");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << bThrowIfNot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> mitemFound;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryTitleSetById
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4Id
    , TMediaTitleSet& mtsFound
    , const tCIDLib::TBoolean bThrowIfNot)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryTitleSetById");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << bThrowIfNot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> mtsFound;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bQueryTitleSetByUID
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const TString& strUniqueID
    , TMediaTitleSet& mtsFound
    , const tCIDLib::TBoolean bThrowIfNot)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryTitleSetByUID");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << strUniqueID;
        ocmdToUse.strmOut() << bThrowIfNot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> mtsFound;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bRepoIsEmpty
(
    const TString& strLeaseId)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bRepoIsEmpty");
        ocmdToUse.strmOut() << strLeaseId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TCQSLRepoMgrClientProxy::bStartUpload
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4FileCount
    , const TMediaTitleSet& mtsUpload
    , const TMediaCollect& mcolUpload
    , const tCIDLib::TCard4 c4BufSz_mbufArt
    , const THeapBuf& mbufArt
    , TString& strHostUpload
    , tCIDLib::TCard4& ippnUpload
    , tCIDLib::TCard4& c4Cookie)
{
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bStartUpload");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4FileCount;
        ocmdToUse.strmOut() << mtsUpload;
        ocmdToUse.strmOut() << mcolUpload;
        ocmdToUse.strmOut() << c4BufSz_mbufArt;
        mbufArt.StreamCount(ocmdToUse.strmOut(), c4BufSz_mbufArt);
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> strHostUpload;
        ocmdToUse.strmIn() >> ippnUpload;
        ocmdToUse.strmIn() >> c4Cookie;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TCQSLRepoMgrClientProxy::c4FindCategory
(
    const TString& strLeaseId
    , const TString& strName
    , const tCQCMedia::EMediaTypes eType)
{
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4FindCategory");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << strName;
        ocmdToUse.strmOut() << eType;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TCQSLRepoMgrClientProxy::c4QueryAvailSlots
(
    const TString& strLeaseId
    , const TString& strChangerMoniker
    , TBitset& btsToFill
    , const tCIDLib::TCard4 c4MaxSlot)
{
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryAvailSlots");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << strChangerMoniker;
        ocmdToUse.strmOut() << c4MaxSlot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> btsToFill;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TCQSLRepoMgrClientProxy::c4QueryAvailSlots2
(
    const TString& strLeaseId
    , const TString& strChangerMoniker
    , TBitset& btsToFill
    , const tCIDLib::TCard4 c4MaxSlot
    , TVector<TString>& colColNames)
{
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryAvailSlots2");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << strChangerMoniker;
        ocmdToUse.strmOut() << c4MaxSlot;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> btsToFill;
        ocmdToUse.strmIn() >> colColNames;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TCQSLRepoMgrClientProxy::c4QueryPlayLists
(
    const TString& strLeaseId
    , TVector<TString>& colNames
    , TFundVector<tCIDLib::TCard2>& fcolIds)
{
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryPlayLists");
        ocmdToUse.strmOut() << strLeaseId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> colNames;
        ocmdToUse.strmIn() >> fcolIds;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::QueryStats
(
    tCIDLib::TCard4& c4MovieTitleCnt
    , tCIDLib::TCard4& c4MovieColCnt
    , tCIDLib::TCard4& c4MovieItemCnt
    , tCIDLib::TCard4& c4MovieArtCnt
    , tCIDLib::TCard4& c4MusicTitleCnt
    , tCIDLib::TCard4& c4MusicColCnt
    , tCIDLib::TCard4& c4MusicItemCnt
    , tCIDLib::TCard4& c4MusicArtCnt
    , TString& strRepoPath)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"QueryStats");
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> c4MovieTitleCnt;
        ocmdToUse.strmIn() >> c4MovieColCnt;
        ocmdToUse.strmIn() >> c4MovieItemCnt;
        ocmdToUse.strmIn() >> c4MovieArtCnt;
        ocmdToUse.strmIn() >> c4MusicTitleCnt;
        ocmdToUse.strmIn() >> c4MusicColCnt;
        ocmdToUse.strmIn() >> c4MusicItemCnt;
        ocmdToUse.strmIn() >> c4MusicArtCnt;
        ocmdToUse.strmIn() >> strRepoPath;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TCard4 TCQSLRepoMgrClientProxy::c4QueryTitleSetChunk
(
    const TString& strLeaseId
    , const tCIDLib::TCard4 c4StartAt
    , const tCIDLib::TCard4 c4GetUpTo
    , const tCQCMedia::EMediaTypes eType
    , TVector<TMediaTitleSet>& colToFill)
{
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryTitleSetChunk");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << c4StartAt;
        ocmdToUse.strmOut() << c4GetUpTo;
        ocmdToUse.strmOut() << eType;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> colToFill;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::CreateCategories
(
    const TString& strLeaseId
    , const TVector<TString>& colNames
    , const tCQCMedia::EMediaTypes eType
    , TFundVector<tCIDLib::TCard2>& fcolIds)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"CreateCategories");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << colNames;
        ocmdToUse.strmOut() << eType;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> fcolIds;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::DeleteCat
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4CatId)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"DeleteCat");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4CatId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::DeleteCollection
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4TitleId
    , const tCIDLib::TCard4 c4ColId)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"DeleteCollection");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4TitleId;
        ocmdToUse.strmOut() << c4ColId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::DeleteTitleSet
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4TitleId)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"DeleteTitleSet");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4TitleId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::DropLease
(
    const TString& strLeaseId)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"DropLease");
        ocmdToUse.strmOut() << strLeaseId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::QueryChangers
(
    TVector<TString>& colMonikersToFill)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"QueryChangers");
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> colMonikersToFill;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::QueryRepoInfo
(
    const TString& strLeaseId
    , tCQCMedia::EMediaTypes& eDefType
    , tCQCMedia::EMTFlags& eFlags)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"QueryRepoInfo");
        ocmdToUse.strmOut() << strLeaseId;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> eDefType;
        ocmdToUse.strmIn() >> eFlags;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::MoveCollect
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4ColId
    , TMediaTitleSet& mtsOld
    , TMediaTitleSet& mtsNew
    , const tCIDLib::TBoolean bCreateNew)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"MoveCollect");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4ColId;
        ocmdToUse.strmOut() << mtsOld;
        ocmdToUse.strmOut() << mtsNew;
        ocmdToUse.strmOut() << bCreateNew;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> mtsOld;
        ocmdToUse.strmIn() >> mtsNew;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::RenameCat
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4Id
    , const TString& strOldName
    , const TString& strNewName)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"RenameCat");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << strOldName;
        ocmdToUse.strmOut() << strNewName;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::SearchAndReplace
(
    const TString& strLeaseId
    , const TString& strFind
    , const TString& strReplace
    , tCIDLib::TCard4& c4ModCnt)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SearchAndReplace");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << strFind;
        ocmdToUse.strmOut() << strReplace;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> c4ModCnt;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::UploadArt
(
    const TString& strLeaseId
    , tCIDLib::TCard4& c4Id
    , const tCQCMedia::EMediaTypes eType
    , const tCIDLib::TCard4 c4BufSz_mbufArt
    , const THeapBuf& mbufArt
    , const tCIDLib::TBoolean bCreate)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"UploadArt");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << c4Id;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << c4BufSz_mbufArt;
        mbufArt.StreamCount(ocmdToUse.strmOut(), c4BufSz_mbufArt);
        ocmdToUse.strmOut() << bCreate;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> c4Id;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::UploadCat
(
    const TString& strLeaseId
    , TMediaCat& mcatToStore
    , const tCIDLib::TBoolean bCreate)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"UploadCat");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << mcatToStore;
        ocmdToUse.strmOut() << bCreate;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> mcatToStore;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::UploadCollect
(
    const TString& strLeaseId
    , TMediaCollect& mcolToStore
    , const tCIDLib::TBoolean bCreate)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"UploadCollect");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << mcolToStore;
        ocmdToUse.strmOut() << bCreate;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> mcolToStore;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::UploadItem
(
    const TString& strLeaseId
    , TMediaItem& mitemToStore
    , const tCIDLib::TBoolean bCreate)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"UploadItem");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << mitemToStore;
        ocmdToUse.strmOut() << bCreate;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> mitemToStore;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::UploadTitleSet
(
    const TString& strLeaseId
    , TMediaTitleSet& mtsToStore
    , const tCIDLib::TBoolean bCreate)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"UploadTitleSet");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << mtsToStore;
        ocmdToUse.strmOut() << bCreate;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> mtsToStore;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TCQSLRepoMgrClientProxy::UploadNewMeta
(
    const TString& strLeaseId
    , const tCQCMedia::EMediaTypes eType
    , const TVector<TString>& colCatNames
    , TMediaTitleSet& mtsToStore
    , TMediaCollect& mcolToStore
    , TVector<TMediaItem>& colItems
    , const tCIDLib::TCard4 c4BufSz_mbufArt
    , const THeapBuf& mbufArt)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"UploadNewMeta");
        ocmdToUse.strmOut() << strLeaseId;
        ocmdToUse.strmOut() << eType;
        ocmdToUse.strmOut() << colCatNames;
        ocmdToUse.strmOut() << mtsToStore;
        ocmdToUse.strmOut() << mcolToStore;
        ocmdToUse.strmOut() << colItems;
        ocmdToUse.strmOut() << c4BufSz_mbufArt;
        mbufArt.StreamCount(ocmdToUse.strmOut(), c4BufSz_mbufArt);
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> mtsToStore;
        ocmdToUse.strmIn() >> mcolToStore;
        ocmdToUse.strmIn() >> colItems;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

