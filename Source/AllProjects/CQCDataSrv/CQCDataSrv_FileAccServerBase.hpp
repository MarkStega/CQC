// ----------------------------------------------------------------------------
//  FILE: CQCDataSrv_FileAccServerBase.hpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//    ID: EE2558A6FCEB5778-42F61F03A90E99D3
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class  TDataSrvAccServerBase : public TOrbServerBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strBinding;


        // --------------------------------------------------------------------
        // Constructors and destructor
        // --------------------------------------------------------------------
        TDataSrvAccServerBase(const TDataSrvAccServerBase&) = delete;
        TDataSrvAccServerBase(TDataSrvAccServerBase&&) = delete;
        ~TDataSrvAccServerBase();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TDataSrvAccServerBase& operator=(const TDataSrvAccServerBase&) = delete;
        TDataSrvAccServerBase& operator=(TDataSrvAccServerBase&&) = delete;

        // --------------------------------------------------------------------
        // Public, pure virtual methods
        // --------------------------------------------------------------------
        virtual tCIDLib::TBoolean bFind
        (
            const TString& strHPath
            , TFindBuf& fndbToFill
            , const tCIDLib::TBoolean bIsScope
        ) = 0;

        virtual tCIDLib::TBoolean bExists
        (
            const TString& strHPath
            , const tCIDLib::TBoolean bIsScope
        ) = 0;

        virtual tCIDLib::TBoolean bIsScope
        (
            const TString& strHToCheck
        ) = 0;

        virtual tCIDLib::TBoolean bQueryExtChunk
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strHPath
            , const TString& strExtChunkId
            , tCIDLib::TCard4& c4BufSz_mbufExtChunk
            , THeapBuf& mbufExtChunk
            , const TCQCSecToken& sectUser
            , const tCIDLib::TBoolean bNoCache
        ) = 0;

        virtual tCIDLib::TBoolean bQueryFileFirst
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strHPath
            , tCIDLib::TCard4& c4Cookie
            , tCIDLib::TCard4& c4FullDataSz
            , TVector<TKeyValFPair>& colMeta
            , tCIDLib::TCard4& c4BufSz_mbufFirstBlock
            , THeapBuf& mbufFirstBlock
            , TString& strExtChunkId
            , tCIDLib::TCard4& c4BufSz_mbufExtChunk
            , THeapBuf& mbufExtChunk
            , tCIDLib::TCard4& c4Flags
            , tCIDLib::TCard8& lastChange
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TBoolean bQueryFileNext
        (
            const tCIDLib::TCard4 c4Cookie
            , tCIDLib::TCard4& c4BufSz_mbufData
            , THeapBuf& mbufData
        ) = 0;

        virtual tCIDLib::TBoolean bQueryItemMeta
        (
            const TString& strPath
            , TVector<TKeyValFPair>& colMetaVals
            , TVector<TString>& colChunkIds
            , TFundVector<tCIDLib::TCard4>& fcolChunkSizes
            , tCIDLib::TCard4& c4SerialNum
            , tCIDLib::TCard8& enctLastChange
            , const tCIDLib::TBoolean bThrowIfNot
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TBoolean bQueryScopeNames
        (
            tCIDLib::TCard4& c4ScopeId
            , const TString& strPath
            , TVector<TString>& colNames
            , const tCQCRemBrws::EQSFlags eQSFlags
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid DeletePath
        (
            const TString& strPath
            , const tCIDLib::TBoolean bIsScope
            , const tCIDLib::TBoolean bMustExist
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::ERenameRes eRenameItem
        (
            const TString& strParPath
            , const TString& strOldName
            , const TString& strNewName
            , const tCIDLib::TBoolean bIsScope
            , tCIDLib::TCard4& c4ParScopeId
            , tCIDLib::TCard4& c4TarItemId
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid GenerateReport
        (
            const TString& strDescription
            , const TFundVector<tCQCRemBrws::EDTypes>& fcolTypes
            , tCIDLib::TCard4& c4BufSz_mbufReportData
            , THeapBuf& mbufReportData
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid GenerateTypeReport
        (
            const TString& strDescription
            , const TString& strHPathScope
            , const tCIDLib::TBoolean bRecurse
            , tCIDLib::TCard4& c4BufSz_mbufReportData
            , THeapBuf& mbufReportData
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid MakeNewScope
        (
            const TString& strParScope
            , const TString& strNewSubScope
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid MakePath
        (
            const TString& strPath
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid PastePath
        (
            const TString& strSrcPath
            , const TString& strTarScope
            , const tCIDLib::TBoolean bSrcIsScope
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid Ping() = 0;

        virtual tCIDLib::TVoid QueryItemInfo
        (
            const TString& strPath
            , tCIDLib::TBoolean& bIsScope
            , TFundVector<tCIDLib::TCard4>& fcolPathIds
            , TDSBrowseItem& dsbiToFill
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryItemInfo2
        (
            const TString& strPath
            , tCIDLib::TBoolean& bIsScope
            , TFundVector<tCIDLib::TCard4>& fcolPathIds
            , TDSBrowseItem& dsbiTarget
            , TDSBrowseItem& dsbiParScope
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryPathIds
        (
            const TString& strPath
            , tCIDLib::TBoolean& bIsScope
            , tCIDLib::TCard4& c4ItemId
            , tCIDLib::TCard4& c4ScopeId
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryPathIds
        (
            const TString& strPath
            , tCIDLib::TBoolean& bIsScope
            , TFundVector<tCIDLib::TCard4>& fcolPathIds
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryScopeItems
        (
            const TString& strPath
            , TFundVector<tCIDLib::TCard4>& fcolPathIds
            , TVector<TDSBrowseItem>& colItems
            , const tCIDLib::TBoolean bItemsOnly
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryTree
        (
            const TString& strStartScope
            , TString& strXML
            , const tCIDLib::TBoolean bSparse
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryTree2
        (
            const TString& strStartScope
            , TVector<TString>& colList
            , const tCIDLib::TBoolean bSparse
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid SetEventPauseState
        (
            const TString& strHPath
            , tCIDLib::TCard4& c4NewSerialNum
            , tCIDLib::TCard8& enctLastChange
            , const tCIDLib::TBoolean bToSet
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid SetPeriodicEvTime
        (
            const TString& strHPath
            , tCIDLib::TCard4& c4NewSerialNum
            , tCIDLib::TCard8& enctLastChange
            , const tCIDLib::TCard4 c4Period
            , const tCIDLib::TCard8 enctStartAt
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid SetScheduledEvTime
        (
            const TString& strHPath
            , tCIDLib::TCard4& c4NewSerialNum
            , tCIDLib::TCard8& enctLastChange
            , const tCIDLib::TCard4 c4Day
            , const tCIDLib::TCard4 c4Hour
            , const tCIDLib::TCard4 c4Minute
            , const tCIDLib::TCard4 c4Mask
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid SetSunBasedEvOffset
        (
            const TString& strHPath
            , tCIDLib::TCard4& c4NewSerialNum
            , tCIDLib::TCard8& enctLastChange
            , const tCIDLib::TInt4 i4Offset
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid UploadFirst
        (
            const TString& strHPath
            , tCIDLib::TCard4& c4Cookie
            , tCIDLib::TCard4& c4SerialNum
            , const tCIDLib::TCard4 c4DataChunkSz
            , const TVector<TKeyValFPair>& colMetaVals
            , const tCIDLib::TCard4 c4BufSz_mbufFirstBlock
            , THeapBuf&& mbufFirstBlock
            , const TString& strExtChunkId
            , const tCIDLib::TCard4 c4BufSz_mbufExtChunk
            , THeapBuf&& mbufExtChunk
            , const tCIDLib::TCard4 c4Flags
            , tCIDLib::TCard8& enctLastChange
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid UploadNext
        (
            const tCIDLib::TCard4 c4BufSz_mbufData
            , const THeapBuf& mbufData
            , const tCIDLib::TCard4 c4Cookie
            , const tCIDLib::TBoolean bLast
            , tCIDLib::TCard4& c4SerialNum
            , tCIDLib::TCard8& enctLastChange
        ) = 0;

    protected :
        // --------------------------------------------------------------------
        // Hidden constructors
        // --------------------------------------------------------------------
        TDataSrvAccServerBase();
        TDataSrvAccServerBase(const TOrbObjId& ooidThis);

        // --------------------------------------------------------------------
        // Protected, inherited methods
        // --------------------------------------------------------------------
        tCIDLib::TVoid Dispatch
        (
            const  TString&      strMethodName
            ,      TOrbCmd&      orbcToDispatch
        )   override;

    private :
        // --------------------------------------------------------------------
        // Magic macros
        // --------------------------------------------------------------------
        RTTIDefs(TDataSrvAccServerBase,TOrbServerBase)
};

#pragma CIDLIB_POPPACK
