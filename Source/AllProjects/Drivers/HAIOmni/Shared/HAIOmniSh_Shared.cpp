// ----------------------------------------------------------------------------
//  FILE: HAIOmniSh_Shared.cpp
//  DATE: Sat, Jan 26 22:50:46 2019 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "HAIOmniSh_.hpp"



static TEnumMap::TEnumValItem aeitemValues_EItemTypes[8] = 
{
    {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Unknown), 0, 0,  { L"", L"", L"", L"Unknown", L"EItem_Unknown", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Area), 0, 0,  { L"", L"", L"", L"Area", L"EItem_Area", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Button), 0, 0,  { L"", L"", L"", L"Button", L"EItem_Button", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Code), 0, 0,  { L"", L"", L"", L"Code", L"EItem_Code", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Message), 0, 0,  { L"", L"", L"", L"Message", L"EItem_Message", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Thermo), 0, 0,  { L"", L"", L"", L"Thermo", L"EItem_Thermo", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Unit), 0, 0,  { L"", L"", L"", L"Unit", L"EItem_Unit", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EItemTypes::EItem_Zone), 0, 0,  { L"", L"", L"", L"Zone", L"EItem_Zone", L"" } }

};

static TEnumMap emapEItemTypes
(
     L"EItemTypes"
     , 8
     , kCIDLib::False
     , aeitemValues_EItemTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniSh::EItemTypes_Count)
);

const TString& tHAIOmniSh::strXlatEItemTypes(const tHAIOmniSh::EItemTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEItemTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniSh::EItemTypes tHAIOmniSh::eXlatEItemTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniSh::EItemTypes(emapEItemTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniSh::EItemTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniSh::EItemTypes& eVal)
{
    eVal = (tHAIOmniSh::EItemTypes)strmSrc.c4ReadEnum();
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniSh::EItemTypes* const aeList, const tCIDLib::TCard4 c4Count)
{    
    if (c4Count)
        strmSrc.ReadArray((tCIDLib::TCard4*)aeList, c4Count);
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniSh::EItemTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    if (c4Count)
        strmTar.WriteArray(reinterpret_cast<const tCIDLib::TCard4*>(aeList), c4Count);
}
tCIDLib::TBoolean tHAIOmniSh::bIsValidEnum(const tHAIOmniSh::EItemTypes eVal)
{
    return emapEItemTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EUnitTypes[4] = 
{
    {  tCIDLib::TInt4(tHAIOmniSh::EUnitTypes::EUnit_Unused), 0, 0,  { L"", L"", L"", L"Unused", L"EUnit_Unused", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EUnitTypes::EUnit_Binary), 0, 0,  { L"", L"", L"", L"Binary", L"EUnit_Binary", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EUnitTypes::EUnit_Dimmer), 0, 0,  { L"", L"", L"", L"Dimmer", L"EUnit_Dimmer", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EUnitTypes::EUnit_Flag), 0, 0,  { L"", L"", L"", L"Flag", L"EUnit_Flag", L"" } }

};

static TEnumMap emapEUnitTypes
(
     L"EUnitTypes"
     , 4
     , kCIDLib::False
     , aeitemValues_EUnitTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniSh::EUnitTypes_Count)
);

const TString& tHAIOmniSh::strXlatEUnitTypes(const tHAIOmniSh::EUnitTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEUnitTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniSh::EUnitTypes tHAIOmniSh::eXlatEUnitTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniSh::EUnitTypes(emapEUnitTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniSh::EUnitTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniSh::EUnitTypes& eVal)
{
    eVal = (tHAIOmniSh::EUnitTypes)strmSrc.c4ReadEnum();
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniSh::EUnitTypes* const aeList, const tCIDLib::TCard4 c4Count)
{    
    if (c4Count)
        strmSrc.ReadArray((tCIDLib::TCard4*)aeList, c4Count);
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniSh::EUnitTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    if (c4Count)
        strmTar.WriteArray(reinterpret_cast<const tCIDLib::TCard4*>(aeList), c4Count);
}
tCIDLib::TBoolean tHAIOmniSh::bIsValidEnum(const tHAIOmniSh::EUnitTypes eVal)
{
    return emapEUnitTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EZoneTypes[4] = 
{
    {  tCIDLib::TInt4(tHAIOmniSh::EZoneTypes::EZone_Unused), 0, 0,  { L"", L"", L"", L"Unused", L"EZone_Unused", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EZoneTypes::EZone_Alarm), 0, 0,  { L"", L"", L"", L"Alarm", L"EZone_Alarm", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EZoneTypes::EZone_Humidity), 0, 0,  { L"", L"", L"", L"Humidity", L"EZone_Humidity", L"" } }
  , {  tCIDLib::TInt4(tHAIOmniSh::EZoneTypes::EZone_Temp), 0, 0,  { L"", L"", L"", L"Temp", L"EZone_Temp", L"" } }

};

static TEnumMap emapEZoneTypes
(
     L"EZoneTypes"
     , 4
     , kCIDLib::False
     , aeitemValues_EZoneTypes
     , nullptr
     , tCIDLib::TCard4(tHAIOmniSh::EZoneTypes_Count)
);

const TString& tHAIOmniSh::strXlatEZoneTypes(const tHAIOmniSh::EZoneTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEZoneTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tHAIOmniSh::EZoneTypes tHAIOmniSh::eXlatEZoneTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tHAIOmniSh::EZoneTypes(emapEZoneTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tHAIOmniSh::EZoneTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tHAIOmniSh::EZoneTypes& eVal)
{
    eVal = (tHAIOmniSh::EZoneTypes)strmSrc.c4ReadEnum();
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tHAIOmniSh::EZoneTypes* const aeList, const tCIDLib::TCard4 c4Count)
{    
    if (c4Count)
        strmSrc.ReadArray((tCIDLib::TCard4*)aeList, c4Count);
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tHAIOmniSh::EZoneTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    if (c4Count)
        strmTar.WriteArray(reinterpret_cast<const tCIDLib::TCard4*>(aeList), c4Count);
}
tCIDLib::TBoolean tHAIOmniSh::bIsValidEnum(const tHAIOmniSh::EZoneTypes eVal)
{
    return emapEZoneTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}

