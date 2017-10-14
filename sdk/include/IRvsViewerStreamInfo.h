#ifndef _RVS_VIEWER_STREAMERINFO_INC
#define _RVS_VIEWER_STREAMERINFO_INC

#include "rvs_define.h"

typedef enum enum_RVS_AUDIO_ENCODETYPE{
    E_RVS_AUDIO_TYPE_AAC               = 1,
    E_RVS_AUDIO_TYPE_G711A             = 2,
    E_RVS_AUDIO_TYPE_G711U             = 3,
    E_RVS_AUDIO_TYPE_PCM16             = 4
}EN_RVS_AUDIO_ENCODETYPE;

/** You can support multi encode type use & */
typedef enum enum_RVS_VIDEO_ENCODETYPE{
    E_RVS_VIDEO_TYPE_H264             = 0x01,
    E_RVS_VIDEO_TYPE_JPEG             = 0x02,
    E_RVS_VIDEO_TYPE_H265             = 0x04
}EN_RVS_VIDEO_ENCODETYPE;

typedef enum enum_RVS_PTZMOVE_MODE{
    EN_RVS_PTZMOVE_MODE_NOMODE        = 0,
    EN_RVS_PTZMOVE_MODE_PCTRL         = 0x01,
    EN_RVS_PTZMOVE_MODE_TCTRL         = 0x02,
    EN_RVS_PTZMOVE_MODE_ZCTRL         = 0x04,
    EN_RVS_PTZMOVE_MODE_XMOVE         = 0x08,
    EN_RVS_PTZMOVE_MODE_YMOVE         = 0x10,
    EN_RVS_PTZMOVE_MODE_ZMOVE         = 0x20
}EN_RVS_PTZMOVE_MODE;

typedef enum enum_RVS_STREAM_MODE{
    EN_RVS_STREAM_MODE_USESINGLE     = 0x00,
    EN_RVS_STREAM_MODE_USEMULTI      = 0x01
}EN_RVS_STREAM_MODE;

typedef enum enum_RVS_STREAMERINFO_UPDATE_TYPE{
    EN_RVS_STREAMERINFO_UPDATE_TYPE_INFO,
	EN_RVS_STREAMERINFO_UPDATE_TYPE_SUPPORTS,
	EN_RVS_STREAMERINFO_UPDATE_TYPE_TIMERECORD,
	EN_RVS_STREAMERINFO_UPDATE_TYPE_MOTION,
	EN_RVS_STREAMERINFO_UPDATE_TYPE_SENSOR
}EN_RVS_STREAMERINFO_UPDATE_TYPE;

typedef enum enum_RVS_STREAMER_DETECT_FLAG{
    EN_RVS_STREAMER_DETECT_FLAG_CLOSE = 0,
	EN_RVS_STREAMER_DETECT_FLAG_OPEN = 1
}EN_RVS_STREAMER_DETECT_FLAG;

typedef enum enum_RVS_STREAMER_INFO_TYPE{
    EN_RVS_STREAMER_UNKNOW_INFO             = 0,
    EN_RVS_STREAMER_BASIC_INFO              = 1,
    EN_RVS_STREAMER_SERVICE_INFO            = 2,
    EN_RVS_STREAMER_TIMED_RECORD_INFO       = 3,
    EN_RVS_STREAMER_MOTION_DETECT_INFO      = 4,
    EN_RVS_STREAMER_MOTION_SENSOR_INFO      = 5
}EN_RVS_STREAMER_INFO_TYPE,*LPEN_RVS_STREAMER_INFO_TYPE;


typedef enum enum_RVS_INTERVAL_LEVEL
{
    EN_RVS_INTERVAL_LEVEL_HIGH = 1,        //HIGH
    EN_RVS_INTERVAL_LEVEL_MEDIUM = 2,      //MEDIUM
    EN_RVS_INTERVAL_LEVEL_LOW = 3,         //LOW
    EN_RVS_INTERVAL_LEVEL_INVALID
}EN_RVS_INTERVAL_LEVEL;


#define  RVS_STREAMER_NAME_LEN                  64
#define  RVS_CAMERA_NAME_LEN                    32
#define  RVS_SENSOR_NAME_LEN                    128
#define  RVS_EMAIL_ADDR_LEN                     64
#define  RVS_VERSION_VAL_LEN                    32


typedef struct stRvsScheduleSetting
{
    RVS_UI      uiSeq;           //定时设置序号；
    RVS_BOOL    bEnable;         //是否开启
    RVS_UI      uiStartPoint;    //开始时间，换算成秒计算；
    RVS_UI      uiEndPoint;      //结束时间，换算成秒；
    RVS_UI      uiWeekFlag;      //周一到周日开启标志位；
}ST_RVS_SCHEDULE_SETTING;

typedef struct stRvsTimeRecordSetting
{
     ST_RVS_SCHEDULE_SETTING  schedule;
     RVS_UI                   uiParam;
}ST_RVS_TIMERECORD_SETTING;

typedef struct stRvsMotionDetectSetting
{
    ST_RVS_SCHEDULE_SETTING    schedule;
    RVS_UI                     uiSensitive;
}ST_RVS_MOTION_DETECT_SETTING;

typedef struct stRvsSensorsDetectSetting
{
    ST_RVS_SCHEDULE_SETTING    schedule;
    RVS_UI                     uiThreshold;
}ST_RVS_SENSORS_DETECT_SETTING;

typedef struct stRVS_STREAMER_MICINFO{
    RVS_UI                        uiSamplerate;
    RVS_UI                        uiChannel;
    RVS_UI                        uiDepth;
    RVS_UI                        uiEncodeType; /** EN_RVS_AUDIO_ENCODETYPE */
}ST_RVS_STREAMER_MICINFO;

typedef struct stRVS_STREAMER_CAMERASTREAMINFO{
    RVS_INT                                 iStreamIndex;
    RVS_INT                                 iFramerate;
    RVS_INT                                 iBitrate;
    RVS_INT                                 iFrameInterval;
    RVS_INT                                 iQuality;
    RVS_INT                                 iWidth;
    RVS_INT                                 iHeight;
    RVS_UI                                  uiEncodeType; /** EN_RVS_VIDEO_ENCODETYPE */
}ST_RVS_STREAMER_CAMERASTREAMINFO;


typedef enum enRVS_VIEWER_DEFINITION{
    EN_RVS_DEFINITION_NONE = 0,
    EN_RVS_DEFINITION_SD_640_480 = 0x01,          //标清
    EN_RVS_DEFINITION_SD_800_600 = 0x02,          //标清
    EN_RVS_DEFINITION_HD_1280_720 = 0x04,          //高清
}EN_RVS_VIEWER_DEFINITION;

typedef struct stRVS_STREAMER_CAMERAINFO{
    RVS_INT                             iCamIndex;
    RVS_UC                              ucCameraName[RVS_CAMERA_NAME_LEN];
    RVS_UI                              uiPTZMoveEnable; /** 0x00 not support; 0x01 P control; 0x02 T control; 0x04 Z control; 0x08 Move X control; 0x10 Move Y control; 0x20 Move Z control*/
    RVS_UI 								uiTorchEnable;
    RVS_UI 								uiRotateEnable;
    RVS_UI                              uiDefinition;//defined in EN_RVS_VIEWER_DEFINITION;
    RVS_UI                              uiStreamType; /** 0x00 One stream can used at one time; 0x01 Multi stream can used at the same time. */
    RVS_INT                             iStreamCount;
    ST_RVS_STREAMER_CAMERASTREAMINFO*   pstCameraStreams;
}ST_RVS_STREAMER_CAMERAINFO;

typedef struct stRVS_STREAMER_SENSORINFO{
    RVS_INT                            iSensorIndex;
    RVS_INT                            iSensorType;
    RVS_UC                             ucSensorName[RVS_SENSOR_NAME_LEN];
    RVS_UI                             uiScheduleCount;
    ST_RVS_SENSORS_DETECT_SETTING*     pstScheduleSettings; 
}ST_RVS_STREAMER_SENSORINFO;

typedef struct stRVS_STREAMER_TIMERECORDINFO{
    RVS_INT                           iCamIndex;
    RVS_INT                           iSetFlag; /** 0.Not Set; 1. Have set; 2. Have close */
    RVS_UI                            uiScheduleCount;
    ST_RVS_TIMERECORD_SETTING*        pstScheduleSettings;
}ST_RVS_STREAMER_TIMERECORDINFO;

typedef struct stRVS_STREAMER_ALARMRECORDINFO{
    RVS_INT                          iCamIndex;
    RVS_UI                           uiScheduleCount;
    ST_RVS_MOTION_DETECT_SETTING*    pstScheduleSettings;
}ST_RVS_STREAMER_ALARMRECORDINFO;

typedef struct stRVS_STREAMER_INFO{
    RVS_INT                         enOSType;
    RVS_UC                          ucOSVersion[RVS_VERSION_VAL_LEN];
    RVS_UC                          ucSDKVersion[RVS_VERSION_VAL_LEN];
    RVS_UC                          ucAppVersion[RVS_VERSION_VAL_LEN];
    RVS_UI                          uiAppId;
    RVS_INT                         iLanguage;
    RVS_BOOL                        bPushFlag;
    RVS_BOOL                        bEmailFlag;
    RVS_BOOL                        bNoticeFlag;
    RVS_INT                         iSetFlag;   /* 0.Not Set; 1. Have set; 2. Have close Close All Detection. */
    RVS_UI 							uiRunMode; /** 0x00 Manual Run; 0x01 Auto Run; 0x02 Background Run; 0x04 Suspend Run; */
    RVS_UI 							uiRecordMode; /** 0x00 No Record; 0x01 SDCard Record; 0x02 Storage Record; */
    RVS_UI                          uiTimeZoneMode; /** 0x00 Not Support set timezone; 0x01 Support. */
    RVS_UI                          uiEchoCancelFlag; /** 0x00 Not support echo cancel, 0x01 Support. */
    RVS_UC                          ucEmailAddr[RVS_EMAIL_ADDR_LEN];
	RVS_UI                          uiDelDays; 
    RVS_INT                         iCamCount;
    RVS_INT                         iMicCount;
    RVS_UC                          ucDeviceName[RVS_STREAMER_NAME_LEN];
    ST_RVS_STREAMER_MICINFO*        pstMicInfos;
    ST_RVS_STREAMER_CAMERAINFO*     pstCameras;
}ST_RVS_STREAMER_INFO;

typedef struct stRVS_STREAMER_SUPPORTSERVICES{
    RVS_UI                 uiSupportBCloud;  /**0x00 NOT support; 0x01 Support */
    RVS_UI                 uiSupportBTimeRecord;
    RVS_UI                 uiSupportBAlarmRecord;
    RVS_UI                 uiSupportBShortRecord;
    RVS_UI                 uiSupportBSnapShort;
    RVS_UI                 uiSupportBRebackTalk;
    RVS_UI                 uiSupportBRealIcon;
    RVS_UI                 uiSupportBWLan; /**0x00 NOT support; 0x01 Support Command setting; 0x02 Support Sound setting; 0x04 Support Broadcast setting; 0x08 Support AP setting; 0x10 Support QRCode setting;  */
    RVS_UI                 uiSupportBSensors;
}ST_RVS_STREAMER_SUPPORTSERVICES;

typedef struct stRVS_STREAMER_SENSORS{
    RVS_UI                       uiSensorCount;
    ST_RVS_STREAMER_SENSORINFO*  pstSensorInfos;
}ST_RVS_STREAMER_SENSORS;


typedef struct stru_RVS_NTY_AUTHINF{
    RVS_ULL llidCid;
    RVS_UI uiOsType;
    RVS_UC *pucSdkVersion;
    RVS_UC *pucAppId;
    RVS_UC *pucUser;
    RVS_UC *pucPwd;
}ST_RVS_NTY_AUTHINF;

typedef struct stru_RVS_NTY_CAMINF{
    RVS_UI uiStreamCount;
    RVS_UI uiStreamType;
    RVS_UI uiYUV420Mode;
    RVS_UI uiptzMoveMode;
    RVS_UI uiTorchMode;
    RVS_UI uiRotateMode;
    RVS_UI uiDefinition;
    RVS_UI *pucCamName;
}ST_RVS_NTY_CAMINF;


typedef struct stru_RVS_NTY_ABICAMINF{
    RVS_UI uiCamCount;
    ST_RVS_NTY_CAMINF stInf[RVS_MAX_CAM_COUNT];
}ST_RVS_NTY_ABICAMINF;

typedef struct stru_RVS_NTY_ABIMICINF{
    RVS_UI uiMicCount;
}ST_RVS_NTY_ABIMICINF;


typedef struct stru_RVS_NTY_ABISTORAGEINF{
    RVS_UI uiRecordMode;
}ST_RVS_NTY_ABISTORAGEINF;

typedef struct stru_RVS_NTY_DEVICEINF
{
    RVS_UI uiLanguage;
    RVS_UC *pucAppVersion;
    RVS_UC *pucOsVersion;
    RVS_UC *pucDeviceName;
    RVS_UC *pucDeviceID;
}ST_RVS_NTY_DEVICEINF;

typedef struct stru_RVS_NTY_SERVICE_CLOUD
{
    RVS_UI uibSupport;
    RVS_UI uiFlag;
}ST_RVS_NTY_SERVICE_CLOUD;

typedef struct stru_RVS_NTY_SERVICE_PUSH
{
    RVS_UI uibSupport;
    RVS_UI uiFlag;
    RVS_UC *pucToken;
}ST_RVS_NTY_SERVICE_PUSH;

typedef struct stru_RVS_NTY_SERVICE_EMAIL
{
    RVS_UI uibSupport;
    RVS_UI uiFlag;
    RVS_UC *pucEmail;
}ST_RVS_NTY_SERVICE_EMAIL;

typedef struct stru_RVS_NTY_SERVICE_MESSAGE
{
    RVS_UI uibSupport;
    RVS_UI uiFlag;
    RVS_UC *pucMobile;
}ST_RVS_NTY_SERVICE_MESSAGE;

typedef struct stru_RVS_NTY_SERVICE
{
    ST_RVS_NTY_SERVICE_CLOUD stCloud;
    ST_RVS_NTY_SERVICE_PUSH stPush;
    ST_RVS_NTY_SERVICE_EMAIL stEmail;
    ST_RVS_NTY_SERVICE_MESSAGE stMessage;
}ST_RVS_NTY_SERVICE;



class _RVS_API IRvsViewerStreamerInfo
{
public:
    enum { IID = IID_RVS_STREAMINFO };
    virtual ~IRvsViewerStreamerInfo(){}

    virtual RVS_VOID Release()= 0;

    virtual RVS_INT GetStreamerInfo(RVS_ULL ullStreamerCID, 
                                    _OUT ST_RVS_STREAMER_INFO** ppstStreamerInfo) = 0;
    virtual RVS_VOID FreeStreamerInfo(ST_RVS_STREAMER_INFO* ppstStreamerInfo) = 0;

    

    virtual RVS_INT  GetStreamerSupportServices(RVS_ULL ullStreamerCID, 
                                               _OUT ST_RVS_STREAMER_SUPPORTSERVICES** ppstStreamerSupportServices) = 0;
    virtual RVS_VOID FreeStreamerSupportServicesStruct(ST_RVS_STREAMER_SUPPORTSERVICES *pstStreamerSupportServices) = 0;

    

    virtual RVS_INT  GetStreamerRecordSchedule(  RVS_ULL ullStreamerCID, RVS_INT iCamIndex, 
                                                _OUT ST_RVS_STREAMER_TIMERECORDINFO** ppstRvsTimeRecordInfo) = 0;
    virtual RVS_VOID FreeStreamerRecordScheduleInfoStruct(ST_RVS_STREAMER_TIMERECORDINFO *pstRvsTimeRecordInfo) = 0;



     

    virtual RVS_INT  GetStreamerMotionSchedule(  RVS_ULL ullStreamerCID, RVS_INT iCamIndex, 
                                                _OUT ST_RVS_STREAMER_ALARMRECORDINFO** ppstRvsAlarmRecordInfo) = 0;
    virtual RVS_VOID FreeStreamerMotionScheduleInfoStruct(ST_RVS_STREAMER_ALARMRECORDINFO* pstRvsAlarmRecordInfo) = 0;


    

    virtual RVS_INT  GetStreamerSensors(RVS_ULL ullStreamerCID, 
                                       _OUT ST_RVS_STREAMER_SENSORS** ppstRvsSensors) = 0;
    virtual RVS_VOID FreeStreamerSensorsInfoStruct(ST_RVS_STREAMER_SENSORS *pstRvsSensors) = 0;

    virtual RVS_INT  SetStreamerName(RVS_ULL ullStreamerCID, 
                                    const RVS_UC* pucStreamerName) = 0;

    virtual RVS_INT  SetStreamerEmailInfo(   RVS_ULL ullStreamerCID, 
                                            RVS_BOOL bEmailEnable, 
                                            const RVS_UC* pucEmailAddr) = 0;
    virtual RVS_INT  SetStreamerPushEnable(  RVS_ULL ullStreamerCID, 
                                            RVS_BOOL bPushEnable) = 0;


    virtual RVS_INT  SetStreamerNoticeEnable(RVS_ULL ullStreamerCID, 
                                            RVS_BOOL bNoticeEnable) = 0;

    virtual RVS_ULL  SetStreamerRecordDelDays(RVS_ULL ullStreamerCID, RVS_INT iDelDays) = 0;
    virtual RVS_ULL  SetStreamerDetectFlag(RVS_ULL ullStreamerCID, RVS_UI iFlag)        = 0; // EN_RVS_STREAMER_DETECT_FLAG
    virtual RVS_INT  SetStreamerTimeReocrdInfo(  RVS_ULL ullStreamerCID, 
                                                RVS_INT iCamIndex, 
                                                ST_RVS_STREAMER_TIMERECORDINFO* pstRvsTimeRecordInfo) = 0;

    virtual RVS_INT  SetStreamerAlarmRecordInfo( RVS_ULL ullStreamerCID, 
                                                RVS_INT iCamIndex, 
                                                ST_RVS_STREAMER_ALARMRECORDINFO* pstRvsAlarmRecordInfo) = 0;



    virtual RVS_INT  SetStreamerOldIPCAlarm(RVS_ULL ullStreamerCID,
        RVS_INT iEmailFlag, 
        const RVS_UC* pucEmailAddr, 
        RVS_INT iPushFlag, 
        RVS_INT iMotionStatus, 
        RVS_INT iMotionSensitivity, 
        RVS_INT iAlarmSet1, 
        RVS_INT iAlarmSet2, 
        RVS_INT iAlarmSet3) = 0;

    virtual RVS_INT  SetStreamerSensorSchedule(  RVS_ULL ullStreamerCID, 
                                                RVS_INT iSensorType, 
                                                RVS_INT iSensorIndex, 
                                                ST_RVS_STREAMER_SENSORINFO* pstRvsSensorInfo) = 0;

//////////////////////////////////////////////////////////////////////////

    virtual RVS_INT  NyfGetAuthInf(RVS_ULL ullStreamerCID,ST_RVS_NTY_AUTHINF *pstInf) = 0 ;
    virtual RVS_INT  NyfGetAbiCamInf(RVS_ULL ullStreamerCID,ST_RVS_NTY_ABICAMINF *pstInf) = 0;
    virtual RVS_INT  NyfGetAbiMicInf(RVS_ULL ullStreamerCID,ST_RVS_NTY_ABIMICINF *pstInf) = 0;
    virtual RVS_INT  NyfGetAbiStorageInf(RVS_ULL ullStreamerCID,ST_RVS_NTY_ABISTORAGEINF *pstInf) = 0;
    virtual RVS_INT  NyfGetDeviceInf(RVS_ULL ullStreamerCID,ST_RVS_NTY_DEVICEINF *pstInf) = 0;
    virtual RVS_INT  NyfGetService(RVS_ULL ullStreamerCID,ST_RVS_NTY_SERVICE *pstInf) = 0;
    
    virtual RVS_BOOL NyfGetCloudSupportInf(RVS_ULL ullStreamerCid,RVS_UI *puiFlag, RVS_UC** ppucExpireData) = 0;

};


#endif
