#ifndef _RVS_VIEWER_MEDIA_INC
#define _RVS_VIEWER_MEDIA_INC


#include "rvs_define.h"

//视频查询结果错误码；
typedef enum enRVS_RESULT_CODE
{
    EN_RVS_RESULT_CODE_OK = 0,                   /*处理成功*/
    EN_RVS_RESULT_CODE_ERR = 30001,              /*处理失败*/
    EN_RVS_RESULT_CODE_INVALID_PARAM = 30002,    /*参数错误*/
    EN_RVS_RESULT_CODE_UNKNOWN = 30003,          /*未知错误*/
    EN_RVS_RESULT_CODE_UNSUPPORT = 30004,        /*不支持*/
    EN_RVS_RESULT_CODE_NO_FILE = 30005,          /*查无文件*/

    EN_RVS_RESULT_CODE_RESEVERD = 30010,          /*保留错误码*/
    EN_RVS_RESULT_CODE_ERRPWD    = 30012,          /*用户名密码错误*/
    EN_RVS_RESULT_CODE_OFFLINE   = 30014,          /*设备离线*/


    EN_RVS_RESULT_CODE_INVALID  = 0xFFFF
}EN_RVS_RESULT_CODE;


//视频连接请求状态码；
typedef enum enum_RVS_MEDIASTREAM_STATE{
    EN_RVS_MEDIASTREAM_STATE_CREATED        = 0,//播放成功；
    EN_RVS_MEDIASTREAM_STATE_CLOSED             //播放失败；
}EN_RVS_MEDIASTREAM_STATE;

//视频连接详细错误码；
typedef enum enum_RVS_MEDIASTREAM_FLAG{
    EN_RVS_MEDIASTREAM_FLAG_NOERR          = 0,
    EN_RVS_MEDIASTREAM_FLAG_SERVICE_NOTSUPPORT,
    EN_RVS_MEDIASTREAM_FLAG_VERSION_NOTSUPPORT  = 2,
    EN_RVS_MEDIASTREAM_FLAG_SERVICE_FULL,
    EN_RVS_MEDIASTREAM_FLAG_VERSION_NEEDUPDATE  = 4,
    EN_RVS_MEDIASTREAM_FLAG_SERVICE_ERR,
    EN_RVS_MEDIASTREAM_FLAG_PARSE_ERR           = 6,
    EN_RVS_MEDIASTREAM_FLAG_FINISHED,
    EN_RVS_MEDIASTREAM_FLAG_CLOSED              = 8,
    EN_RVS_MEDIASTREAM_FLAG_TIMEOUT,
    EN_RVS_MEDIASTREAM_FLAG_REFUDED             //被对方拒绝；
}EN_RVS_MEDIASTREAM_FLAG;


//逆向音视频类型定义；
typedef enum enum_RVS_REV_STREAM_TYPE{
    EN_RVS_REV_STREAM_TYPE_AUDIO     = 0,
    EN_RVS_REV_STREAM_TYPE_VIDEO     = 1,
    EN_RVS_REV_STREAM_TYPE_AV        = 2,
}EN_RVS_REV_STREAM_TYPE;



typedef enum enum_RVS_PTZMOVE_TYPE
{
    E_RVS_PTZMOVE_TYPE_PTZ            = 0,
    E_RVS_PTZMOVE_TYPE_MOVE           = 1
}EN_RVS_PTZMOVE_TYPE;


//传输视频格式定义；
typedef enum enum_RVS_VIDEO_TYPE
{   
    E_MEDIA_VIDEO_TYPE_JPEG               = 1, 
    E_MEDIA_VIDEO_TYPE_H264               = 2,   
}EN_RVS_VIDEO_TYPE;

//传输音频格式定义；
typedef enum enum_RVS_AUDIO_TYPE
{
    E_MEDIA_AUDIO_TYPE_AAC               = 1,
    E_MEDIA_AUDIO_TYPE_G711A             = 2,
    E_MEDIA_AUDIO_TYPE_G711U             = 3,
    E_MEDIA_AUDIO_TYPE_PCM16             = 4,
}EN_RVS_AUDIO_TYPE;

//传输媒体信息描述结构体；
typedef struct stRVS_MEDIA_AVDESC
{
    EN_RVS_VIDEO_TYPE               enVideoType;
    RVS_INT                         iWidth;
    RVS_INT                         iHeight;

    EN_RVS_AUDIO_TYPE               enAudioType;
    RVS_UI                          uiSampleRate;
    RVS_UI                          uiChannel;
    RVS_UI                          uiDepth;
}ST_RVS_MEDIA_AVDESC;


//请求jpeg图片的尺寸规格类型；
typedef enum enum_RVS_JPEG_TYPE
{
    EN_RVS_JPEG_TYPE_HD           = 0,
    EN_RVS_JPEG_TYPE_NORMAL       = 1,
    EN_RVS_JPEG_TYPE_ICON         = 2,
}EN_RVS_JPEG_TYPE;

//请求录制视频类型枚举；
typedef enum enum_RVS_RECORD_TYPE
{
    EN_RVS_RECORD_TYPE_TIMINGRECORD = 1,
    EN_RVS_RECORD_TYPE_PRERECORD    = 2,
    EN_RVS_RECORD_TYPE_SHORTVIDEO   = 4,
    EN_RVS_RECORD_TYPE_INVALID
}EN_RVS_RECORD_TYPE;

//请求录制视频类型枚举；
typedef enum enum_RVS_CLOUD_RECORD_TYPE
{
    EN_CLOUD_ALARM_VIDEO            = 2,
    EN_CLOUD_SHORT_VIDEO            = 4,
    EN_CLOUD_TYPE_INVALID
}EN_RVS_CLOUD_RECORD_TYPE;
/*
_UI uiMagic;                                // CBCD_FILE_INFO_MAGIC = 0x04030201
_UI uiVersion;                              // version number: CBCD_FILE_INFO_VERSION.
_UC aucFilename[COS_FILE_NAME_LEN];         // 256 bytes
_UC aucIconName[CBCD_ICON_NAME_LEN];        // file suffix, eg. "jpg", etc.
_UC aucCreateTime[CBCD_DATE_STR_LEN];       // 32 bytes, 'YYMMDDHHmmss'
_UI uiFileSize;                             // count of bytes
_UI uiFileDuration; 

*/
//录制视频结构体定义；
typedef struct stRVS_RECORD_FILE_INFO
{
    RVS_UI         uiFileSize;
    RVS_UI         uiFileDuration;
    RVS_UC         ucFileName[256];
    RVS_UC         ucIconExname[8];
    RVS_UC         ucCreateTime[32];

}ST_RVS_RECORD_FILE_INFO;


//云视频结构体定义；
typedef struct stRVS_CLOUD_FILE_INFO
{
    RVS_UI         uiCamIndex;
    RVS_UI         uiFileType; //0报警视频，1缩时摄影；
    RVS_UI         uiDuration;
    RVS_UI         uiFileSize;
    RVS_UC         ucVersion;
    RVS_UC         ucEid[64];
    RVS_UC         ucCreateTime[32];
}ST_RVS_CLOUD_FILE_INFO,*LPST_RVS_CLOUD_FILE_INFO;

typedef struct stRVS_CLOUD_FILE_INFO_LIST
{
    RVS_UI                      uiFileNum;
    RVS_UC                      ucDate[32];
    LPST_RVS_CLOUD_FILE_INFO     pstCloudFileInfoList;
}ST_RVS_CLOUD_FILE_INFO_LIST,*LPST_RVS_CLOUD_FILE_INFO_LIST;

typedef enum enViewLocalRecordErrId
{
    EN_VIEWER_LOCAL_RECORD_NEEDCLOSE = 0,
    EN_VIEWER_LOCAL_RECORD_WRITEFAIL = 1,

    EN_VIEWER_LOCAL_RECORD_INVALID = 99
}EN_VIEWER_LOCAL_RECORD_ERRID;


class _RVS_API IRvsViewerMediaEvent
{
public:
///////////////////////////////媒体流播放基本回调接口//////////////////////////////////////////////////////
    virtual RVS_VOID OnPlayStreamStatus(RVS_HANDLE hHandle, 
                                    EN_RVS_MEDIASTREAM_STATE enStreamState, 
                                    EN_RVS_MEDIASTREAM_FLAG enStreamFlag) = 0;


    virtual RVS_VOID OnLocalRecordStatus(RVS_HANDLE hHandle, 
                                        EN_VIEWER_LOCAL_RECORD_ERRID enErrId) = 0;    

    //接收jpeg图片数据回调；
    virtual RVS_VOID OnRecvJpeg(RVS_ULL ullRequestID, 
                                RVS_UC* pucJpegBuffer, 
                                RVS_UI uiBufLen) = 0;

    //录制视频请求数据回调；
    virtual RVS_VOID OnRequestRecordFiles(  RVS_ULL ullRequestID,
                                            RVS_UI  uiErrorCode, 
                                            RVS_UI uiTotalCount, 
                                            RVS_UI uiCurrentCount, 
                                            ST_RVS_RECORD_FILE_INFO stFileInfo[]) = 0;

    virtual RVS_VOID OnRecordFileDeleteStatus(RVS_ULL ullRequestID, RVS_BOOL bStatus) = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //云视频基本个数信息请求；
    virtual RVS_VOID OnRequestCloudFilesPerDay(   RVS_ULL llidStreamerCID, 
                                            RVS_UI  uiErrorCode, 
                                            RVS_UI uiCountPerDay[], 
                                            RVS_UI puiDayCount, 
                                            RVS_UC* pucStartDay) = 0;

    //云视频列表回调；
    virtual RVS_VOID OnRequestCloudFiles(   RVS_UI uiRequestID, 
                                            RVS_UI uiErrorCode, 
                                            RVS_UI uiTotalCount, 
                                            RVS_UI uiCurrentCount, 
                                            ST_RVS_CLOUD_FILE_INFO stFileInfo[]) = 0;

    //云视频列表回调；
    virtual RVS_VOID OnRequestCloudFilesEx( RVS_UI uiRequestID, 
                                            RVS_UI uiErrorCode,
                                            RVS_UI uiFileInfoCount, 
                                            ST_RVS_CLOUD_FILE_INFO_LIST stFileInfoList[]) = 0;

    virtual RVS_VOID OnRecvCloudFileIcon(   RVS_ULL ullStreamerCID, 
                                            RVS_UC* pucEid, 
                                            RVS_UC* pucBuffer, 
                                            RVS_UI uiBufLen) = 0;


    virtual RVS_VOID OnCloudFileDeleteStatus(RVS_ULL ullRequestID, RVS_BOOL bSucc) = 0;

/////////////////////////////////////////////////////////////////////////////////////////////////////////

    //逆向音视频状态通知；
    virtual RVS_VOID OnReverseStreamStatus( RVS_ULL ullStreamerCID, 
                                            EN_RVS_MEDIASTREAM_STATE enStreamState, 
                                            EN_RVS_MEDIASTREAM_FLAG enStreamFlag) = 0;

    //逆向音视频数据通知；
    virtual RVS_VOID OnReverseStreamPutData(RVS_ULL ullStreamerCID,
                                            EN_RVS_REV_STREAM_TYPE* penStreamType,
                                            RVS_UC** ppucData,
                                            RVS_UI* puiLen,
                                            RVS_UI* puiTimestamp) = 0;
////////////////////////////////////////////////////////////////////////////////////////////////////////
};


class _RVS_API IRvsViewerMedia
{
public:
    enum { IID = IID_RVS_MEDIA };
    virtual ~IRvsViewerMedia(){}

    virtual RVS_VOID Release()= 0;

    //设置媒体接口事件通知类；
    virtual RVS_INT SetViewerMediaEvent(IRvsViewerMediaEvent* pIMediaEvent) = 0;


    //打开一个实时视频媒体流（观看实时视频时调用）；
    virtual RVS_HANDLE OpenLiveStream(  RVS_ULL ullStreamerCID, 
                                        RVS_INT iCamIndex, 
                                        RVS_INT iStreamIndex,
                                        RVS_INT iMicIndex) = 0;

    //关闭一个视频流
    virtual RVS_INT CloseStream(RVS_HANDLE hHandle) = 0;



    //获取媒体流基本音视频相关信息；
    virtual RVS_INT GetStreamDesc(RVS_HANDLE hHandle, _OUT ST_RVS_MEDIA_AVDESC* pstMediaDesc) = 0;


    //获取H264视频数据；
    virtual RVS_INT GetVideoData(RVS_HANDLE hHandle, 
                                _OUT RVS_UC** ppucStreamBuffer, 
                                _OUT RVS_UI* puiBufLen, 
                                _OUT RVS_UI* puiTimeStamp) = 0;

    //获取解码后的YUV视频数据；
    virtual RVS_INT GetVideoYUVData(RVS_HANDLE hHandle, 
                                    _OUT RVS_UC** y, 
                                    _OUT RVS_UC** u, 
                                    _OUT RVS_UC** v,
                                    _OUT RVS_UI* puiTimeStamp)   = 0;

    virtual RVS_INT GetVideoYUV422Data(RVS_HANDLE hHandle, 
                                    _OUT RVS_UC** yuv,
                                    _OUT RVS_UI* puiTimeStamp) = 0  ;


    virtual RVS_INT GetVideoSize(RVS_HANDLE hHandle,_OUT RVS_UI* puiWidth,_OUT RVS_UI* puiHeight) = 0;


    //获取音频数据；
    virtual RVS_INT GetAudioData(RVS_HANDLE hHandle, 
                                _OUT RVS_UC** ppucStreamBuffer, 
                                _OUT RVS_UI* puiBufLen, 
                                _OUT RVS_UI* puiTimeStamp) = 0;

    //获取解码后的PCM数据；
    virtual RVS_INT GetAudioPcmData(RVS_HANDLE hHandle, 
                                _OUT RVS_UC** ppucStreamBuffer, 
                                _OUT RVS_UI* puiBufLen, 
                                _OUT RVS_UI* puiTimeStamp) = 0;




    ///////////////////////////////////////////////////////////////////////////////////////////
    //录制视频，云视频相关观看，暂停，拖动等方法；

    //打开一个录制视频流；
    virtual RVS_HANDLE OpenRemoteRecordFileStream(RVS_ULL ullStreamerCID, const RVS_UC* pucFileName) = 0;

    //打开一个云视频流；
    //virtual RVS_HANDLE OpenCloudRecordFileStream(RVS_ULL ullStreamerCID, const RVS_UC* pucEid) = 0 ;
    virtual RVS_HANDLE OpenCloudRecordFileStream(RVS_ULL ullStreamerCID, RVS_UI uiFileType, const RVS_UC* pucEid,const RVS_UC* pucDate,RVS_UC ucVersion) = 0  ;

    //打开一个本地视频流；
    virtual RVS_HANDLE OpenLocalFileStream(const RVS_UC* pucFilePathName) = 0 ;

    //返回一个本地视频流的总时长（毫秒）；
    virtual RVS_INT GetLocalFileDuration(const RVS_UC* pucFilePathName,RVS_UI* puiFileDuration) = 0;


    //暂停媒体流
    virtual RVS_INT PauseStream(RVS_HANDLE hHandle) = 0;

    //恢复媒体流；
    virtual RVS_INT ResumeStream(RVS_HANDLE hHandle) = 0;

    //拖动媒体流；
    virtual RVS_INT SeekStream(RVS_HANDLE hHandle, RVS_UI uiTimeStamp) = 0;

    /** Start or Stop to record the stream video to local file which named by pucPathFileName. */
    virtual RVS_INT StartLocalRecord(RVS_HANDLE hHandle,  const RVS_UC* pucPathFileName) = 0;


    // stop to record the stream av to local file;
    virtual RVS_INT StopLocalRecord(RVS_HANDLE hHandle) = 0;
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /** Request the live stream JPEG from Streamer. */
    virtual RVS_INT RequestJpeg(RVS_ULL ullStreamCID, 
                            RVS_INT iCamIndex,
                            RVS_INT iStreamId,
                            EN_RVS_JPEG_TYPE enJpegType, 
                            RVS_ULL* pullRequestID) = 0 ;

    /** Request the JPEG file from streamer. */
    virtual RVS_INT RequestJpegFile(RVS_ULL ullStreamCID, 
                                    RVS_UC* pucFileName,
                                    RVS_ULL* pullRequestID) = 0;


    //uiRecordType取值按照 EN_RVS_RECORD_TYPE类型定义；
    virtual RVS_ULL RequestStreamerRecordFiles( RVS_ULL ullStreamerCID, 
                                                RVS_INT iCamIndex, 
                                                RVS_INT iPageIndex, 
                                                RVS_INT iCountPerPage, 
                                                RVS_UC* pucBeginTime, 
                                                RVS_UC* pucEndTime, 
                                                RVS_UI uiRecordType) = 0;        
                     

    //消息通知；
    /*
    //云视频列表回调；
    virtual RVS_VOID OnRequestCloudFilesEx( RVS_UI uiRequestID, 
    RVS_UI uiErrorCode, 
    RVS_UI uiFileNum, 
    RVS_UC* pucStartDay, 
    ST_RVS_CLOUD_FILE_INFO stFileInfo[]) = 0;
    */
    virtual RVS_ULL  RequestCloudRecordFilesEx( RVS_ULL ullStreamerCID,                                               
                                                RVS_INT iCameraId,
                                                RVS_UI  uiNum,
                                                RVS_UI  uiRecordType) = 0;//一次性查询有效期内最近的一天的，uiNum个云视频（消息EN_CBMT_MSG_CLOUD_FILE_LIST_GROUP返回）

    virtual RVS_ULL RemoveRecordFileByName( RVS_ULL ullStreamerCID, 
                                            RVS_UC* pucFileName, 
                                            RVS_UI uiRecordType) = 0;

    virtual RVS_ULL RemoveRecordFilesByTime(RVS_ULL ullStreamerCID, 
                                            RVS_INT iCamIndex, 
                                            RVS_UC* pucBeginTime, 
                                            RVS_UC* pucEndTime, 
                                            RVS_UI uiRecordType) = 0;


    virtual RVS_ULL RequestFileCountPerDay(RVS_ULL ullStreamerCID) = 0;

    /** Request cloud file list only support to get file list day by day. */

    virtual RVS_ULL RequestCloudRecordFiles( RVS_ULL ullStreamerCID,
                                            RVS_INT iCamIndex,
                                            RVS_INT iPageIndex, 
                                            RVS_INT iCountPerPage, 
                                            RVS_UC* pucDay, /** 2015-05-15 */ 
                                            RVS_UI uiRecordType) = 0;

    virtual RVS_ULL RequestCloudFileIcon(RVS_ULL ullStreamerCID,RVS_UI uiFileType, RVS_UC* pucDate, RVS_UC ucVersion,RVS_UC* pucEid) = 0;



    virtual RVS_ULL DeleteCloudFiles(RVS_ULL ullStreamerCid,RVS_UC* pucDate, ST_RVS_CLOUD_FILE_INFO* fileList,RVS_UI uiDelNum) = 0;


    virtual RVS_ULL DeleteCloudFilesOfOneDay(RVS_ULL ullStreamerCid,RVS_UI uiFileType,RVS_UC* pucDate) = 0;


    virtual RVS_INT SetStreamerCloudBegin(RVS_ULL ullStreamerCID) = 0;
/////////////////////////reverse stream related functions//////////////////////////////////////

    /** Start and Stop the reverse stream process */
    virtual RVS_INT SetRevStreamProperty(ST_RVS_MEDIA_AVDESC* pstAudioFormat) = 0; 
                                                         

    virtual RVS_INT WriteRevStreamData( EN_RVS_REV_STREAM_TYPE enStreamType, 
                                        RVS_UC* pucData, 
                                        RVS_UI uiLen, 
                                        RVS_UI uiTimestamp) = 0;


    virtual RVS_HANDLE StartRevStream(RVS_ULL ullStreamerCID) = 0;


    virtual RVS_INT StopRevStream(RVS_HANDLE hRevHandle) = 0;
/////////////////////////////////////////////////////////////////////////////////////////////////
};



#endif
