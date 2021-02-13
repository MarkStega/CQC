// ----------------------------------------------------------------------------
//  FILE: CQCEventSrv_Shared.hpp
//  DATE: Fri, Feb 12 21:14:16 2021 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tCQCEventSrv
{
    
    // ------------------------------------------------------------------------
    //  This is used in our multi-stage configuration loading, to step us
    //  through the stages.
    //                  
    // ------------------------------------------------------------------------
    enum class ECfgStates
    {
        GetLocInfo
        , LoadSched
        , LoadTrig
        , LoadEvMons
        , Success
        , Count
        , Min = GetLocInfo
        , Max = Success
    };
    [[nodiscard]]  ECfgStates eXlatECfgStates(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    [[nodiscard]]  const TString& strXlatECfgStates(const ECfgStates eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    [[nodiscard]]  tCIDLib::TBoolean bIsValidEnum(const ECfgStates eVal);

    inline tCQCEventSrv::ECfgStates operator++(tCQCEventSrv::ECfgStates& eVal, int)
    {
        tCQCEventSrv::ECfgStates eTmp = eVal;
        eVal = tCQCEventSrv::ECfgStates(int(eVal)+1);
        return eTmp;
    }

}

#pragma CIDLIB_POPPACK


