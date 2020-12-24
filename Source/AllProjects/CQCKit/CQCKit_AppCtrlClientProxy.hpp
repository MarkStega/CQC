// ----------------------------------------------------------------------------
//  FILE: CQCKit_AppCtrlClientProxy.hpp
//  DATE: Fri, Feb 14 18:49:45 2020 -0500
//    ID: C62872FCFFA4BFF1-D3D869839AA78EEE
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class CQCKITEXPORT TAppCtrlClientProxy : public TOrbClientBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strImplScope;
        static const TString strImplBinding;



        // --------------------------------------------------------------------
        // Public Constructors and Destructor
        // --------------------------------------------------------------------
        TAppCtrlClientProxy();
        TAppCtrlClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding);
        TAppCtrlClientProxy(const TAppCtrlClientProxy&) = delete;
        TAppCtrlClientProxy(TAppCtrlClientProxy&&) = delete;
        ~TAppCtrlClientProxy();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TAppCtrlClientProxy& operator=(const TAppCtrlClientProxy&) = delete;
        TAppCtrlClientProxy& operator=(TAppCtrlClientProxy&&) = delete;

        // --------------------------------------------------------------------
        // Public, inherited methods
        // --------------------------------------------------------------------
        tCIDLib::TVoid SetObjId
        (
            const   TOrbObjId& ooidToSet
            , const TString& strNSBinding
            , const tCIDLib::TBoolean bCheck = kCIDLib::True
        )   override;

        // --------------------------------------------------------------------
        // Public, non-virtual methods
        // --------------------------------------------------------------------
        tCIDLib::TVoid AddRecord
        (
            const TString& strMoniker
            , const TString& strAppTitle
            , const TString& strAppName
            , const TString& strParams
            , const TString& strWorkingDir
        );

        tCIDLib::TBoolean bAppRegistered
        (
            const TString& strMoniker
            , const TString& strAppTitle
        );

        tCIDLib::TBoolean bIsRunning
        (
            const TString& strMoniker
        );

        tCIDLib::TBoolean bIsVisible
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
        );

        tCIDLib::TBoolean bInvokeFile
        (
            const TString& strPath
            , const TString& strShow
        );

        tCIDLib::TBoolean bStartApp
        (
            const TString& strAppPath
            , const TString& strParams
            , const TString& strInitPath
        );

        tCIDLib::TBoolean bStart
        (
            const TString& strMoniker
        );

        tCIDLib::TBoolean bStartWithParams
        (
            const TString& strMoniker
            , const TString& strParams
        );

        tCIDLib::TBoolean bStartAppViaOpen
        (
            const TString& strMoniker
            , const TString& strDocPath
            , const TString& strInitPath
            , const TString& strShow
        );

        tCIDLib::TBoolean bStop
        (
            const TString& strMoniker
        );

        tCIDLib::TCard4 c4AddWindow
        (
            const TString& strMoniker
            , const TString& strPath
        );

        tCIDLib::TCard4 c4AddWindowByClass
        (
            const TString& strMoniker
            , const TString& strClass
        );

        tCIDLib::TCard4 c4QueryListSel
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
        );

        tCIDLib::TCard4 c4QueryText
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , TString& strToFill
        );

        tCIDLib::TInt4 i4QueryTrackBar
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
        );

        tCIDLib::TCard4 c4QueryWndStyles
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
        );

        tCIDLib::TInt4 i4SendMsg
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TCard4 MsgId
            , const tCIDLib::TCard4 c4Param
            , const tCIDLib::TInt4 i4Param
            , const tCIDLib::TBoolean bAsync
        );

        tCIDLib::TVoid Ping();

        tCIDLib::TVoid RemoveRecord
        (
            const TString& strMoniker
        );

        tCIDLib::TVoid SetListSel
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TCard4 c4Index
        );

        tCIDLib::TVoid SendExtKey
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDCtrls::EExtKeys eExtKey
            , const tCIDLib::TBoolean bAltShifted
            , const tCIDLib::TBoolean bCtrlShifted
            , const tCIDLib::TBoolean bShifted
        );

        tCIDLib::TVoid SendKey
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TCh chKey
            , const tCIDLib::TBoolean bAltShifted
            , const tCIDLib::TBoolean bCtrlShifted
            , const tCIDLib::TBoolean bShifted
        );

        tCIDLib::TVoid SetFocus
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
        );

        tCIDLib::TVoid SetTrackBar
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TInt4 i4ToSet
        );

        tCIDLib::TVoid SetWindowPos
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TInt4 i4X
            , const tCIDLib::TInt4 i4Y
        );

        tCIDLib::TVoid SetWindowSize
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TCard4 c4Width
            , const tCIDLib::TCard4 c4Height
        );

        tCIDLib::TVoid SetWindowText
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const TString& strText
        );

        tCIDLib::TVoid ShowWindow
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCIDLib::TBoolean bState
        );

        tCIDLib::TVoid StandardOp
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4Id
            , const tCIDLib::TCard4 c4ChildId
            , const tCQCKit::EStdACOps eOp
        );

    protected :
        // --------------------------------------------------------------------
        // Declare our friends
        // --------------------------------------------------------------------
        friend class TFacCIDOrb;

    private :
        // --------------------------------------------------------------------
        // Magic macros
        // --------------------------------------------------------------------
        RTTIDefs(TAppCtrlClientProxy,TOrbClientBase)
};

#pragma CIDLIB_POPPACK

inline tCIDLib::TVoid
TAppCtrlClientProxy::SetObjId(const  TOrbObjId& ooidToSet
              , const TString& strNSBinding
              , const tCIDLib::TBoolean bCheck)
{
    TParent::SetObjId(ooidToSet, strNSBinding, bCheck);
}

