//
// FILE NAME: ZWaveUSB3S.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 07/24/2017
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2020
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and 
//  the author (Dean Roddey.) It is licensed under the MIT Open Source 
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the main implementation file for the ZWave USB3S server side driver.
//  It just provides the required function that the server framework
//  uses to ask us  to create an instance of our driver.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "ZWaveUSB3S_.hpp"


// ---------------------------------------------------------------------------
//  Local types and constants
// ---------------------------------------------------------------------------
namespace ZWaveUSB3S
{
    // -----------------------------------------------------------------------
    //  The base name of our facility
    // -----------------------------------------------------------------------
    const tCIDLib::TCh* const   pszSrvFacName = L"ZWaveUSB3S";


    // -----------------------------------------------------------------------
    //  Local data
    //
    //  pfacZWaveLeviS
    //      Our facility object pointer, which is lazily faulted in.
    // -----------------------------------------------------------------------
    TFacility* pfacZWaveUSB3S = nullptr;
}



// ---------------------------------------------------------------------------
//  Global functions
// ---------------------------------------------------------------------------
TFacility& facZWaveUSB3S()
{
    //
    //  Normally, in a CIDLib facility, this would be a lazy eval method. But,
    //  since this is a driver, we can force it in below when we are loaded.
    //  So we can avoid the overhead of synchronization and checking whether
    //  it exists.
    //
    return *ZWaveUSB3S::pfacZWaveUSB3S;
}



// ---------------------------------------------------------------------------
//  Global function that the server framework dynamically finds and uses to
//  get us to create an instance of our driver.
// ---------------------------------------------------------------------------
extern "C" CID_FNEXPORT TCQCServerBase*
psdrvMakeNewSrv(const TCQCDriverObjCfg& cqcdcToLoad)
{
    //
    //  Sanity check that the passed config object matches our known client
    //  side driver name.
    //
    facCQCKit().ValidateDrvCfg
    (
        tCIDLib::ECSSides::Server, cqcdcToLoad, ZWaveUSB3S::pszSrvFacName
    );

    //
    //  Create our facility object now. Since we *should* always be loaded
    //  dynamically and this called before anything else, this insures that
    //  the facility object is always there and doesn't have to be faulted
    //  in.
    //
    ZWaveUSB3S::pfacZWaveUSB3S = new TFacility
    (
        ZWaveUSB3S::pszSrvFacName
        , tCIDLib::EModTypes::SharedLib
        , kCQCKit::c4MajVersion
        , kCQCKit::c4MinVersion
        , kCQCKit::c4Revision
        , tCIDLib::EModFlags::HasMsgFile
    );

    // And now gen up an instance of our driver and return it
    return new TZWaveUSB3SDriver(cqcdcToLoad);
}

