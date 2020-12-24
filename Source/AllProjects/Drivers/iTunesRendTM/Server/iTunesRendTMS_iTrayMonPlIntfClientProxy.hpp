// ----------------------------------------------------------------------------
//  FILE: iTunesRendTMS_iTrayMonPlIntfClientProxy.hpp
//  DATE: Fri, Feb 14 18:49:47 2020 -0500
//    ID: 016EC0A20CCA441C-F05CAF46433D51D7
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class  TiTPlayerIntfClientProxy : public TOrbClientBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strImplScope;
        static const TString strImplBinding;


        
        // ------------------------------------------------------------------------
        //  Transport control values used in the player command call.
        //                  
        // ------------------------------------------------------------------------
        enum class EPlCmds
        {
            None
            , FF
            , FullScrOff
            , FullScrOn
            , Next
            , Pause
            , Play
            , Previous
            , Rewind
            , Stop
            , VisualsOff
            , VisualsOn
            , Count
            , Min = None
            , Max = VisualsOn
        };
        static  EPlCmds eXlatEPlCmds(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
        static  const TString& strXlatEPlCmds(const EPlCmds eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
        static  tCIDLib::TBoolean bIsValidEnum(const EPlCmds eVal);

        
        // ------------------------------------------------------------------------
        //  Transport control values used in the player command call.
        //                  
        // ------------------------------------------------------------------------
        enum class EPlStates
        {
            None
            , Playing
            , Stopped
            , Unknown
            , Count
            , Min = None
            , Max = Unknown
        };
        static  EPlStates eXlatEPlStates(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
        static  const TString& strXlatEPlStates(const EPlStates eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
        static  tCIDLib::TBoolean bIsValidEnum(const EPlStates eVal);




        // --------------------------------------------------------------------
        // Public Constructors and Destructor
        // --------------------------------------------------------------------
        TiTPlayerIntfClientProxy();
        TiTPlayerIntfClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding);
        TiTPlayerIntfClientProxy(const TiTPlayerIntfClientProxy&) = delete;
        TiTPlayerIntfClientProxy(TiTPlayerIntfClientProxy&&) = delete;
        ~TiTPlayerIntfClientProxy();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TiTPlayerIntfClientProxy& operator=(const TiTPlayerIntfClientProxy&) = delete;
        TiTPlayerIntfClientProxy& operator=(TiTPlayerIntfClientProxy&&) = delete;

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
        tCIDLib::TBoolean bGetPlayerState
        (
            tCIDLib::TCard4& c4Serial
            , tCIDLib::TBoolean& bConnected
            , tCIDLib::TCard4& c4Volume
            , TiTPlayerIntfClientProxy::EPlStates& ePlState
            , tCIDLib::TBoolean& bMute
            , tCIDLib::TCard8& enctTotal
            , tCIDLib::TCard8& enctCur
            , TString& strCurAlbum
            , TString& strCurArtist
            , TString& strCurTrack
        );

        tCIDLib::TVoid DoPlayerCmd
        (
            const TiTPlayerIntfClientProxy::EPlCmds eCmd
        );

        tCIDLib::TVoid SelPLByCookie
        (
            const TString& strTitleCookie
        );

        tCIDLib::TVoid SelTrackByCookie
        (
            const TString& strItemCookie
        );

        tCIDLib::TVoid SetMute
        (
            const tCIDLib::TBoolean bToSet
        );

        tCIDLib::TVoid SetVolume
        (
            const tCIDLib::TCard4 c4ToSet
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
        RTTIDefs(TiTPlayerIntfClientProxy,TOrbClientBase)
};

#pragma CIDLIB_POPPACK

inline tCIDLib::TVoid
TiTPlayerIntfClientProxy::SetObjId(const  TOrbObjId& ooidToSet
              , const TString& strNSBinding
              , const tCIDLib::TBoolean bCheck)
{
    TParent::SetObjId(ooidToSet, strNSBinding, bCheck);
}

 TBinOutStream& operator<<(TBinOutStream& strmTar, const TiTPlayerIntfClientProxy::EPlCmds eToStream);
 TBinInStream& operator>>(TBinInStream& strmSrc, TiTPlayerIntfClientProxy::EPlCmds& eToFill);
 tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, TiTPlayerIntfClientProxy::EPlCmds* const aeList, const tCIDLib::TCard4 c4Count);
 tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const TiTPlayerIntfClientProxy::EPlCmds* const aeList, const tCIDLib::TCard4 c4Count);
 TiTPlayerIntfClientProxy::EPlCmds operator++(TiTPlayerIntfClientProxy::EPlCmds& eVal, int);

 TBinOutStream& operator<<(TBinOutStream& strmTar, const TiTPlayerIntfClientProxy::EPlStates eToStream);
 TBinInStream& operator>>(TBinInStream& strmSrc, TiTPlayerIntfClientProxy::EPlStates& eToFill);
 tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, TiTPlayerIntfClientProxy::EPlStates* const aeList, const tCIDLib::TCard4 c4Count);
 tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const TiTPlayerIntfClientProxy::EPlStates* const aeList, const tCIDLib::TCard4 c4Count);
 TiTPlayerIntfClientProxy::EPlStates operator++(TiTPlayerIntfClientProxy::EPlStates& eVal, int);

