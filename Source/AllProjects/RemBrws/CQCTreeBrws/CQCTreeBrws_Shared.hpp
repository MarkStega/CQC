// ----------------------------------------------------------------------------
//  FILE: CQCTreeBrws_Shared.hpp
//  DATE: Fri, Feb 12 21:14:15 2021 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Constants namespace
// ----------------------------------------------------------------------------
namespace kCQCTreeBrws
{
    
    // ------------------------------------------------------------------------
    //  We do in place editing for on our browser tree window. The browser
    //  derivatives can override and do extra validation. These are the
    //  names we give the attributes for the stuff we edit that way.
    //                  
    // ------------------------------------------------------------------------
    CQCTREEBRWSEXP const extern TString strBrwsAttr_ItemName;
    CQCTREEBRWSEXP const extern TString strBrwsAttr_ScopeName;
}

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tCQCTreeBrws
{
    
    // ------------------------------------------------------------------------
    //  Used by browser objects to report the state of items.
    //                  
    // ------------------------------------------------------------------------
    enum class EItemStates
    {
        Normal
        , Bad
        , Paused
        , Count
        , Min = Normal
        , Max = Paused
    };
    [[nodiscard]] CQCTREEBRWSEXP EItemStates eXlatEItemStates(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    [[nodiscard]] CQCTREEBRWSEXP const TString& strXlatEItemStates(const EItemStates eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    [[nodiscard]] CQCTREEBRWSEXP tCIDLib::TBoolean bIsValidEnum(const EItemStates eVal);

}

#pragma CIDLIB_POPPACK


