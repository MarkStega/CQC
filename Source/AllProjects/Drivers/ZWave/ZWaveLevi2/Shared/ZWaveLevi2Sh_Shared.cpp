// ----------------------------------------------------------------------------
//  FILE: ZWaveLevi2Sh_Shared.cpp
//  DATE: Fri, Feb 12 21:14:16 2021 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "ZWaveLevi2Sh_.hpp"



static TEnumMap::TEnumValItem aeitemValues_ECClasses[30] = 
{
    {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::None), 0, 0,  { L"", L"", L"", L"None", L"ECClasses::None", L"None" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Association), 0, 0,  { L"", L"", L"", L"Association", L"ECClasses::Association", L"Association" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Basic), 0, 0,  { L"", L"", L"", L"Basic", L"ECClasses::Basic", L"Basic" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Battery), 0, 0,  { L"", L"", L"", L"Battery", L"ECClasses::Battery", L"Battery" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::BinSensor), 0, 0,  { L"", L"", L"", L"BinSensor", L"ECClasses::BinSensor", L"Binary Sensor" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::BinSwitch), 0, 0,  { L"", L"", L"", L"BinSwitch", L"ECClasses::BinSwitch", L"Binary Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ColorSwitch), 0, 0,  { L"", L"", L"", L"ColorSwitch", L"ECClasses::ColorSwitch", L"Color Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Configuration), 0, 0,  { L"", L"", L"", L"Configuration", L"ECClasses::Configuration", L"Configuration" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::DoorLock), 0, 0,  { L"", L"", L"", L"DoorLock", L"ECClasses::DoorLock", L"Door Lock" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Hail), 0, 0,  { L"", L"", L"", L"Hail", L"ECClasses::Hail", L"Hail" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Meter), 0, 0,  { L"", L"", L"", L"Meter", L"ECClasses::Meter", L"Meter" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::MLSensor), 0, 0,  { L"", L"", L"", L"MLSensor", L"ECClasses::MLSensor", L"Multi-level Sensor" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::MLSwitch), 0, 0,  { L"", L"", L"", L"MLSwitch", L"ECClasses::MLSwitch", L"Multi-level Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::MultiCmd), 0, 0,  { L"", L"", L"", L"MultiCmd", L"ECClasses::MultiCmd", L"Multi Cmd" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::PowerLevel), 0, 0,  { L"", L"", L"", L"PowerLevel", L"ECClasses::PowerLevel", L"Power Level" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Naming), 0, 0,  { L"", L"", L"", L"Naming", L"ECClasses::Naming", L"Naming" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::SceneActuatorConf), 0, 0,  { L"", L"", L"", L"SceneActuatorConf", L"ECClasses::SceneActuatorConf", L"Scene Actuator Config" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::SceneControllerConf), 0, 0,  { L"", L"", L"", L"SceneControllerConf", L"ECClasses::SceneControllerConf", L"Scene Controller Config" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::SceneActivation), 0, 0,  { L"", L"", L"", L"SceneActivation", L"ECClasses::SceneActivation", L"Scene Activation" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Security), 0, 0,  { L"", L"", L"", L"Security", L"ECClasses::Security", L"Security" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::SwitchAll), 0, 0,  { L"", L"", L"", L"SwitchAll", L"ECClasses::SwitchAll", L"Switch All" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ThermoCurTemp), 0, 0,  { L"", L"", L"", L"ThermoCurTemp", L"ECClasses::ThermoCurTemp", L"Thermo Cur Temp" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ThermoFanMode), 0, 0,  { L"", L"", L"", L"ThermoFanMode", L"ECClasses::ThermoFanMode", L"Thermo Fan Mode" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ThermoFanOpMode), 0, 0,  { L"", L"", L"", L"ThermoFanOpMode", L"ECClasses::ThermoFanOpMode", L"Thermo Fan Op Mode" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ThermoMode), 0, 0,  { L"", L"", L"", L"ThermoMode", L"ECClasses::ThermoMode", L"Thermo Mode" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ThermoOpMode), 0, 0,  { L"", L"", L"", L"ThermoOpMode", L"ECClasses::ThermoOpMode", L"Thermo Op Mode" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::ThermoSetPnt), 0, 0,  { L"", L"", L"", L"ThermoSetPnt", L"ECClasses::ThermoSetPnt", L"Thermo Set Pnt" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::UserCode), 0, 0,  { L"", L"", L"", L"UserCode", L"ECClasses::UserCode", L"User Code" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::Version), 0, 0,  { L"", L"", L"", L"Version", L"ECClasses::Version", L"Version" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ECClasses::WakeUp), 0, 0,  { L"", L"", L"", L"WakeUp", L"ECClasses::WakeUp", L"Wake Up" } }

};

static TEnumMap emapECClasses
(
     L"ECClasses"
     , 30
     , kCIDLib::False
     , aeitemValues_ECClasses
     , nullptr
     , tCIDLib::TCard4(tZWaveLevi2Sh::ECClasses::Count)
);

const TString& tZWaveLevi2Sh::strAltXlatECClasses(const tZWaveLevi2Sh::ECClasses eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapECClasses.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tZWaveLevi2Sh::ECClasses tZWaveLevi2Sh::eAltXlatECClasses(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::ECClasses(emapECClasses.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

const TString& tZWaveLevi2Sh::strXlatECClasses(const tZWaveLevi2Sh::ECClasses eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapECClasses.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tZWaveLevi2Sh::ECClasses tZWaveLevi2Sh::eXlatECClasses(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::ECClasses(emapECClasses.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

tCIDLib::TBoolean tZWaveLevi2Sh::bIsValidEnum(const tZWaveLevi2Sh::ECClasses eVal)
{
    return emapECClasses.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EGenTypes[10] = 
{
    {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::None), 0, 0,  { L"", L"", L"", L"None", L"EGenTypes::None", L"None" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::GenCtrl), 0, 0,  { L"", L"", L"", L"GenCtrl", L"EGenTypes::GenCtrl", L"Generic Ctrl" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::BinSensor), 0, 0,  { L"", L"", L"", L"BinSensor", L"EGenTypes::BinSensor", L"Binary Sensor" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::BinSwitch), 0, 0,  { L"", L"", L"", L"BinSwitch", L"EGenTypes::BinSwitch", L"Binary Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::EntryCtrl), 0, 0,  { L"", L"", L"", L"EntryCtrl", L"EGenTypes::EntryCtrl", L"Entry Ctrl" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::MLSensor), 0, 0,  { L"", L"", L"", L"MLSensor", L"EGenTypes::MLSensor", L"Multi-level Sensor" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::MLSwitch), 0, 0,  { L"", L"", L"", L"MLSwitch", L"EGenTypes::MLSwitch", L"Multi-level Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::Thermo), 0, 0,  { L"", L"", L"", L"Thermo", L"EGenTypes::Thermo", L"Thermostat" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::StaticCtrl), 0, 0,  { L"", L"", L"", L"StaticCtrl", L"EGenTypes::StaticCtrl", L"Static Controller" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EGenTypes::NotSensor), 0, 0,  { L"", L"", L"", L"NotSensor", L"EGenTypes::NotSensor", L"Notification Sensor" } }

};

static TEnumMap emapEGenTypes
(
     L"EGenTypes"
     , 10
     , kCIDLib::False
     , aeitemValues_EGenTypes
     , nullptr
     , tCIDLib::TCard4(tZWaveLevi2Sh::EGenTypes::Count)
);

const TString& tZWaveLevi2Sh::strAltXlatEGenTypes(const tZWaveLevi2Sh::EGenTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEGenTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tZWaveLevi2Sh::EGenTypes tZWaveLevi2Sh::eAltXlatEGenTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::EGenTypes(emapEGenTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

const TString& tZWaveLevi2Sh::strXlatEGenTypes(const tZWaveLevi2Sh::EGenTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEGenTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tZWaveLevi2Sh::EGenTypes tZWaveLevi2Sh::eXlatEGenTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::EGenTypes(emapEGenTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tZWaveLevi2Sh::EGenTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur = 0;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tZWaveLevi2Sh::EGenTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tZWaveLevi2Sh::EGenTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tZWaveLevi2Sh::bIsValidEnum(const tZWaveLevi2Sh::EGenTypes eVal)
{
    return emapEGenTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMultiTypes[3] = 
{
    {  tCIDLib::TInt4(tZWaveLevi2Sh::EMultiTypes::Single), 0, 0,  { L"", L"NA", L"", L"Single", L"EMultiTypes::Single", L"Single" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMultiTypes::Channel), 0, 0,  { L"", L"MC", L"", L"Channel", L"EMultiTypes::Channel", L"MultiChannel" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMultiTypes::Instance), 0, 0,  { L"", L"MI", L"", L"Instance", L"EMultiTypes::Instance", L"MultiInstance" } }

};

static TEnumMap emapEMultiTypes
(
     L"EMultiTypes"
     , 3
     , kCIDLib::False
     , aeitemValues_EMultiTypes
     , nullptr
     , tCIDLib::TCard4(tZWaveLevi2Sh::EMultiTypes::Count)
);

const TString& tZWaveLevi2Sh::strAltXlatEMultiTypes(const tZWaveLevi2Sh::EMultiTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMultiTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::AltText, bThrowIfNot);
}

tZWaveLevi2Sh::EMultiTypes tZWaveLevi2Sh::eAltXlatEMultiTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::EMultiTypes(emapEMultiTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::AltText, bThrowIfNot));
}

const TString& tZWaveLevi2Sh::strXlatEMultiTypes(const tZWaveLevi2Sh::EMultiTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMultiTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tZWaveLevi2Sh::EMultiTypes tZWaveLevi2Sh::eXlatEMultiTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::EMultiTypes(emapEMultiTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tZWaveLevi2Sh::EMultiTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur = 0;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tZWaveLevi2Sh::EMultiTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tZWaveLevi2Sh::EMultiTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tZWaveLevi2Sh::bIsValidEnum(const tZWaveLevi2Sh::EMultiTypes eVal)
{
    return emapEMultiTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMLSensTypes[6] = 
{
    {  tCIDLib::TInt4(tZWaveLevi2Sh::EMLSensTypes::None), 0, 0,  { L"", L"", L"", L"None", L"EMLSensTypes::None", L"None" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMLSensTypes::Temp), 0, 0,  { L"", L"Temp", L"", L"Temp", L"EMLSensTypes::Temp", L"Temp" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMLSensTypes::Gen), 0, 0,  { L"", L"Gen", L"", L"Gen", L"EMLSensTypes::Gen", L"General" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMLSensTypes::Lum), 0, 0,  { L"", L"Lum", L"", L"Lum", L"EMLSensTypes::Lum", L"Luminance" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMLSensTypes::Power), 0, 0,  { L"", L"Pwr", L"", L"Power", L"EMLSensTypes::Power", L"Power" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::EMLSensTypes::Hum), 0, 0,  { L"", L"Hum", L"", L"Hum", L"EMLSensTypes::Hum", L"Humidity" } }

};

static TEnumMap emapEMLSensTypes
(
     L"EMLSensTypes"
     , 6
     , kCIDLib::False
     , aeitemValues_EMLSensTypes
     , nullptr
     , tCIDLib::TCard4(tZWaveLevi2Sh::EMLSensTypes::Count)
);

const TString& tZWaveLevi2Sh::strAltXlatEMLSensTypes(const tZWaveLevi2Sh::EMLSensTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMLSensTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::AltText, bThrowIfNot);
}

tZWaveLevi2Sh::EMLSensTypes tZWaveLevi2Sh::eAltXlatEMLSensTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::EMLSensTypes(emapEMLSensTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::AltText, bThrowIfNot));
}

const TString& tZWaveLevi2Sh::strXlatEMLSensTypes(const tZWaveLevi2Sh::EMLSensTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMLSensTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tZWaveLevi2Sh::EMLSensTypes tZWaveLevi2Sh::eXlatEMLSensTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::EMLSensTypes(emapEMLSensTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tZWaveLevi2Sh::EMLSensTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur = 0;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tZWaveLevi2Sh::EMLSensTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tZWaveLevi2Sh::EMLSensTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tZWaveLevi2Sh::bIsValidEnum(const tZWaveLevi2Sh::EMLSensTypes eVal)
{
    return emapEMLSensTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESpecTypes[7] = 
{
    {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::None), 0, 0,  { L"", L"", L"", L"None", L"ESpecTypes::None", L"None" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::PowerBinSwitch), 0, 0,  { L"", L"", L"", L"PowerBinSwitch", L"ESpecTypes::PowerBinSwitch", L"Power Binary Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::PowerMLSwitch), 0, 0,  { L"", L"", L"", L"PowerMLSwitch", L"ESpecTypes::PowerMLSwitch", L"Power Multi-level Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::SceneBinSwitch), 0, 0,  { L"", L"", L"", L"SceneBinSwitch", L"ESpecTypes::SceneBinSwitch", L"Scene Binary Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::SceneMLSwitch), 0, 0,  { L"", L"", L"", L"SceneMLSwitch", L"ESpecTypes::SceneMLSwitch", L"Scene Multi-level Switch" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::ThermoV2), 0, 0,  { L"", L"", L"", L"ThermoV2", L"ESpecTypes::ThermoV2", L"Thermostat V2" } }
  , {  tCIDLib::TInt4(tZWaveLevi2Sh::ESpecTypes::VRCOP), 0, 0,  { L"", L"", L"", L"VRCOP", L"ESpecTypes::VRCOP", L"VRCOP Controller" } }

};

static TEnumMap emapESpecTypes
(
     L"ESpecTypes"
     , 7
     , kCIDLib::False
     , aeitemValues_ESpecTypes
     , nullptr
     , tCIDLib::TCard4(tZWaveLevi2Sh::ESpecTypes::Count)
);

const TString& tZWaveLevi2Sh::strAltXlatESpecTypes(const tZWaveLevi2Sh::ESpecTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapESpecTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tZWaveLevi2Sh::ESpecTypes tZWaveLevi2Sh::eAltXlatESpecTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::ESpecTypes(emapESpecTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

const TString& tZWaveLevi2Sh::strXlatESpecTypes(const tZWaveLevi2Sh::ESpecTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapESpecTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}

tZWaveLevi2Sh::ESpecTypes tZWaveLevi2Sh::eXlatESpecTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tZWaveLevi2Sh::ESpecTypes(emapESpecTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::Text, bThrowIfNot));
}

tCIDLib::TBoolean tZWaveLevi2Sh::bIsValidEnum(const tZWaveLevi2Sh::ESpecTypes eVal)
{
    return emapESpecTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}

