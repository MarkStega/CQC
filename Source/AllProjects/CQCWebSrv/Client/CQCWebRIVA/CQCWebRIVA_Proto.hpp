// -----------------------------------------
//  Generated by WebRIVACmp (Wed, Mar 06 13:30:56 2019 -0500)
// -----------------------------------------
#pragma once

namespace kWebRIVA
{
    const tCIDLib::TCard4 c4ProtoVer = 1;
    const tCIDLib::TCard4 c4InterAckMax = 200;
    const tCIDLib::TCard4 c4InterAckHalf = 120;
    const TString strIntRIVACmdPref = L"/CQSL/RIVACmd/";
    const TString strIntRIVACmd_LoadURLTab = L"/CQSL/RIVACmd/LoadURLTab";
    const TString strAttr_At = L"1";
    const TString strAttr_ClipArea = L"2";
    const TString strAttr_ClipMode = L"3";
    const TString strAttr_ConstAlpha = L"4";
    const TString strAttr_SerialNum = L"5";
    const TString strAttr_OpCode = L"6";
    const TString strAttr_Id = L"7";
    const TString strAttr_SrcArea = L"8";
    const TString strAttr_TarArea = L"9";
    const TString strAttr_Flags = L"10";
    const TString strAttr_Rounding = L"11";
    const TString strAttr_BgnColor = L"12";
    const TString strAttr_ToDo = L"13";
    const TString strAttr_HJustify = L"14";
    const TString strAttr_VJustify = L"15";
    const TString strAttr_FromPnt = L"16";
    const TString strAttr_ToPnt = L"17";
    const TString strAttr_ToDraw = L"18";
    const TString strAttr_UpdateArea = L"19";
    const TString strAttr_Last = L"20";
    const TString strAttr_FontH = L"21";
    const TString strAttr_FontFace = L"42";
    const TString strAttr_CurBytes = L"43";
    const TString strAttr_Mode = L"24";
    const TString strAttr_BackMixMode = L"25";
    const TString strAttr_MixMode = L"26";
    const TString strAttr_ErrCode = L"27";
    const TString strAttr_KErrCode = L"28";
    const TString strAttr_SErrCode = L"29";
    const TString strAttr_ErrText = L"30";
    const TString strAttr_AuxText = L"31";
    const TString strAttr_ProcName = L"32";
    const TString strAttr_FacName = L"33";
    const TString strAttr_MsgText = L"34";
    const TString strAttr_LineNum = L"35";
    const TString strAttr_Title = L"36";
    const TString strAttr_Flag = L"37";
    const TString strAttr_Status = L"38";
    const TString strAttr_Extra = L"39";
    const TString strAttr_Path = L"40";
    const TString strAttr_TotalBytes = L"41";
    const TString strAttr_User = L"42";
    const TString strAttr_UserRole = L"43";
    const TString strAttr_ToSet = L"44";
    const TString strAttr_Size = L"45";
    const TString strAttr_DataBytes = L"46";
    const TString strAttr_UserData = L"47";
    const TString strAttr_Width = L"48";
    const TString strAttr_Color = L"49";
    const TString strAttr_Color2 = L"50";
    const TString strAttr_PntOffset = L"51";
    const TString strAttr_Effect = L"52";
    const TString strAttr_Dir = L"53";
    const TString strAttr_Percent = L"54";
    const TString strAttr_List = L"55";
    const TString strAttr_State = L"56";
    const TString strAttr_FileName = L"57";
    const TString strAttr_Mask = L"58";
    const TString strAttr_ToLoad = L"59";
    const TString strAttr_Type = L"60";
    const TString strAttr_P1 = L"61";
    const TString strAttr_P2 = L"62";
    const TString strAttr_P3 = L"63";
    const TString strAttr_Params = L"64";
    const tCIDLib::TCard1 c1BltFlag_SrcAlpha = 0x01;
    const tCIDLib::TCard1 c1FontFlag_Italic = 0x01;
    const tCIDLib::TCard1 c1FontFlag_Bold = 0x02;
    const TString strJSON_EndMsg = L"\n}\n";
    const TString strJSON_StartMsg = L"{\n";
    const tCIDLib::TCard4 c4SrvFlag_None = 0x0000;
    const tCIDLib::TCard4 c4SrvFlag_LogSrvMsgs = 0x0001;
    const tCIDLib::TCard4 c4SrvFlag_LogGUIEvents = 0x0002;
    const tCIDLib::TCard4 c4SrvFlag_NoCache = 0x0004;
    const tCIDLib::TCard4 c4SrvFlag_InBgnTab = 0x0008;
    const tCIDLib::TCard4 c4SrvFlags_AllBits = 0x000F;
    const tCIDLib::TCard4 c4TextFlag_None = 0x00;
    const tCIDLib::TCard4 c4TextFlag_NoClip = 0x01;
    const tCIDLib::TCard4 c4TextFlag_Mnemonics = 0x02;
    const tCIDLib::TCard4 c4TextFlag_Strikeout = 0x04;
    const tCIDLib::TCard4 c4TextFlag_Disabled = 0x08;
    const tCIDLib::TCard4 c4MTextFlag_WordBreak = 0x01000000;
    const tCIDLib::TCard4 c4TextFXFlag_NoWrap = 0x01;

}

namespace tWebRIVA
{
    enum class EBackMixModes
    {
        Opaque = 0
        , Transparent = 1
    };

    enum class EBmpModes
    {
        None = 0
        , DstInvert = 1
        , PatCopy = 2
        , PatInvert = 3
        , SrcAnd = 4
        , SrcCopy = 5
        , SrcErase = 6
        , SrcPaint = 7
    };

    enum class EClipModes
    {
        And = 0
        , Copy = 1
    };

    enum class EDirs
    {
        Left
        , Right
        , Up
        , Down
    };

    enum class EDrawingColors
    {
        Background = 0
        , Text = 1
    };

    enum class EErrMsgs
    {
        None
        , LoginFailed
        , NoDefTemplate
        , NoCredsSent
    };

    enum class EGradDirs
    {
        Horizontal
        , Vertical
        , UpDiagonal
        , DownDiagonal
    };

    enum class EHJustifys
    {
        Left
        , Right
        , Center
    };

    enum class EMixModes
    {
        MixMode_Black = 0
        , MixMode_CopyPen = 1
        , MixMode_MaskNotPen = 2
        , MixMode_MaskPen = 3
        , MixMode_MaskPenNot = 4
        , MixMode_MergeNotPen = 5
        , MixMode_MergePen = 6
        , MixMode_MergePenNot = 7
        , MixMode_NOP = 8
        , MixMode_Not = 9
        , MixMode_NotCopyPen = 10
        , MixMode_NotMaskPen = 11
        , MixMode_NotMergePen = 12
        , MixMode_NotXorPen = 13
        , MixMode_White = 14
        , MixMode_XorPen = 15
    };

    enum class EMsgDirs
    {
        StoS
        , StoC
    };

    enum class EOpCodes
    {
        OpCode_None = 0
        , AlphaBlit = 1
        , AlphaBlitST = 2
        , DrawBitmap = 3
        , DrawBitmapST = 4
        , DrawLine = 5
        , DrawMultiText = 6
        , DrawPBar = 7
        , DrawText = 8
        , DrawTextFX = 9
        , FillArea = 10
        , FillWithBmp = 11
        , GradientFill = 12
        , MaskedAlphaBlit = 13
        , StrokeArea = 14
        , LastDrawing = 49
        , PopClipArea = 50
        , PopContext = 51
        , PopFont = 52
        , PushClipArea = 53
        , PushContext = 54
        , PushFont = 55
        , SetBackMixMode = 56
        , SetColor = 57
        , SetMixMode = 58
        , LastGraphics = 99
        , NewTemplate = 100
        , EndDraw = 110
        , StartDraw = 111
        , Press = 120
        , Move = 121
        , Release = 122
        , CancelInput = 123
        , ImgDataFirst = 130
        , ImgDataNext = 131
        , LoginRes = 140
        , StatusReturn = 141
        , ShowException = 142
        , Ping = 143
        , ShowErrorMsg = 144
        , LogMsg = 145
        , SessionState = 146
        , SetVisState = 147
        , SpecialAction = 160
        , ShowMsg = 161
        , PlayWAV = 162
        , SayText = 163
        , HotKey = 164
        , SetTmplBorderClr = 165
        , SetServerFlags = 166
        , ExitViewer = 167
        , CreateRemWidget = 168
        , DestroyRemWidget = 169
        , SetRemWidgetURL = 170
        , SetRemWidgetVis = 171
        , RIVACmd = 172
        , FirstPrivate = 250
        , LastPrivate = 255
    };

    enum class ESpecialActs
    {
        Blanker = 0
        , Exit = 1
        , ExitFS = 2
        , FSMode = 3
        , DisplayOff = 4
        , BlankAndBlanker = 5
        , ClockBlanker = 6
        , ShowBlanker = 7
    };

    enum class ETextFXs
    {
        None = 0
        , Gradient = 1
        , GradientRefl = 2
        , Reflected = 3
        , GaussianBlur = 4
        , DropShadow = 5
    };

    enum class EVJustifys
    {
        Bottom
        , Center
        , Top
    };

    enum class EUserRoles
    {
        Limited
        , Normal
        , Power
        , Admin
    };

    enum class EWdgTypes
    {
        WebBrowser
        , WebCamera
    };


}

class CQCWEBRIVAEXP TWebRIVATools
{
    public :
        TWebRIVATools();
        ~TWebRIVATools();

       tCIDLib::TVoid ThrowBadOpExtract(const tWebRIVA::EOpCodes eGot, const tWebRIVA::EOpCodes eExpected);

        TMemBuf* pmbufFormatAlphaBlit
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const TPoint&   pntAt
            , const tCIDLib::TCard1    c1Flags
            , const tCIDLib::TCard1    c1ConstAlpha
            , const tCIDLib::TCard4    c4ImgSerialNum
        );

        TMemBuf* pmbufFormatAlphaBlitST
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const TArea&   areaSrc
            , const TArea&   areaTar
            , const tCIDLib::TCard1    c1Flags
            , const tCIDLib::TCard1    c1ConstAlpha
            , const tCIDLib::TCard4    c4ImgSerialNum
        );

        TMemBuf* pmbufFormatCreateRemWidget
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strUID
            , const tWebRIVA::EWdgTypes    eType
            , const TArea&   areaAtArea
            , const TString&   strParams
            , const tCIDLib::TBoolean    bVisState
        );

        TMemBuf* pmbufFormatDestroyRemWidget
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strUID
            , const tWebRIVA::EWdgTypes    eType
        );

        TMemBuf* pmbufFormatDrawBitmap
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const TPoint&   pntAt
            , const tWebRIVA::EBmpModes    eMode
            , const tCIDLib::TCard4    c4ImgSerialNum
        );

        TMemBuf* pmbufFormatDrawBitmapST
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const TArea&   areaSrc
            , const TArea&   areaTar
            , const tWebRIVA::EBmpModes    eMode
            , const tCIDLib::TCard4    c4ImgSerialNum
        );

        TMemBuf* pmbufFormatDrawLine
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TPoint&   pntFrom
            , const TPoint&   pntTo
            , const TRGBClr&   clrColor
        );

        TMemBuf* pmbufFormatDrawMultiText
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strText
            , const TArea&   areaTar
            , const tWebRIVA::EHJustifys    eHJust
            , const tWebRIVA::EVJustifys    eVJust
            , const tCIDLib::TCard4    c4Flags
        );

        TMemBuf* pmbufFormatDrawPBar
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const tCIDLib::TCard1    c1Opacity
            , const tCIDLib::TFloat8    f8Percent
            , const TArea&   areaSrc
            , const TArea&   areaTar
            , const tWebRIVA::EDirs    eDir
            , const TRGBClr&   clrClr1
            , const TRGBClr&   clrClr2
            , const TRGBClr&   clrFill
        );

        TMemBuf* pmbufFormatDrawText
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strText
            , const TArea&   areaTar
            , const tWebRIVA::EHJustifys    eHJust
            , const tWebRIVA::EVJustifys    eVJust
            , const TRGBClr&   clrBgnFill
            , const tCIDLib::TCard4    c4Flags
        );

        TMemBuf* pmbufFormatDrawTextFX
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strText
            , const tWebRIVA::ETextFXs    eEffect
            , const TArea&   areaTar
            , const TRGBClr&   clrClr1
            , const TRGBClr&   clrClr2
            , const tWebRIVA::EHJustifys    eHJust
            , const tWebRIVA::EVJustifys    eVJust
            , const tCIDLib::TCard4    c4Flags
            , const TPoint&   pntOfs
        );

        TMemBuf* pmbufFormatEndDraw
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TArea&   areaUpdate
        );

        TMemBuf* pmbufFormatExitViewer
        (
                    tCIDLib::TCard4&   c4Bytes
        );

        TMemBuf* pmbufFormatFillArea
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tCIDLib::TCard1    c1Rounding
            , const TArea&   areaFill
            , const TRGBClr&   clrFillClr
        );

        TMemBuf* pmbufFormatFillWithBmp
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const TArea&   areaTar
            , const TPoint&   pntOrgPnt
            , const tWebRIVA::EBmpModes    eMode
            , const tCIDLib::TCard4    c4ImgSerialNum
        );

        TMemBuf* pmbufFormatGradientFill
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tCIDLib::TCard1    c1Rounding
            , const TArea&   areaFill
            , const TRGBClr&   clrColor1
            , const TRGBClr&   clrColor2
            , const tWebRIVA::EGradDirs    eDir
        );

        TMemBuf* pmbufFormatImgDataFirst
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const tCIDLib::TCard4    c4ImgSerialNum
            , const tCIDLib::TCard4    c4TotalBytes
            , const TSize&   szImgRes
            , const tCIDLib::TBoolean    bisPNG
            , const tCIDLib::TBoolean    bLastBlock
            , const TString&   strImgData
        );

        TMemBuf* pmbufFormatImgDataNext
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strImgPath
            , const tCIDLib::TBoolean    bLastBlock
            , const TString&   strImgData
        );

        TMemBuf* pmbufFormatLoginRes
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tCIDLib::TBoolean    bStatus
            , const TString&   strMsg
            , const TString&   strUser
            , const tWebRIVA::EUserRoles    eRole
        );

        TMemBuf* pmbufFormatNewTemplate
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strPath
            , const TSize&   szNewSize
        );

        TMemBuf* pmbufFormatPopClipArea
        (
                    tCIDLib::TCard4&   c4Bytes
        );

        TMemBuf* pmbufFormatPopContext
        (
                    tCIDLib::TCard4&   c4Bytes
        );

        TMemBuf* pmbufFormatPopFont
        (
                    tCIDLib::TCard4&   c4Bytes
        );

        TMemBuf* pmbufFormatPushClipArea
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tWebRIVA::EClipModes    eClipMode
            , const TArea&   areaClip
            , const tCIDLib::TCard1    c1Rounding
        );

        TMemBuf* pmbufFormatPushContext
        (
                    tCIDLib::TCard4&   c4Bytes
        );

        TMemBuf* pmbufFormatPushFont
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strFaceName
            , const tCIDLib::TCard1    c1Flags
            , const tCIDLib::TCard1    c1Height
        );

        TMemBuf* pmbufFormatRIVACmd
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strCmd
            , const TString&   strParm1
            , const TString&   strParm2
            , const TString&   strParm3
        );

        TMemBuf* pmbufFormatSetBackMixMode
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tWebRIVA::EBackMixModes    eMode
        );

        TMemBuf* pmbufFormatSetColor
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tWebRIVA::EDrawingColors    eToSet
            , const TRGBClr&   clrNewClr
        );

        TMemBuf* pmbufFormatSetMixMode
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tWebRIVA::EMixModes    eMode
        );

        TMemBuf* pmbufFormatSetTmplBorderClr
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strToSet
        );

        TMemBuf* pmbufFormatSetRemWidgetURL
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strUID
            , const tWebRIVA::EWdgTypes    eType
            , const TString&   strNewURL
            , const TString&   strParams
        );

        TMemBuf* pmbufFormatSetRemWidgetVis
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strUID
            , const tWebRIVA::EWdgTypes    eType
            , const tCIDLib::TBoolean    bNewState
        );

        TMemBuf* pmbufFormatShowErrorMsg
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tWebRIVA::EErrMsgs    eCode
            , const TString&   strErrText
        );

        TMemBuf* pmbufFormatShowException
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strTitle
            , const TString&   strMsgText
            , const tCIDLib::TCard4    c4Line
            , const tCIDLib::TCard4    c4ErrCode
            , const tCIDLib::TCard4    c4KrnlErrCode
            , const tCIDLib::TCard4    c4SysErrCode
            , const TString&   strErrText
            , const TString&   strAuxText
            , const TString&   strProcName
            , const TString&   strFacName
            , const TString&   strSrcFile
        );

        TMemBuf* pmbufFormatShowMsg
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TString&   strTitle
            , const TString&   strMsgText
        );

        TMemBuf* pmbufFormatSpecialAction
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tWebRIVA::ESpecialActs    eAction
        );

        TMemBuf* pmbufFormatStatusReturn
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tCIDLib::TCard1    c1Status
            , const tCIDLib::TCard4    c4Extra
            , const TString&   strErrText
        );

        TMemBuf* pmbufFormatStartDraw
        (
                    tCIDLib::TCard4&   c4Bytes
            , const TArea&   areaToUpdate
        );

        TMemBuf* pmbufFormatStrokeArea
        (
                    tCIDLib::TCard4&   c4Bytes
            , const tCIDLib::TCard1    c1Rounding
            , const tCIDLib::TCard1    c1Width
            , const TArea&   areaStrokeArea
            , const TRGBClr&   clrLineClr
        );

        tCIDLib::TVoid ExtractMove
        (
                    TJSONObject&           jprsnSrc
            ,       TPoint&   pntAt
        );

        tCIDLib::TVoid ExtractPress
        (
                    TJSONObject&           jprsnSrc
            ,       TPoint&   pntAt
        );

        tCIDLib::TVoid ExtractRelease
        (
                    TJSONObject&           jprsnSrc
            ,       TPoint&   pntAt
        );

        tCIDLib::TVoid ExtractCancelInput
        (
                    TJSONObject&           jprsnSrc
        );

        tCIDLib::TVoid ExtractSetVisState
        (
                    TJSONObject&           jprsnSrc
            ,       tCIDLib::TBoolean&   bState
        );

        tCIDLib::TVoid ExtractSessionState
        (
                    TJSONObject&           jprsnSrc
            ,       tCIDLib::TCard4&   c4SrvFlags
            ,       tCIDLib::TCard4&   c4BitMask
        );

        tCIDLib::TVoid ExtractLogMsg
        (
                    TJSONObject&           jprsnSrc
            ,       TString&   strToLog
            ,       tCIDLib::TBoolean&   bIsError
        );

        tCIDLib::TVoid ExtractSetServerFlags
        (
                    TJSONObject&           jprsnSrc
            ,       tCIDLib::TCard4&   c4ToSet
            ,       tCIDLib::TCard4&   c4BitMask
        );

        TMemBuf* pmbufFormatPing
        (
                    tCIDLib::TCard4&   c4Bytes
        );

        tCIDLib::TVoid ExtractPing
        (
                    TJSONObject&           jprsnSrc
        );



        // Convenience methods
        TMemBuf* pmbufFormatShowException
        (
                    tCIDLib::TCard4&  c4Bytes
            , const TString&          strTitle
            , const TString&          strMsgText
            , const TError&           errToSend
        );

    private :
        TTextMBufOutStream m_strmFmt;

};
