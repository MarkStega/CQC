// ----------------------------------------------------------------------------
//  FILE: CQCPollEng_Shared.cpp
//  DATE: Fri, Feb 12 21:14:15 2021 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "CQCPollEng_.hpp"



static TEnumMap::TEnumValItem aeitemValues_EFldActs[3] = 
{
    {  tCIDLib::TInt4(tCQCPollEng::EFldActs::EFldAct_CheckField), 0, 0,  { L"", L"", L"", L"EFldAct_CheckField", L"EFldActs::EFldAct_CheckField", L"" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldActs::EFldAct_SetField), 0, 0,  { L"", L"", L"", L"EFldAct_SetField", L"EFldActs::EFldAct_SetField", L"" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldActs::EFldAct_AssocField), 0, 0,  { L"", L"", L"", L"EFldAct_AssocField", L"EFldActs::EFldAct_AssocField", L"" } }

};

static TEnumMap emapEFldActs
(
     L"EFldActs"
     , 3
     , kCIDLib::False
     , aeitemValues_EFldActs
     , nullptr
     , tCIDLib::TCard4(tCQCPollEng::EFldActs::Count)
);

tCIDLib::TBoolean tCQCPollEng::bIsValidEnum(const tCQCPollEng::EFldActs eVal)
{
    return emapEFldActs.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EFldRegRes[5] = 
{
    {  tCIDLib::TInt4(tCQCPollEng::EFldRegRes::OK), 0, 0,  { L"", L"", L"", L"OK", L"EFldRegRes::OK", L"Field %(1).%(2) registered OK" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldRegRes::NotFound), 0, 0,  { L"", L"", L"", L"NotFound", L"EFldRegRes::NotFound", L"Field %(1).%(2) not found" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldRegRes::BadName), 0, 0,  { L"", L"", L"", L"BadName", L"EFldRegRes::BadName", L"Field name '%(1)' cannot be parsed" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldRegRes::WrongAccess), 0, 0,  { L"", L"", L"", L"WrongAccess", L"EFldRegRes::WrongAccess", L"Field %(1).%(2) does not have the requested access type" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldRegRes::NoReadAccess), 0, 0,  { L"", L"", L"", L"NoReadAccess", L"EFldRegRes::NoReadAccess", L"Field %(1).%(2) is write only and can't be polled" } }

};

static TEnumMap emapEFldRegRes
(
     L"EFldRegRes"
     , 5
     , kCIDLib::False
     , aeitemValues_EFldRegRes
     , nullptr
     , tCIDLib::TCard4(tCQCPollEng::EFldRegRes::Count)
);

const TString& tCQCPollEng::strLoadEFldRegRes(const tCQCPollEng::EFldRegRes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEFldRegRes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}
const TString& tCQCPollEng::strXlatEFldRegRes(const tCQCPollEng::EFldRegRes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEFldRegRes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCQCPollEng::EFldRegRes tCQCPollEng::eXlatEFldRegRes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCQCPollEng::EFldRegRes(emapEFldRegRes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDLib::TBoolean tCQCPollEng::bIsValidEnum(const tCQCPollEng::EFldRegRes eVal)
{
    return emapEFldRegRes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EFldStates[6] = 
{
    {  tCIDLib::TInt4(tCQCPollEng::EFldStates::Invalid), 0, 0,  { L"", L"", L"", L"Invalid", L"EFldStates::Invalid", L"InvalidFld" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldStates::WaitReg), 0, 0,  { L"", L"", L"", L"WaitReg", L"EFldStates::WaitReg", L"WaitForFldReg" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldStates::Rejected), 0, 0,  { L"", L"", L"", L"Rejected", L"EFldStates::Rejected", L"Rejected" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldStates::FldError), 0, 0,  { L"", L"", L"", L"FldError", L"EFldStates::FldError", L"FldInError" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldStates::WaitValue), 0, 0,  { L"", L"", L"", L"WaitValue", L"EFldStates::WaitValue", L"WaitValue" } }
  , {  tCIDLib::TInt4(tCQCPollEng::EFldStates::Ready), 0, 0,  { L"", L"", L"", L"Ready", L"EFldStates::Ready", L"GoodFldValue" } }

};

static TEnumMap emapEFldStates
(
     L"EFldStates"
     , 6
     , kCIDLib::False
     , aeitemValues_EFldStates
     , nullptr
     , tCIDLib::TCard4(tCQCPollEng::EFldStates::Count)
);

const TString& tCQCPollEng::strLoadEFldStates(const tCQCPollEng::EFldStates eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEFldStates.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::Text, bThrowIfNot);
}
tCIDLib::TBoolean tCQCPollEng::bIsValidEnum(const tCQCPollEng::EFldStates eVal)
{
    return emapEFldStates.bIsValidEnum(tCIDLib::TCard4(eVal));

}

