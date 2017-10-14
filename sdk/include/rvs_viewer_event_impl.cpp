
#include "rvs_viewer_event_impl.h"
#include <memory.h>
#include "stdio.h"




RVS_VOID CViewerEventImpl::OnLoginResult(EN_RVS_LOGIN_STATE enLoginState, 
                                         RVS_INT uiProgressRate, 
                                         EN_RVS_LOGIN_SUBCODE enErrCode)
{
    //module_on_connect_status(enLoginState,uiProgressRate,enErrCode);
    if (E_RVS_LOGIN_STATE_CONNECTED == enLoginState)
    {
        printf("WM_VIEWER_LOGIN_SUC\n");
        fflush(stdout);
//        HWND hWnd = AfxGetApp()->m_pMainWnd->m_hWnd;
//        if (NULL != hWnd)
//        {
//            ::PostMessage(hWnd,WM_VIEWER_LOGIN_SUC,0,0);
//        }
    }
}
 

RVS_VOID CViewerEventImpl::OnStreamerPresenceStatus(RVS_ULL ullStreamerCID, EN_RVS_STREAMER_PRESENCE_STATE enPresenceState)
{
    if (E_RVS_STREAMER_PRESENCE_STATE_ONLINE == enPresenceState)
    {
        printf("WM_CONNECT_STREAMER_SUC\n");
        connectSuc=true;
        fflush(stdout);
//        HWND hWnd = AfxGetApp()->m_pMainWnd->m_hWnd;
//        if (NULL != hWnd)
//        {
//            ::PostMessage(hWnd,WM_CONNECT_STREAMER_SUC,0,0);
//        }
    }
}

 

RVS_VOID CViewerEventImpl::OnUpdateCID(RVS_ULL ullLocalCID)
{
    char szcid[16]={0};
    sprintf(szcid,"%llu",ullLocalCID);
    //libuser_set_data_string(CONFIG_KEY_CFG_CID,szcid);
}

RVS_VOID CViewerEventImpl::OnLanSearchStreamerResult( RVS_ULL ullStreamerCID, 
                                                       RVS_UC* pucStreamerName, 
                                                       RVS_UI uiOSType)
{
    
   // module_lan_search_data_callback(ullStreamerCID,uiOSType,(const char *)pucStreamerName);
    
}


RVS_VOID CViewerEventImpl::OnCustomDataRecv(RVS_ULL ullPeerCID, RVS_UC* pucDataBuffer, RVS_UI uiBufLen) 
{

    
}

RVS_VOID CViewerEventImpl::OnRequestStatus(RVS_ULL ullRequestID, RVS_BOOL bStatus) 
{

}

RVS_VOID CViewerEventImpl::OnCmdTimeGetResult(RVS_ULL ullRequestID,RVS_INT iErrorCode, RVS_UC* pucTime, RVS_INT iTimeZone, RVS_BOOL bSyncFlag)  
{

    //business_on_request_streamer_time_callback(ullRequestID,pucTime,iTimeZone,bSyncFlag);
}

RVS_VOID CViewerEventImpl::OnCmdSdCardInfoResult(RVS_ULL ullRequestID, RVS_INT iErrorCode,RVS_ULL ullTotalSize, RVS_ULL ullRemainSize)  
{


   // business_on_request_sdcard_info_callback(ullRequestID,ullTotalSize,ullRemainSize);
}


RVS_VOID CViewerEventImpl::OnPlayStreamStatus(RVS_HANDLE hHandle, 
                                EN_RVS_MEDIASTREAM_STATE enStreamState, 
                                EN_RVS_MEDIASTREAM_FLAG enStreamFlag)  
{
    

        if (EN_RVS_MEDIASTREAM_STATE_CREATED == enStreamState)
        {
            printf("WM_PLAY_STREAMER_SUC\n");
            fflush(stdout);
            playSuc=true;
//            HWND hWnd = AfxGetApp()->m_pMainWnd->m_hWnd;
//            if (NULL != hWnd)
//            {
//                ::PostMessage(hWnd,WM_PLAY_STREAMER_SUC,0,0);
//            }
        }
     //business_rtsp_play_status_callback(hHandle,enStreamState,enStreamFlag);
	 //theApp.m_pDlgAtHomeWindow->PostMessage(WM_MY_RSP_RTSP_PALY,(WPARAM)enStreamFlag,(LPARAM)hHandle);
}



RVS_VOID CViewerEventImpl::OnRecvJpeg(RVS_ULL ullRequestID, 
                            RVS_UC* pucJpegBuffer, 
                            RVS_UI uiBufLen) 
{

}
RVS_VOID CViewerEventImpl::OnRequestRecordFiles(  RVS_ULL ullRequestID,
                                                 RVS_UI  uiErrorCode, 
                                                 RVS_UI uiTotalCount, 
                                                 RVS_UI uiCurrentCount, 
                                                 ST_RVS_RECORD_FILE_INFO stFileInfo[])
{   
    //api_business_request_record_list_callback(ullRequestID,uiTotalCount,uiCurrentCount,stFileInfo);
             
}

RVS_VOID CViewerEventImpl::OnRecordFileDeleteStatus(RVS_ULL ullRequestID, RVS_BOOL bStatus) 
{

}



RVS_VOID CViewerEventImpl::OnRequestCloudFilesPerDay(   RVS_ULL llidStreamerCID, 
                                                     RVS_UI  uiErrorCode, 
                                                     RVS_UI uiCountPerDay[], 
                                                     RVS_UI puiDayCount, 
                                                     RVS_UC* pucStartDay)

{
    ///api_business_request_cloud_count_callback(llidStreamerCID,uiCountPerDay,puiDayCount,pucStartDay);
}

RVS_VOID CViewerEventImpl::OnRequestCloudFiles(   RVS_UI uiRequestID, 
                                               RVS_UI uiErrorCode, 
                                               RVS_UI uiTotalCount, 
                                               RVS_UI uiCurrentCount, 
                                               ST_RVS_CLOUD_FILE_INFO stFileInfo[]) 
{

    //api_business_request_cloud_video_list_callback(uiRequestID,uiTotalCount,uiCurrentCount,stFileInfo);
}

RVS_VOID CViewerEventImpl::OnRecvCloudFileIcon(   RVS_ULL ullStreamerCID, 
                                     RVS_UC* pucEid, 
                                     RVS_UC* pucBuffer, 
                                     RVS_UI uiBufLen)  
{

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

RVS_VOID CViewerEventImpl::OnReverseStreamStatus( RVS_ULL ullStreamerCID, 
                                       EN_RVS_MEDIASTREAM_STATE enStreamState, 
                                       EN_RVS_MEDIASTREAM_FLAG enStreamFlag)  
{

}

RVS_VOID CViewerEventImpl::OnReverseStreamPutData(RVS_ULL ullStreamerCID,
                                        EN_RVS_REV_STREAM_TYPE* penStreamType,
                                        RVS_UC** ppucData,
                                        RVS_UI* puiLen,
                                        RVS_UI* puiTimestamp)  
{

}


RVS_VOID CViewerEventImpl::OnStreamerInfoChanged(RVS_ULL ullPeerCID,EN_RVS_STREAMER_INFO_TYPE enStreamerCfgType )
{
    if (EN_RVS_STREAMER_BASIC_INFO == enStreamerCfgType)
    {
        //business_peer_streamer_changed_callbck(ullPeerCID,(unsigned int)enStreamerCfgType);
    }

    
}


RVS_VOID CViewerEventImpl::OnLocalRecordStatus(RVS_HANDLE hHandle, 
                                     EN_VIEWER_LOCAL_RECORD_ERRID enErrId) 
{

}



RVS_VOID CViewerEventImpl::OnUsrForceRemoveCid( RVS_ULL ullStreamerCID) 
{

}



RVS_VOID CViewerEventImpl::OnUsrAddStreamer(RVS_UI uiRequestId,EN_USR_ERRCODE enErrId, const RVS_UC* pucResverd )   
{

}


RVS_VOID CViewerEventImpl::OnUsrRequestResult(EN_RVS_USR_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId) 
{

}


RVS_VOID CViewerEventImpl::OnUsrPointRequestResult(EN_RVS_USR_POINT_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId,RVS_UI uiTaskPoint,RVS_UI uiTotalPoint) 
{

}


RVS_VOID CViewerEventImpl::OnStreamerConfigChanged(RVS_ULL ullStreamerCID, EN_RVS_NTY_TYPE enRvsNfyType) 
{

}

//云视频列表回调；
RVS_VOID CViewerEventImpl::OnRequestCloudFilesEx( RVS_UI uiRequestID, 
                                       RVS_UI uiErrorCode,
                                       RVS_UI uiFileInfoCount, 
                                       ST_RVS_CLOUD_FILE_INFO_LIST stFileInfoList[])
{

}


RVS_VOID CViewerEventImpl::OnCloudFileDeleteStatus(RVS_ULL ullRequestID, RVS_BOOL bSucc) 
{

}
