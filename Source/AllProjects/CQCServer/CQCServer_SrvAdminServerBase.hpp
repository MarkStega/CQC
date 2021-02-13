// ----------------------------------------------------------------------------
//  FILE: CQCServer_SrvAdminServerBase.hpp
//  DATE: Fri, Feb 12 21:14:16 2021 -0500
//    ID: 1657103AEC7B0F90-32ED41A37653A3E1
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class  TCQCSrvAdminServerBase : public TOrbServerBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strAdminScope;
        static const TString strDrvScope;
        static const TString strCoreAdminScope;
        static const TString strCoreAdminBinding;


        // --------------------------------------------------------------------
        // Constructors and destructor
        // --------------------------------------------------------------------
        TCQCSrvAdminServerBase(const TCQCSrvAdminServerBase&) = delete;
        TCQCSrvAdminServerBase(TCQCSrvAdminServerBase&&) = delete;
        ~TCQCSrvAdminServerBase();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TCQCSrvAdminServerBase& operator=(const TCQCSrvAdminServerBase&) = delete;
        TCQCSrvAdminServerBase& operator=(TCQCSrvAdminServerBase&&) = delete;

        // --------------------------------------------------------------------
        // Public, pure virtual methods
        // --------------------------------------------------------------------
        virtual tCIDLib::TBoolean bCheckFieldExists
        (
            const TString& strMoniker
            , COP tCIDLib::TBoolean& bDevExists
            , const TString& strField
            , COP tCIDLib::TBoolean& bFldExists
        ) = 0;

        virtual tCIDLib::TBoolean bCheckForAllNewFields
        (
            const tCIDLib::TCard4 c4DriverListId
            , const TFundVector<tCIDLib::TCard8>& fcolIds
        ) = 0;

        virtual tCIDLib::TBoolean bCheckForNewFields
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
        ) = 0;

        virtual tCIDLib::TBoolean bCheckForNewDrivers
        (
            const tCIDLib::TCard4 c4DriverListId
        ) = 0;

        virtual tCIDLib::TBoolean bHasQueuedTimedWrite
        (
            const TString& strMoniker
            , const TString& strField
            , COP tCIDLib::TCard8& c8EndTime
        ) = 0;

        virtual tCIDLib::TBoolean bLoadDrivers
        (
            const TVector<TString>& colMonikers
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TBoolean bQueryCommPorts
        (
            COP TVector<TString>& colToFill
            , const tCIDLib::TBoolean bLocalOnly
            , const tCIDLib::TBoolean bAvailOnly
        ) = 0;

        virtual tCIDLib::TBoolean bQueryData
        (
            const TString& strMoniker
            , const TString& strQueryType
            , const TString& strDataName
            , tCIDLib::TCard4& c4BufSz_mbufToFill
            , COP THeapBuf& mbufToFill
        ) = 0;

        virtual tCIDLib::TBoolean bQueryData2
        (
            const TString& strMoniker
            , const TString& strQueryType
            , tCIDLib::TCard4& c4BufSz_mbufIO
            , CIOP THeapBuf& mbufIO
        ) = 0;

        virtual tCIDLib::TBoolean bQueryDriverInfo
        (
            const TString& strMoniker
            , COP TCQCDriverObjCfg& cqcdcToFill
        ) = 0;

        virtual tCIDLib::TBoolean bQueryDriverStates
        (
            const tCIDLib::TCard4 c4DriverListId
            , COP TFundVector<tCIDLib::TCard4>& fcolIds
            , COP TFundVector<tCQCKit::EDrvStates>& fcolStates
        ) = 0;

        virtual tCIDLib::TBoolean bQueryTextVal
        (
            const TString& strMoniker
            , const TString& strQueryType
            , const TString& strDataName
            , COP TString& strToFill
        ) = 0;

        virtual tCIDLib::TBoolean bQueryVal
        (
            const TString& strMoniker
            , const TString& strValId
            , const tCIDLib::TBoolean bNoQueue = kCIDLib::False
        ) = 0;

        virtual tCIDLib::TBoolean bQueryVal2
        (
            const TString& strMoniker
            , const TString& strValId
            , const TString& strValName
            , const tCIDLib::TBoolean bNoQueue = kCIDLib::False
        ) = 0;

        virtual tCIDLib::TBoolean bReadField
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , CIOP tCIDLib::TCard4& c4SerialNum
            , COP TString& strValue
            , COP tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadField
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , CIOP tCIDLib::TCard4& c4SerialNum
            , tCIDLib::TCard4& c4BufSz_mbufValue
            , COP THeapBuf& mbufValue
            , COP tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadFieldByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , TString& strToFill
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadFieldByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TCard4& c4BufSz_mbufValue
            , THeapBuf& mbufValue
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadBoolByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TBoolean& bToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadCardByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TCard4& c4ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadFloatByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TFloat8& f8ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadIntByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TInt4& i4ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadSListByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , COP TVector<TString>& colValue
        ) = 0;

        virtual tCIDLib::TBoolean bReadStringByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , TString& strToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadTimeByName
        (
            CIOP tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TCard8& c8ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bSendData
        (
            const TString& strMoniker
            , const TString& strSendType
            , CIOP TString& strDataName
            , tCIDLib::TCard4& c4BufSz_mbufIO
            , CIOP THeapBuf& mbufIO
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryAudioDevs
        (
            COP TVector<TString>& colToFill
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverConfigObjs
        (
            COP TVector<TCQCDriverObjCfg>& colToFill
            , COP tCIDLib::TCard4& c4DriverListId
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverId
        (
            const TString& strMoniker
            , COP tCIDLib::TCard4& c4DriverListId
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverIds
        (
            const TVector<TString>& colMonikers
            , COP TFundVector<tCIDLib::TCard4>& fcolIds
            , COP TVector<TKeyValuePair>& colToFill
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverIdList
        (
            COP TVector<TString>& colMonikers
            , COP TFundVector<tCIDLib::TCard4>& fcolIds
            , COP TVector<TKeyValuePair>& colToFill
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverIdList2
        (
            COP TVector<TString>& colMonikers
            , COP TFundVector<tCIDLib::TCard4>& fcolIds
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryFields
        (
            const TString& strMoniker
            , COP tCQCKit::EDrvStates& eState
            , COP TVector<TCQCFldDef>& colToFill
            , COP tCIDLib::TCard4& c4FldListId
            , COP tCIDLib::TCard4& c4DriverId
            , COP tCIDLib::TCard4& c4DriverListId
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryFieldNames
        (
            const TString& strMoniker
            , COP TVector<TString>& colToFill
            , const tCQCKit::EReqAccess eReqAccess
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryFieldNamesRX
        (
            const TString& strMoniker
            , COP TVector<TCQCFldDef>& colToFill
            , const TString& strFldNameRegEx
            , const tCQCKit::EReqAccess eReqAccess
        ) = 0;

        virtual tCIDLib::TCard4 c4QuerySemFields
        (
            const TFundVector<tCQCKit::EFldSTypes>& folTypes
            , const tCQCKit::EReqAccess eReqAccess
            , COP TVector<TCQCDrvFldDef>& colToFill
            , const TString& strMoniker
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryTTSVoices
        (
            COP TVector<TString>& colToFill
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryVal
        (
            const TString& strMoniker
            , const TString& strValId
            , const tCIDLib::TBoolean bNoQueue = kCIDLib::False
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryVal2
        (
            const TString& strMoniker
            , const TString& strValId
            , const TString& strValName
            , const tCIDLib::TBoolean bNoQueue = kCIDLib::False
        ) = 0;

        virtual tCIDLib::TCard4 c4SendCmd
        (
            const TString& strMoniker
            , const TString& strCmdId
            , const TString& strParms
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid CancelTimedWrite
        (
            const TString& strMoniker
            , const TString& strField
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid ClearDrvStats
        (
            const TString& strMoniker
        ) = 0;

        virtual tCIDLib::TVoid DoTimedWrite
        (
            const TString& strMoniker
            , const TString& strField
            , const TString& strNewVal
            , const TString& strFinalVal
            , const tCIDLib::TCard4 Seconds
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TInt4 i4QueryVal
        (
            const TString& strMoniker
            , const TString& strValId
            , const tCIDLib::TBoolean bNoQueue = kCIDLib::False
        ) = 0;

        virtual tCIDLib::TInt4 i4QueryVal2
        (
            const TString& strMoniker
            , const TString& strValId
            , const TString& strValName
            , const tCIDLib::TBoolean bNoQueue = kCIDLib::False
        ) = 0;

        virtual tCIDLib::TVoid QueryConfig
        (
            const TString& strMoniker
            , tCIDLib::TCard4& c4BufSz_mbufData
            , COP THeapBuf& mbufData
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryDriverInfo
        (
            const TString& strMoniker
            , COP tCQCKit::EDrvStates& eStatus
            , COP tCIDLib::TCard4& c4ArchVer
            , COP TFundVector<tCQCKit::EDevClasses>& fcolDevClasses
            , COP TString& strMake
            , COP TString& strModel
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryDriverState
        (
            const TString& strMoniker
            , COP tCQCKit::EDrvStates& eStatus
            , COP tCQCKit::EVerboseLvls& eVerboseLvl
            , COP tCIDLib::TCard4& c4ThreadId
        ) = 0;

        virtual tCIDLib::TVoid QueryDriverStats
        (
            const TString& strMoniker
            , COP TCQCDrvStats& cdstats
        ) = 0;

        virtual tCIDLib::TVoid QueryFieldDef
        (
            const TString& strMoniker
            , const TString& strField
            , COP TCQCFldDef& flddToFill
        ) = 0;

        virtual tCIDLib::TVoid QueryFieldInfo
        (
            const TString& strMoniker
            , const TString& strField
            , COP tCIDLib::TCard4& c4DriverListId
            , COP tCIDLib::TCard4& c4DriverId
            , COP tCIDLib::TCard4& c4FieldListId
            , COP tCIDLib::TCard4& c4FieldId
            , COP tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TVoid QueryPowerStates
        (
            const TVector<TKeyValuePair>& colDrvNames
            , COP TFundVector<tCQCKit::EPowerStatus>& fcolStates
        ) = 0;

        virtual tCIDLib::TVoid QueryStatusReport
        (
            COP TString& strErrList
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid PauseResumeDrv
        (
            const TString& strMoniker
            , const tCIDLib::TBoolean bPause
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid ReadDriverFields
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const TFundVector<tCIDLib::TCard4>& fcolFldIds
            , const TFundVector<tCIDLib::TCard4>& fcolSerialNums
            , tCIDLib::TCard4& c4BufSz_mbufData
            , COP THeapBuf& mbufData
        ) = 0;

        virtual tCIDLib::TVoid ReadFields
        (
            const TFldIOPacket& fiopInfo
            , tCIDLib::TCard4& c4BufSz_mbufData
            , COP THeapBuf& mbufData
        ) = 0;

        virtual tCIDLib::TVoid ReadFieldsByName
        (
            const TString& strMoniker
            , const TVector<TString>& colFieldNames
            , tCIDLib::TCard4& c4BufSz_mbufData
            , COP THeapBuf& mbufData
        ) = 0;

        virtual tCIDLib::TVoid ReconfigDriver
        (
            const TString& strMoniker
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid RefreshCfg
        (
            const TString& strCfgType
        ) = 0;

        virtual tCIDLib::TVoid SetConfig
        (
            const TString& strMoniker
            , const tCIDLib::TCard4 c4BufSz_mbufNewCfg
            , const THeapBuf& mbufNewCfg
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid SetVerboseLevel
        (
            const TString& strMoniker
            , const tCQCKit::EVerboseLvls eToSet
        ) = 0;

        virtual tCIDLib::TVoid UnloadAllDrivers
        (
            const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid UnloadDriver
        (
            const TString& strMonikerToUnload
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid UpdateTriggers
        (
            const TString& strMoniker
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid WriteFieldByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const TString& strValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteBoolByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const tCIDLib::TBoolean bValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteBoolFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const tCIDLib::TBoolean bValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteCardByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const tCIDLib::TCard4 c4Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteCardFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const tCIDLib::TCard4 c4Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteFloatByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const tCIDLib::TFloat8 f8Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteFloatFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const tCIDLib::TFloat8 f8Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteIntByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const tCIDLib::TInt4 i4Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteIntFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const tCIDLib::TInt4 i4Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteStringByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const TString& strValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteStringFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const TString& strValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteSListByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const TVector<TString>& colValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteSListFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const TVector<TString>& colValue
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteTimeByName
        (
            const TString& strMoniker
            , const TString& strFldName
            , const tCIDLib::TCard8 c8Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

        virtual tCIDLib::TVoid WriteTimeFld
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , const tCIDLib::TCard8 c8Value
            , const TCQCSecToken& sectUser
            , const tCQCKit::EDrvCmdWaits eWait
        ) = 0;

    protected :
        // --------------------------------------------------------------------
        // Hidden constructors
        // --------------------------------------------------------------------
        TCQCSrvAdminServerBase();
        TCQCSrvAdminServerBase(const TOrbObjId& ooidThis);

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
        RTTIDefs(TCQCSrvAdminServerBase,TOrbServerBase)
};

#pragma CIDLIB_POPPACK

