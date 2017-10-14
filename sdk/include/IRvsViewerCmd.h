#ifndef _RVS_VIEWER_CMD_INC
#define _RVS_VIEWER_CMD_INC

#include "rvs_define.h"



typedef enum EN_RVS_VIEWER_ROTATE_TYPE
{
    EN_RVS_VIEWER_ROTATE_TYPE_NONE = 0,
    EN_RVS_VIEWER_ROTATE_TYPE_VERTICAL = 1,
    EN_RVS_VIEWER_ROTATE_TYPE_HORIZONTAL = 2,
    EN_RVS_VIEWER_ROTATE_TYPE_HORIZONTAL_AND_VERTICAL = 3,

}EN_RVS_VIEWER_ROTATE_TYPE;


 
#define RVS_VIEWER_RESULT_CODE_OK           0               /*处理成功*/
#define RVS_VIEWER_RESULT_CODE_ERR          1              /*处理失败*/

class _RVS_API IRvsViewerCmdEvent
{
public:
    virtual RVS_VOID OnCustomDataRecv(RVS_ULL ullPeerCID, RVS_UC* pucDataBuffer, RVS_UI uiBufLen) = 0 ;

    //bStatus信息请参考EN_RVS_RESULT_CODE定义；
    virtual RVS_VOID OnRequestStatus(RVS_ULL ullRequestID, RVS_BOOL bStatus) = 0;

    //iErrorCode信息请参考EN_RVS_RESULT_CODE定义；
    virtual RVS_VOID OnCmdTimeGetResult(RVS_ULL ullRequestID,RVS_INT iErrorCode, RVS_UC* pucTime, RVS_INT iTimeZone, RVS_BOOL bSyncFlag) = 0;

    //iErrorCode信息请参考EN_RVS_RESULT_CODE定义；
    virtual RVS_VOID OnCmdSdCardInfoResult(RVS_ULL ullRequestID, RVS_INT iErrorCode,RVS_ULL ullTotalSize, RVS_ULL ullRemainSize) = 0 ;
};



class _RVS_API IRvsViewerCmd
{
public:
    virtual ~IRvsViewerCmd(){}
    enum { IID = IID_RVS_CMD };

    //设置cmd请求时间通知类指针；
    virtual RVS_INT SetRvsCmdEvent(IRvsViewerCmdEvent* pICmdEvent) = 0 ;

    //请求时间设置信息；
    virtual RVS_ULL RequestStreamerTimeZone(RVS_ULL ullStreamerCID) = 0;

    //请求sd卡容量信息；
    virtual RVS_ULL RequestStreamerSDCardInfo(RVS_ULL ullStreamerCID) = 0;

    virtual RVS_ULL RequestStreamerWifiStatus(RVS_ULL ullStreamerCID) = 0;


    //修改采集端用户名密码信息；
    virtual RVS_ULL ChangeStreamerLoginUserPwd( RVS_ULL ullStreamerCID, 
                                                RVS_UC* pucNewUser, 
                                                RVS_UC* pucNewPwd) = 0;

    //修改采集端编码质量；
    virtual RVS_ULL ChangeStreamerEncoderQulity(RVS_ULL ullStreamerCID, 
                                                RVS_INT iCamIndex,
                                                RVS_INT iStreamIndex,
                                                RVS_INT iBitrate, 
                                                RVS_INT iFramerate, 
                                                RVS_INT iFrameInterval, 
                                                RVS_INT iQulity) = 0;

    //设置采集端时间信息；
    virtual RVS_ULL SetStreamerTimeZone(RVS_ULL ullStreamerCID, 
                                        RVS_UC* pucTime, 
                                        RVS_INT iTimeZone, 
                                        RVS_BOOL bSyncFlag) = 0;

    //格式化采集端sd卡；
    virtual RVS_ULL FormatStreamerSDCard(RVS_ULL ullStreamerCID) = 0;

    //请求指定摄像头快速的编一个I帧；
    virtual RVS_ULL ForceIFrame(RVS_ULL ullStreamerCID, 
        RVS_INT iCamIndex, 
        RVS_INT iStreamIndex) = 0;

    //uiRotateType参数取值参见枚举类型；EN_RVS_VIEWER_ROTATE_TYPE
    virtual RVS_ULL CameraRotate(RVS_ULL ullStreamerCID, RVS_INT iCamIndex, RVS_UI uiRotateType) = 0;

    //对于手机采集端，前后摄像头切换；
    virtual RVS_ULL FrontRearCamSwitch(RVS_ULL ullStreamerCID, RVS_INT iCamIndex) = 0;

    //手机采集端，打开手电筒开关；
    virtual RVS_ULL TorchSwitch(RVS_ULL ullStreamerCID, RVS_INT iCamIndex) = 0;


    //ptz相关操作；
    virtual RVS_ULL PTZMoveCtrl(RVS_ULL ullStreamerCID, 
                                RVS_INT iCamIndex,
                                RVS_UI uiType, /** 0x00 PTZ Ctrl; 0x01 Move Ctrl; */
                                RVS_INT iPRDirect,  /** P or X Direct */
                                RVS_INT iTVDirect, /** T or Y Direct */
                                RVS_INT iZFDirect) = 0 ; /**Z or Z Direct */


    
    //发送自定义数据；
    virtual RVS_INT SendCustomData(RVS_ULL ullStreamerCID, RVS_UC* pucDataBuffer, RVS_UI  uiBufLen) = 0;


    virtual RVS_VOID Release()= 0;
};
























#endif
