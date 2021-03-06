// ----------------------------------------------------------------------------
//  FILE: CQCKit_IVCtrlClientProxy.hpp
//  DATE: Fri, Feb 12 21:14:14 2021 -0500
//    ID: DC27C0F17755A031-863B6944077CC705
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class CQCKITEXPORT TIntfCtrlClientProxy : public TOrbClientBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strBinding;
        static const TString strScope;



        // --------------------------------------------------------------------
        // Public Constructors and Destructor
        // --------------------------------------------------------------------
        TIntfCtrlClientProxy();
        TIntfCtrlClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding);
        TIntfCtrlClientProxy(const TIntfCtrlClientProxy&) = delete;
        TIntfCtrlClientProxy(TIntfCtrlClientProxy&&) = delete;
        ~TIntfCtrlClientProxy();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TIntfCtrlClientProxy& operator=(const TIntfCtrlClientProxy&) = delete;
        TIntfCtrlClientProxy& operator=(TIntfCtrlClientProxy&&) = delete;

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
        tCIDLib::TBoolean bSpeakText
        (
            const TString& strToSpeak
        );

        tCIDLib::TCard4 c4Poll
        (
            COP TString& strBaseTmpl
            , COP TString& strTopTmpl
            , COP tCIDLib::TBoolean& bMaximized
        );

        tCIDLib::TVoid DoFrameOp
        (
            const tCQCKit::EIVFrmOps eOp
        );

        tCIDLib::TVoid DoMiscOp
        (
            const tCQCKit::EIVMiscOps eOp
        );

        tCIDLib::TVoid Invoke();

        tCIDLib::TVoid LoadOverlay
        (
            const TString& strOvrName
            , const TString& strTmplName
        );

        tCIDLib::TVoid LoadTemplate
        (
            const TString& strTmplName
        );

        tCIDLib::TVoid Navigation
        (
            const tCQCKit::EScrNavOps eOp
        );

        tCIDLib::TVoid PlayWAV
        (
            const TString& strPath
        );

        tCIDLib::TVoid SetGlobalVar
        (
            const TString& strVarName
            , const TString& strValue
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
        RTTIDefs(TIntfCtrlClientProxy,TOrbClientBase)
};

#pragma CIDLIB_POPPACK

inline tCIDLib::TVoid
TIntfCtrlClientProxy::SetObjId(const  TOrbObjId& ooidToSet
              , const TString& strNSBinding
              , const tCIDLib::TBoolean bCheck)
{
    TParent::SetObjId(ooidToSet, strNSBinding, bCheck);
}

