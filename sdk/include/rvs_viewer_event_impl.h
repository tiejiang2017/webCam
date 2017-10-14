#ifndef _RVS_VIEWER_EVENT_H_
#define _RVS_VIEWER_EVENT_H_

#include "rvs_viewer_api.h"

class CViewerEventImpl: public IRvsViewerEvent,
                        public IRvsViewerCmdEvent,
                        public IRvsViewerMediaEvent
{
public:
    bool playSuc;
    bool connectSuc;
///////////////////////IRvsViewerEvent回调接口实现////////////////////////////////////
 

    virtual RVS_VOID OnStreamerPresenceStatus(RVS_ULL ullStreamerCID, EN_RVS_STREAMER_PRESENCE_STATE enPresenceState) ;
 

    virtual RVS_VOID OnLoginResult(EN_RVS_LOGIN_STATE enLoginState, 
        RVS_INT uiProgressRate, 
        EN_RVS_LOGIN_SUBCODE enErrCode) ;

    virtual RVS_VOID OnUpdateCID(RVS_ULL ullLocalCID)  ;

    virtual RVS_VOID OnLanSearchStreamerResult( RVS_ULL ullStreamerCID, 
        RVS_UC* pucStreamerName, 
        RVS_UI uiOSType) ;



///////////////////////IRvsViewerCmdEvent回调接口实现//////////////////////////////////////////

    virtual RVS_VOID OnCustomDataRecv(RVS_ULL ullPeerCID, RVS_UC* pucDataBuffer, RVS_UI uiBufLen) ;

    virtual RVS_VOID OnRequestStatus(RVS_ULL ullRequestID, RVS_BOOL bStatus) ;

    virtual RVS_VOID OnCmdTimeGetResult(RVS_ULL ullRequestID, RVS_INT iErrorCode,RVS_UC* pucTime, RVS_INT iTimeZone, RVS_BOOL bSyncFlag)  ;

    virtual RVS_VOID OnCmdSdCardInfoResult(RVS_ULL ullRequestID, RVS_INT iErrorCode,RVS_ULL ullTotalSize, RVS_ULL ullRemainSize)  ;


/////////////////////////////////IRvsViewerMediaEvent回调接口实现/////////////////////////////////////////////

    virtual RVS_VOID OnPlayStreamStatus(RVS_HANDLE hHandle, 
        EN_RVS_MEDIASTREAM_STATE enStreamState, 
        EN_RVS_MEDIASTREAM_FLAG enStreamFlag)  ;



    virtual RVS_VOID OnRecvJpeg(RVS_ULL ullRequestID, 
        RVS_UC* pucJpegBuffer, 
        RVS_UI uiBufLen); 

    virtual RVS_VOID OnRequestRecordFiles(  RVS_ULL ullRequestID,
                                            RVS_UI  uiErrorCode, 
                                            RVS_UI uiTotalCount, 
                                            RVS_UI uiCurrentCount, 
                                            ST_RVS_RECORD_FILE_INFO stFileInfo[]) ;

    virtual RVS_VOID OnRecordFileDeleteStatus(RVS_ULL ullRequestID, RVS_BOOL bStatus) ;



    virtual RVS_VOID OnRequestCloudFilesPerDay(   RVS_ULL llidStreamerCID, 
                                                RVS_UI  uiErrorCode, 
                                                RVS_UI uiCountPerDay[], 
                                                RVS_UI puiDayCount, 
                                                RVS_UC* pucStartDay) ;


    virtual RVS_VOID OnRequestCloudFiles(   RVS_UI uiRequestID, 
                                            RVS_UI uiErrorCode, 
                                            RVS_UI uiTotalCount, 
                                            RVS_UI uiCurrentCount, 
                                            ST_RVS_CLOUD_FILE_INFO stFileInfo[]) ;

    virtual RVS_VOID OnRecvCloudFileIcon(   RVS_ULL ullStreamerCID, 
        RVS_UC* pucEid, 
        RVS_UC* pucBuffer, 
        RVS_UI uiBufLen)  ;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////

    virtual RVS_VOID OnReverseStreamStatus( RVS_ULL ullStreamerCID, 
                                            EN_RVS_MEDIASTREAM_STATE enStreamState, 
                                            EN_RVS_MEDIASTREAM_FLAG enStreamFlag)  ;

    virtual RVS_VOID OnReverseStreamPutData(RVS_ULL ullStreamerCID,
                                            EN_RVS_REV_STREAM_TYPE* penStreamType,
                                            RVS_UC** ppucData,
                                            RVS_UI* puiLen,
                                            RVS_UI* puiTimestamp)  ;

    virtual RVS_VOID OnStreamerInfoChanged(RVS_ULL ullPeerCID,EN_RVS_STREAMER_INFO_TYPE enStreamerCfgType )  ;


    virtual RVS_VOID OnLocalRecordStatus(RVS_HANDLE hHandle, 
        EN_VIEWER_LOCAL_RECORD_ERRID enErrId) ;



    virtual RVS_VOID OnUsrForceRemoveCid( RVS_ULL ullStreamerCID) ;


 
    virtual RVS_VOID OnUsrAddStreamer(RVS_UI uiRequestId,EN_USR_ERRCODE enErrId, const RVS_UC* pucResverd )   ;

 
    virtual RVS_VOID OnUsrRequestResult(EN_RVS_USR_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId) ;


    virtual RVS_VOID OnUsrPointRequestResult(EN_RVS_USR_POINT_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId,RVS_UI uiTaskPoint,RVS_UI uiTotalPoint)  ;

 
    virtual RVS_VOID OnStreamerConfigChanged(RVS_ULL ullStreamerCID, EN_RVS_NTY_TYPE enRvsNfyType)  ;

    //云视频列表回调；
    virtual RVS_VOID OnRequestCloudFilesEx( RVS_UI uiRequestID, 
        RVS_UI uiErrorCode,
        RVS_UI uiFileInfoCount, 
        ST_RVS_CLOUD_FILE_INFO_LIST stFileInfoList[]) ;



    virtual RVS_VOID OnCloudFileDeleteStatus(RVS_ULL ullRequestID, RVS_BOOL bSucc) ;
};


#endif
