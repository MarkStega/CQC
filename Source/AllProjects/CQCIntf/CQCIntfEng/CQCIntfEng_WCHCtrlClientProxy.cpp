// ----------------------------------------------------------------------------
//  FILE: CQCIntfEng_WCHCtrlClientProxy.cpp
//  DATE: Fri, Feb 12 21:14:15 2021 -0500
//    ID: D2CE20750A902C56-3E26CBF9499D7A90
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQCIntfEng_.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
AdvRTTIDecls(TCQCWCHelperClientProxy,TOrbClientBase)


// ----------------------------------------------------------------------------
// TCQCWCHelperClientProxy: Public, static data
// ----------------------------------------------------------------------------
const TString TCQCWCHelperClientProxy::strInterfaceId(L"D2CE20750A902C56-3E26CBF9499D7A90");
const TString TCQCWCHelperClientProxy::strParam_CustAR(L"CustAR");



// ----------------------------------------------------------------------------
// TCQCWCHelperClientProxy: Constructors and Destructor
// ----------------------------------------------------------------------------
TCQCWCHelperClientProxy::TCQCWCHelperClientProxy()
{
}

TCQCWCHelperClientProxy::
TCQCWCHelperClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding)
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

TCQCWCHelperClientProxy::~TCQCWCHelperClientProxy()
{
}

// ----------------------------------------------------------------------------
// TCQCWCHelperClientProxy: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TCQCWCHelperClientProxy::Close()
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"Close");
        Dispatch(5000, pcqiToUse);
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

tCIDLib::TVoid TCQCWCHelperClientProxy::Initialize
(
    const TArea& areaPar
    , const TArea& areaWidget
    , const tCIDLib::TBoolean bVisibility)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"Initialize");
        ocmdToUse.strmOut() << areaPar;
        ocmdToUse.strmOut() << areaWidget;
        ocmdToUse.strmOut() << bVisibility;
        Dispatch(5000, pcqiToUse);
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

tCIDLib::TVoid TCQCWCHelperClientProxy::Ping()
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"Ping");
        Dispatch(3000, pcqiToUse);
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

tCIDLib::TVoid TCQCWCHelperClientProxy::SetArea
(
    const TArea& areaPar
    , const TArea& areaWidget)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetArea");
        ocmdToUse.strmOut() << areaPar;
        ocmdToUse.strmOut() << areaWidget;
        Dispatch(3000, pcqiToUse);
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

tCIDLib::TVoid TCQCWCHelperClientProxy::SetMute
(
    const tCIDLib::TBoolean bNewState)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetMute");
        ocmdToUse.strmOut() << bNewState;
        Dispatch(5000, pcqiToUse);
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

tCIDLib::TVoid TCQCWCHelperClientProxy::SetVisibility
(
    const tCIDLib::TBoolean bNewState)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetVisibility");
        ocmdToUse.strmOut() << bNewState;
        Dispatch(5000, pcqiToUse);
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

tCIDLib::TVoid TCQCWCHelperClientProxy::SetVolume
(
    const tCIDLib::TCard4 c4ToSet)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetVolume");
        ocmdToUse.strmOut() << c4ToSet;
        Dispatch(5000, pcqiToUse);
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

