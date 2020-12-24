// ----------------------------------------------------------------------------
//  FILE: CQCVoice_Internal.hpp
//  DATE: Sat, Jun 27 20:13:30 2020 -0400
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Constants namespace
// ----------------------------------------------------------------------------
namespace kCQCVoice
{
    
    // ------------------------------------------------------------------------
    //  These are specific rules that we look for that are not specific to
    //  particular BT nodes, i.e. would be used by various nodes. The main
    //  actions are handled via node lookup, these are the ones we look for
    //  as responses.
    //  
    //  These MUST be named the same as the rules that they map to, so that
    //  we can use the same name for action and rule and not have to duplicate
    //  and coordinate them.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strAction_CancelOp;
     const extern TString strAction_ClarifyAddUpdateReminder;
     const extern TString strAction_ClarifyArmMode;
     const extern TString strAction_ClarifyHLSP;
     const extern TString strAction_ClarifyIntExtTemp;
     const extern TString strAction_ClarifyMinutes;
     const extern TString strAction_ClarifyMusicCat;
     const extern TString strAction_ClarifyMusicPL;
     const extern TString strAction_ClarifyMute;
     const extern TString strAction_ClarifyOff;
     const extern TString strAction_ClarifyOn;
     const extern TString strAction_ClarifyPercentVal;
     const extern TString strAction_ClarifyRoomMode;
     const extern TString strAction_ClarifySignedNum;
     const extern TString strAction_ClarifyZoneName;
     const extern TString strAction_ClarifyZoneState;
     const extern TString strAction_WakeupKeyWord;
     const extern TString strAction_No;
     const extern TString strAction_Yes;
    
    // ------------------------------------------------------------------------
    //  The name and path prefix of our behavior tree node factory
    //                  
    // ------------------------------------------------------------------------
     const extern TString strFact_Name;
     const extern TString strFact_Prefix;
    
    // ------------------------------------------------------------------------
    //  The node types supported by our behavior tree node factory
    //                  
    // ------------------------------------------------------------------------
     const extern TString strCQCVoiceFact_CmdArmSecSystem;
     const extern TString strCQCVoiceFact_CmdCancelAllReminders;
     const extern TString strCQCVoiceFact_CmdBringUpLights;
     const extern TString strCQCVoiceFact_CmdCancelLastReminder;
     const extern TString strCQCVoiceFact_CancelOp;
     const extern TString strCQCVoiceFact_CmdClearMusicPL;
     const extern TString strCQCVoiceFact_CmdDisarmSecSystem;
     const extern TString strCQCVoiceFact_CmdKillLights;
     const extern TString strCQCVoiceFact_CmdMusicTransport;
     const extern TString strCQCVoiceFact_CmdNextMusicItem;
     const extern TString strCQCVoiceFact_CmdPlayMusicFromCat;
     const extern TString strCQCVoiceFact_CmdPlayMusicPL;
     const extern TString strCQCVoiceFact_CmdReloadCfg;
     const extern TString strCQCVoiceFact_CmdRemindMe;
     const extern TString strCQCVoiceFact_CmdSetItToNum;
     const extern TString strCQCVoiceFact_CmdSetLightLevel;
     const extern TString strCQCVoiceFact_CmdSetLightSwitch;
     const extern TString strCQCVoiceFact_CmdSetMusicMute;
     const extern TString strCQCVoiceFact_CmdSetMusicPLMode;
     const extern TString strCQCVoiceFact_CmdSetMusicVolume;
     const extern TString strCQCVoiceFact_CmdSetRoomMode;
     const extern TString strCQCVoiceFact_CmdSetThermoHLSP;
     const extern TString strCQCVoiceFact_CmdTurnItOffOn;
     const extern TString strCQCVoiceFact_QueryCQCVer;
     const extern TString strCQCVoiceFact_QueryCurrentTemp;
     const extern TString strCQCVoiceFact_QueryCurrentTime;
     const extern TString strCQCVoiceFact_QueryLightSwitch;
     const extern TString strCQCVoiceFact_QueryLightSwitchState;
     const extern TString strCQCVoiceFact_QuerySecZoneState;
     const extern TString strCQCVoiceFact_QueryThermoHLSP;
     const extern TString strCQCVoiceFact_QueryTodaysDate;
     const extern TString strCQCVoiceFact_QueryWeatherShortFC;
     const extern TString strCQCVoiceFact_Start;
    
    // ------------------------------------------------------------------------
    //  These are specific rules we look for, these are the dynamic ones that
    //  we need to find and update.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strRule_ArmModes;
     const extern TString strRule_LightList;
     const extern TString strRule_CmdPlayMusicPL;
     const extern TString strRule_CustReminders;
     const extern TString strRule_WakeupKeyWord;
     const extern TString strRule_MusicCategories;
     const extern TString strRule_PlayLists;
     const extern TString strRule_RoomModes;
     const extern TString strRule_SecZones;
     const extern TString strRule_KeyWord;
    
    // ------------------------------------------------------------------------
    //  These are specific semantic value names that we look for. Everything
    //  gets put into a standard set of semantic values, for consistency.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strSemVal_Action;
     const extern TString strSemVal_DataType;
     const extern TString strSemVal_Info;
     const extern TString strSemVal_Prefixed;
     const extern TString strSemVal_State;
     const extern TString strSemVal_Target;
     const extern TString strSemVal_TarType;
     const extern TString strSemVal_KeyWord;
    
    // ------------------------------------------------------------------------
    //  These are types that the grammar puts into the /TarType semantic
    //  value of all of the main rules. Not necesarily all of them, but
    //  ones we look for for this or that reason.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strType_LightSwitch;
     const extern TString strType_Dimmer;
     const extern TString strType_HLSetPoint;
    
    // ------------------------------------------------------------------------
    //  These are just some specific values we look for a good bit and want
    //  to avoid constantly constructing string objects for.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strVal_Action;
     const extern TString strVal_Add;
     const extern TString strVal_ClrPref;
     const extern TString strVal_DefKeyWord;
     const extern TString strVal_DataType;
     const extern TString strVal_Degrees;
     const extern TString strVal_DimPref;
     const extern TString strVal_Enqueue;
     const extern TString strVal_External;
     const extern TString strVal_Internal;
     const extern TString strVal_Light;
     const extern TString strVal_Low;
     const extern TString strVal_CQCVoiceTree;
     const extern TString strVal_Music;
     const extern TString strVal_Mute;
     const extern TString strVal_My;
     const extern TString strVal_OffState;
     const extern TString strVal_OnDemPrefix;
     const extern TString strVal_OnState;
     const extern TString strVal_Pause;
     const extern TString strVal_Play;
     const extern TString strVal_Prefixed;
     const extern TString strVal_RandomCat;
     const extern TString strVal_Resume;
     const extern TString strVal_SecuritySystem;
     const extern TString strVal_State;
     const extern TString strVal_SwitchPref;
     const extern TString strVal_Target;
     const extern TString strVal_TarType;
     const extern TString strVal_Today;
     const extern TString strVal_Thermostat;
     const extern TString strVal_UnMute;
     const extern TString strVal_Update;
     const extern TString strVal_Weather;
     const extern TString strVal_Your;
    
    // ------------------------------------------------------------------------
    //  These are some specific tree context variables we set and look for,
    //  and values within them.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strVar_LastTarget;
     const extern TString strVarVal_LastInfo;
     const extern TString strVarVal_LastTarget;
     const extern TString strVarVal_LastType;
}

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tCQCVoice
{
    
    // ------------------------------------------------------------------------
    //  Some confidence levels that we check for. The facility class provides
    //  helpers to see if a rule is of one of these or greater.
    //                  
    // ------------------------------------------------------------------------
    enum class EConfLevels
    {
        Low
        , Medium
        , High
        , Full
        , Count
        , Min = Low
        , Max = Full
    };
     EConfLevels eXlatEConfLevels(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strXlatEConfLevels(const EConfLevels eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     tCIDLib::TBoolean bIsValidEnum(const EConfLevels eVal);

    
    // ------------------------------------------------------------------------
    //  Returned from the standard light light reading method provided by
    //  the facility class helper method.
    //                  
    // ------------------------------------------------------------------------
    enum class ELightReads
    {
        Off
        , On
        , NotFound
        , Failed
        , Count
        , Min = Off
        , Max = Failed
    };
     ELightReads eXlatELightReads(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strXlatELightReads(const ELightReads eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     tCIDLib::TBoolean bIsValidEnum(const ELightReads eVal);

    
    // ------------------------------------------------------------------------
    //  A state that is used to keep track of our current status, driven
    //  by the BT thread.
    //                  
    // ------------------------------------------------------------------------
    enum class EStates
    {
        WaitLogin
        , WaitVoiceCfg
        , WaitRoomCfg
        , WaitRecoInit
        , WaitLoadGrammar
        , Ready
        , Count
        , Min = WaitLogin
        , Max = Ready
    };
     EStates eXlatEStates(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strXlatEStates(const EStates eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     tCIDLib::TBoolean bIsValidEnum(const EStates eVal);

}

#pragma CIDLIB_POPPACK



