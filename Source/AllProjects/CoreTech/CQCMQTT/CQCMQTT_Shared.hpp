// ----------------------------------------------------------------------------
//  FILE: CQCMQTT_Shared.hpp
//  DATE: Fri, Feb 14 18:49:46 2020 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Constants namespace
// ----------------------------------------------------------------------------
namespace kCQCMQTT
{
    
    // ------------------------------------------------------------------------
    //  Protocol related magic numeric values
    //                  
    // ------------------------------------------------------------------------
    constexpr tCIDLib::TCard1 c1Proto_OurVersion = 4;
    constexpr tCIDLib::TCard4 c4Proto_MQTTDefPort = 1883;
    constexpr tCIDLib::TCard4 c4Proto_MaxRemLen = 128 * 128 * 128;
    
    // ------------------------------------------------------------------------
    //  Protocol related magic text strings
    //                  
    // ------------------------------------------------------------------------
    CQCMQTTEXPORT const extern TString strProto_Name;
    
    // ------------------------------------------------------------------------
    //  The base msg class provides generic storage for less common
    //  values via key/value pair. These are the keys that we use
    //  for that sort of torage.
    //                  
    // ------------------------------------------------------------------------
    CQCMQTTEXPORT const extern TString strValKey_ClientId;
    CQCMQTTEXPORT const extern TString strValKey_Password;
    CQCMQTTEXPORT const extern TString strValKey_UserName;
    CQCMQTTEXPORT const extern TString strValKey_WillTopic;
}

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tCQCMQTT
{
    
    // ------------------------------------------------------------------------
    //  The defined codes that the server can return when he acks a
    //  connection request from us.
    //                  
    // ------------------------------------------------------------------------
    enum class EConnAckCodes : tCIDLib::TCard1
    {
        Accept
        , ProtoVer
        , ClientId
        , Unavailable
        , Credentials
        , Unauthorized
        , Count
        , Min = Accept
        , Max = Unauthorized
    };
    CQCMQTTEXPORT const TString& strLoadEConnAckCodes(const EConnAckCodes eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCMQTTEXPORT tCIDLib::TBoolean bIsValidEnum(const EConnAckCodes eVal);

    
    // ------------------------------------------------------------------------
    //  The defined flags for the publish msg
    //                  
    // ------------------------------------------------------------------------
    enum class EConnFlags : tCIDLib::TCard1
    {
        CleanSession = 0x02
        , WillFlag = 0x04
        , WillQOS1 = 0x08
        , WillQOS2 = 0x10
        , WillRetain = 0x20
        , Password = 0x40
        , UserName = 0x80
        , Count = 7
        , None = 0
        , AllBits = 0xFE
        , QOSBits = 0x6
    };
    CQCMQTTEXPORT const TString& strLoadEConnFlags(const EConnFlags eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCMQTTEXPORT tCIDLib::TBoolean bIsValidEnum(const EConnFlags eVal);

    
    // ------------------------------------------------------------------------
    //  The defined MQTT control packet types. These are arranged so
    //  that they have the same values as the actual MQTT values
    //                  
    // ------------------------------------------------------------------------
    enum class EPacketTypes : tCIDLib::TCard1
    {
        Reserved
        , Connect
        , ConnAck
        , Publish
        , PubAck
        , PubRec
        , PubRel
        , PubComp
        , Subscribe
        , SubAck
        , Unsubscribe
        , UnsubAck
        , PingReq
        , PingResp
        , Disconnect
        , Reserved2
        , Count
        , Min = Reserved
        , Max = Reserved2
        , FirstGood = Connect
        , LastGood = Disconnect
    };
    CQCMQTTEXPORT EPacketTypes eXlatEPacketTypes(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCMQTTEXPORT const TString& strXlatEPacketTypes(const EPacketTypes eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    CQCMQTTEXPORT tCIDLib::TBoolean bIsValidEnum(const EPacketTypes eVal);

    
    // ------------------------------------------------------------------------
    //  The quality of service values.
    //                  
    // ------------------------------------------------------------------------
    enum class EQOSLevs : tCIDLib::TCard1
    {
        Q0
        , Q1
        , Q2
        , Count
        , Min = Q0
        , Max = Q2
    };
    CQCMQTTEXPORT EQOSLevs eXlatEQOSLevs(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
    CQCMQTTEXPORT const TString& strXlatEQOSLevs(const EQOSLevs eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
    CQCMQTTEXPORT tCIDLib::TBoolean bIsValidEnum(const EQOSLevs eVal);

}

#pragma CIDLIB_POPPACK

CQCMQTTEXPORT TTextOutStream& operator<<(TTextOutStream& strmTar, const tCQCMQTT::EConnAckCodes eToStream);

constexpr tCQCMQTT::EConnFlags operator|(const tCQCMQTT::EConnFlags eLHS, const tCQCMQTT::EConnFlags eRHS)
{    
    return tCQCMQTT::EConnFlags(tCIDLib::TEnumMaskType(eLHS) | tCIDLib::TEnumMaskType(eRHS));
}
constexpr tCQCMQTT::EConnFlags& operator|=(tCQCMQTT::EConnFlags& eLHS, const tCQCMQTT::EConnFlags eRHS)
{    
    eLHS = tCQCMQTT::EConnFlags(tCIDLib::TEnumMaskType(eLHS) | tCIDLib::TEnumMaskType(eRHS));
    return eLHS;
}
constexpr tCQCMQTT::EConnFlags operator&(const tCQCMQTT::EConnFlags eLHS, const tCQCMQTT::EConnFlags eRHS)
{    
    return tCQCMQTT::EConnFlags(tCIDLib::TEnumMaskType(eLHS) & tCIDLib::TEnumMaskType(eRHS));
}
constexpr tCQCMQTT::EConnFlags& operator&=(tCQCMQTT::EConnFlags& eLHS, const tCQCMQTT::EConnFlags eRHS)
{    
    eLHS = tCQCMQTT::EConnFlags(tCIDLib::TEnumMaskType(eLHS) & tCIDLib::TEnumMaskType(eRHS));
    return eLHS;
}
CQCMQTTEXPORT TTextOutStream& operator<<(TTextOutStream& strmTar, const tCQCMQTT::EConnFlags eToStream);

CQCMQTTEXPORT TTextOutStream& operator<<(TTextOutStream& strmTar, const tCQCMQTT::EPacketTypes eToStream);

CQCMQTTEXPORT TBinOutStream& operator<<(TBinOutStream& strmTar, const tCQCMQTT::EQOSLevs eToStream);
CQCMQTTEXPORT TBinInStream& operator>>(TBinInStream& strmSrc, tCQCMQTT::EQOSLevs& eToFill);
CQCMQTTEXPORT tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tCQCMQTT::EQOSLevs* const aeList, const tCIDLib::TCard4 c4Count);
CQCMQTTEXPORT tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tCQCMQTT::EQOSLevs* const aeList, const tCIDLib::TCard4 c4Count);
CQCMQTTEXPORT TTextOutStream& operator<<(TTextOutStream& strmTar, const tCQCMQTT::EQOSLevs eToStream);

