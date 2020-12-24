// ----------------------------------------------------------------------------
//  FILE: CQCServer_SrvAdminServerBase.hpp
//  DATE: Mon, Sep 07 12:46:04 2020 -0400
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
            , tCIDLib::TBoolean& bDevExists
            , const TString& strField
            , tCIDLib::TBoolean& bFldExists
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
            , tCIDLib::TCard8& c8EndTime
        ) = 0;

        virtual tCIDLib::TBoolean bLoadDrivers
        (
            const TVector<TString>& colMonikers
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TBoolean bQueryCommPorts
        (
            TVector<TString>& colToFill
            , const tCIDLib::TBoolean bLocalOnly
            , const tCIDLib::TBoolean bAvailOnly
        ) = 0;

        virtual tCIDLib::TBoolean bQueryData
        (
            const TString& strMoniker
            , const TString& strQueryType
            , const TString& strDataName
            , tCIDLib::TCard4& c4BufSz_mbufToFill
            , THeapBuf& mbufToFill
        ) = 0;

        virtual tCIDLib::TBoolean bQueryData2
        (
            const TString& strMoniker
            , const TString& strQueryType
            , tCIDLib::TCard4& c4BufSz_mbufIO
            , THeapBuf& mbufIO
        ) = 0;

        virtual tCIDLib::TBoolean bQueryDriverInfo
        (
            const TString& strMoniker
            , TCQCDriverObjCfg& cqcdcToFill
        ) = 0;

        virtual tCIDLib::TBoolean bQueryDriverStates
        (
            const tCIDLib::TCard4 c4DriverListId
            , TFundVector<tCIDLib::TCard4>& fcolIds
            , TFundVector<tCQCKit::EDrvStates>& fcolStates
        ) = 0;

        virtual tCIDLib::TBoolean bQueryTextVal
        (
            const TString& strMoniker
            , const TString& strQueryType
            , const TString& strDataName
            , TString& strToFill
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
            , tCIDLib::TCard4& c4SerialNum
            , TString& strValue
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadField
        (
            const tCIDLib::TCard4 c4DriverListId
            , const tCIDLib::TCard4 c4DriverId
            , const tCIDLib::TCard4 c4FieldListId
            , const tCIDLib::TCard4 c4FieldId
            , tCIDLib::TCard4& c4SerialNum
            , tCIDLib::TCard4& c4BufSz_mbufValue
            , THeapBuf& mbufValue
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadFieldByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , TString& strToFill
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadFieldByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TCard4& c4BufSz_mbufValue
            , THeapBuf& mbufValue
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TBoolean bReadBoolByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TBoolean& bToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadCardByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TCard4& c4ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadFloatByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TFloat8& f8ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadIntByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TInt4& i4ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadSListByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , TVector<TString>& colValue
        ) = 0;

        virtual tCIDLib::TBoolean bReadStringByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , TString& strToFill
        ) = 0;

        virtual tCIDLib::TBoolean bReadTimeByName
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strMoniker
            , const TString& strFldName
            , tCIDLib::TCard8& c8ToFill
        ) = 0;

        virtual tCIDLib::TBoolean bSendData
        (
            const TString& strMoniker
            , const TString& strSendType
            , TString& strDataName
            , tCIDLib::TCard4& c4BufSz_mbufIO
            , THeapBuf& mbufIO
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryAudioDevs
        (
            TVector<TString>& colToFill
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverConfigObjs
        (
            TVector<TCQCDriverObjCfg>& colToFill
            , tCIDLib::TCard4& c4DriverListId
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverId
        (
            const TString& strMoniker
            , tCIDLib::TCard4& c4DriverListId
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverIds
        (
            const TVector<TString>& colMonikers
            , TFundVector<tCIDLib::TCard4>& fcolIds
            , TVector<TKeyValuePair>& colToFill
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverIdList
        (
            TVector<TString>& colMonikers
            , TFundVector<tCIDLib::TCard4>& fcolIds
            , TVector<TKeyValuePair>& colToFill
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryDriverIdList2
        (
            TVector<TString>& colMonikers
            , TFundVector<tCIDLib::TCard4>& fcolIds
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryFields
        (
            const TString& strMoniker
            , tCQCKit::EDrvStates& eState
            , TVector<TCQCFldDef>& colToFill
            , tCIDLib::TCard4& c4FldListId
            , tCIDLib::TCard4& c4DriverId
            , tCIDLib::TCard4& c4DriverListId
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryFieldNames
        (
            const TString& strMoniker
            , TVector<TString>& colToFill
            , const tCQCKit::EReqAccess eReqAccess
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryFieldNamesRX
        (
            const TString& strMoniker
            , TVector<TCQCFldDef>& colToFill
            , const TString& strFldNameRegEx
            , const tCQCKit::EReqAccess eReqAccess
        ) = 0;

        virtual tCIDLib::TCard4 c4QuerySemFields
        (
            const TFundVector<tCQCKit::EFldSTypes>& folTypes
            , const tCQCKit::EReqAccess eReqAccess
            , TVector<TCQCDrvFldDef>& colToFill
            , const TString& strMoniker
        ) = 0;

        virtual tCIDLib::TCard4 c4QueryTTSVoices
        (
            TVector<TString>& colToFill
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
            , THeapBuf& mbufData
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryDriverInfo
        (
            const TString& strMoniker
            , tCQCKit::EDrvStates& eStatus
            , tCIDLib::TCard4& c4ArchVer
            , TFundVector<tCQCKit::EDevClasses>& fcolDevClasses
            , TString& strMake
            , TString& strModel
            , const TCQCSecToken& sectUser
        ) = 0;

        virtual tCIDLib::TVoid QueryDriverState
        (
            const TString& strMoniker
            , tCQCKit::EDrvStates& eStatus
            , tCQCKit::EVerboseLvls& eVerboseLvl
            , tCIDLib::TCard4& c4ThreadId
        ) = 0;

        virtual tCIDLib::TVoid QueryDriverStats
        (
            const TString& strMoniker
            , TCQCDrvStats& cdstats
        ) = 0;

        virtual tCIDLib::TVoid QueryFieldDef
        (
            const TString& strMoniker
            , const TString& strField
            , TCQCFldDef& flddToFill
        ) = 0;

        virtual tCIDLib::TVoid QueryFieldInfo
        (
            const TString& strMoniker
            , const TString& strField
            , tCIDLib::TCard4& c4DriverListId
            , tCIDLib::TCard4& c4DriverId
            , tCIDLib::TCard4& c4FieldListId
            , tCIDLib::TCard4& c4FieldId
            , tCQCKit::EFldTypes& eType
        ) = 0;

        virtual tCIDLib::TVoid QueryPowerStates
        (
            const TVector<TKeyValuePair>& colDrvNames
            , TFundVector<tCQCKit::EPowerStatus>& fcolStates
        ) = 0;

        virtual tCIDLib::TVoid QueryStatusReport
        (
            TString& strErrList
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
            , THeapBuf& mbufData
        ) = 0;

        virtual tCIDLib::TVoid ReadFields
        (
            const TFldIOPacket& fiopInfo
            , tCIDLib::TCard4& c4BufSz_mbufData
            , THeapBuf& mbufData
        ) = 0;

        virtual tCIDLib::TVoid ReadFieldsByName
        (
            const TString& strMoniker
            , const TVector<TString>& colFieldNames
            , tCIDLib::TCard4& c4BufSz_mbufData
            , THeapBuf& mbufData
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

