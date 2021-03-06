// ----------------------------------------------------------------------------
//  FILE: CQLogicSh_LSIntfClientProxy.cpp
//  DATE: Fri, Feb 12 21:14:15 2021 -0500
//    ID: 2B54D6A15C078D54-8E985C2CDE56A303
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQLogicSh_.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
AdvRTTIDecls(TLogicSrvClientProxy,TOrbClientBase)


// ----------------------------------------------------------------------------
// TLogicSrvClientProxy: Public, static data
// ----------------------------------------------------------------------------
const TString TLogicSrvClientProxy::strInterfaceId(L"2B54D6A15C078D54-8E985C2CDE56A303");
const TString TLogicSrvClientProxy::strBinding(L"/CQC/LogicServer/LogServerObj");
const TString TLogicSrvClientProxy::strCoreAdminBinding(L"/CQC/LogicServer/CoreAdmin");



// ----------------------------------------------------------------------------
// TLogicSrvClientProxy: Constructors and Destructor
// ----------------------------------------------------------------------------
TLogicSrvClientProxy::TLogicSrvClientProxy()
{
}

TLogicSrvClientProxy::
TLogicSrvClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding)
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

TLogicSrvClientProxy::~TLogicSrvClientProxy()
{
}

// ----------------------------------------------------------------------------
// TLogicSrvClientProxy: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TBoolean TLogicSrvClientProxy::bQueryFields
(
    const tCIDLib::TCard4 c4CfgSerialNum
    , tCIDLib::TCard4& c4BufSz_mbufData
    , COP THeapBuf& mbufData
    , const tCIDLib::TBoolean bReturnAll)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryFields");
        ocmdToUse.strmOut() << c4CfgSerialNum;
        ocmdToUse.strmOut() << bReturnAll;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4BufSz_mbufData;
        ocmdToUse.strmIn().c4ReadBuffer(mbufData, c4BufSz_mbufData);
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

tCIDLib::TBoolean TLogicSrvClientProxy::bQueryGraphSamples
(
    const TString& strFldName
    , CIOP tCIDLib::TCard4& c4CfgSerialNum
    , CIOP tCIDLib::TCard4& c4SerialNum
    , COP tCIDLib::TCard4& c4NewSamples
    , COP TFundVector<tCIDLib::TFloat4>& fcolNewSamples)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bQueryGraphSamples");
        ocmdToUse.strmOut() << strFldName;
        ocmdToUse.strmOut() << c4CfgSerialNum;
        ocmdToUse.strmOut() << c4SerialNum;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4CfgSerialNum;
        ocmdToUse.strmIn() >> c4SerialNum;
        ocmdToUse.strmIn() >> c4NewSamples;
        ocmdToUse.strmIn() >> fcolNewSamples;
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

tCIDLib::TCard4 TLogicSrvClientProxy::c4QueryGraphFlds
(
    COP TVector<TString>& colToFill)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4QueryGraphFlds");
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

tCIDLib::TVoid TLogicSrvClientProxy::QueryConfig
(
    COP TCQLogicSrvCfg& lscfgToFill
    , COP tCIDLib::TCard4& c4CfgSerialNum)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"QueryConfig");
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> lscfgToFill;
        ocmdToUse.strmIn() >> c4CfgSerialNum;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TLogicSrvClientProxy::ResetElTimeFld
(
    const TString& strField)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"ResetElTimeFld");
        ocmdToUse.strmOut() << strField;
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

tCIDLib::TVoid TLogicSrvClientProxy::SetConfig
(
    const TCQLogicSrvCfg& lscfgNew
    , COP tCIDLib::TCard4& c4CfgSerialNum)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetConfig");
        ocmdToUse.strmOut() << lscfgNew;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> c4CfgSerialNum;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

