// ----------------------------------------------------------------------------
//  FILE: CQCAppShell_AppShellAdminServerBase.cpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//    ID: 78E315ECD585BF17-A16F26D604EC670D
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "CQCAppShell.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
RTTIDecls(TCQCAppShellAdminServerBase,TOrbServerBase)


// ----------------------------------------------------------------------------
// Public, static data
// ----------------------------------------------------------------------------
const TString TCQCAppShellAdminServerBase::strInterfaceId(L"78E315ECD585BF17-A16F26D604EC670D");
const TString TCQCAppShellAdminServerBase::strScope(L"/CQC/CQCAppShell");


// ----------------------------------------------------------------------------
// TCQCAppShellAdminServerBase: Destructor
// ----------------------------------------------------------------------------
TCQCAppShellAdminServerBase::~TCQCAppShellAdminServerBase()
{
}

// ----------------------------------------------------------------------------
// TCQCAppShellAdminServerBase: Protected Constructors
// ----------------------------------------------------------------------------
TCQCAppShellAdminServerBase::TCQCAppShellAdminServerBase() :
    TOrbServerBase(strInterfaceId, L"TCQCAppShellAdminClientProxy" )
{
}

TCQCAppShellAdminServerBase::TCQCAppShellAdminServerBase(const TOrbObjId& ooidThis) :
    TOrbServerBase(ooidThis)
{
}

// ----------------------------------------------------------------------------
// TCQCAppShellAdminServerBase: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TVoid TCQCAppShellAdminServerBase::Dispatch(const TString& strMethodName, TOrbCmd& orbcToDispatch)
{
    if (strMethodName == L"bQueryNewMsgs")
    {
        tCIDLib::TCard4 c4MsgIndex = {};
        orbcToDispatch.strmIn() >> c4MsgIndex;
        TVector<TString> colMsgs;
        tCIDLib::TBoolean bAddNewLines;
        orbcToDispatch.strmIn() >> bAddNewLines;
        tCIDLib::TBoolean retVal = bQueryNewMsgs
        (
            c4MsgIndex
          , colMsgs
          , bAddNewLines
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        if (retVal)
        {
            orbcToDispatch.strmOut() << c4MsgIndex;
            orbcToDispatch.strmOut() << colMsgs;
        }
    }
     else if (strMethodName == L"c4QueryApps")
    {
        TVector<TKeyValuePair> colApps;
        tCIDLib::TCard4 retVal = c4QueryApps
        (
            colApps
        );
        orbcToDispatch.strmOut().Reset();
        orbcToDispatch.strmOut() << retVal;
        orbcToDispatch.strmOut() << colApps;
    }
     else if (strMethodName == L"CycleApps")
    {
        CycleApps
        (
        );
        orbcToDispatch.strmOut().Reset();
    }
     else
    {
         TParent::Dispatch(strMethodName, orbcToDispatch);
    }
}

