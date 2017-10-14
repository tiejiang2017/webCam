#ifndef _IRVS_VIEWER_INC_
#define _IRVS_VIEWER_INC_
/******************************************************************************
文件名          : IRvsViewer.h
版本号          : 1.0
作者            : NICK
生成日期        : 20150630
最近修改        : 
功能描述        : 本文件是观看端主接口定义头文件；
函数列表        : 定义了IRvsViewer接口的基本方法和接口事件通知类IRvsViewerEvent；

*******************************************************************************/

#include "rvs_define.h"


//观看端连接信息系统服务器状态；
typedef enum enum_RVS_LOGIN_STATE
{
    E_RVS_LOGIN_STATE_IDLE         = 0,
    E_RVS_LOGIN_STATE_AUTH         = 1,     //信息系统鉴权成功；
    E_RVS_LOGIN_STATE_CONNECTING   = 2,     //连接中...
    E_RVS_LOGIN_STATE_CONNECTED    = 3,     //连接成功...
    E_RVS_LOGIN_STATE_DISCONNECT   = 4      //连接失败；
}EN_RVS_LOGIN_STATE;


//连接详细子状态；
typedef enum enum_RVS_LOGIN_SUBCODE
{
    E_RVS_LOGIN_ERR_NOERR      = 0,

    E_RVS_LOGIN_ERR_SERVICEGETERR,
    E_RVS_LOGIN_ERR_AUTH_ERRCOMPANYINFO,
    E_RVS_LOGIN_ERR_AUTH_ERRLICENSE,
    E_RVS_LOGIN_ERR_AUTH_TIMEOUT,
    E_RVS_LOGIN_ERR_CONNECT_ERR,
    E_RVS_LOGIN_ERR_REGISTER_ERR,
    E_RVS_LOGIN_ERR_ALLOCATE_ERR,
    E_RVS_LOGIN_ERR_GETSYSCONFIG_ERR,
    E_RVS_LOGIN_ERR_UPLOADINFO_ERR,
    E_RVS_LOGIN_ERR_CONNECT_INTERUPT

}EN_RVS_LOGIN_SUBCODE;


//采集端在线状态；
typedef enum enum_RVS_STREAMER_PRESENCE_STATE
{
    E_RVS_STREAMER_PRESENCE_STATE_INIT = 0,                             //初始状态；
    E_RVS_STREAMER_PRESENCE_STATE_OFFLINE,                              //离线；
    E_RVS_STREAMER_PRESENCE_STATE_ONLINE,                               //在线；
    E_RVS_STREAMER_PRESENCE_STATE_CONNECTED,                            //数据通道创建成功；
    E_RVS_STREAMER_PRESENCE_STATE_ERRUSERPWD                            //用户名或密码错误；
}EN_RVS_STREAMER_PRESENCE_STATE;


//客户端请求通知类型；
typedef enum enum_RVS_USR_REQ_TYPE
{
    E_RVS_USR_REQ_USER_REGISTER = 0,                                 //注册；
    E_RVS_USR_REQ_RETRIEVE_PWD = 1,                                 //找回密码；
    E_RVS_USR_REQ_USER_LOGIN,                                        //登录...
    E_RVS_USR_REQ_USER_LOGOUT,                                       //注销.

    E_RVS_USR_REQ_SYNC_AVS,                                     //同步采集端列表
    E_RVS_USR_REQ_ADD_AVS,                                      //添加采集端
    E_RVS_USR_REQ_UPDATE_AVS,                                   //更新采集端
    E_RVS_USR_REQ_DEL_AVS,                                       //删除采集端；

    E_RVS_USR_REQ_USR_UNBIND_DEV,                                 // 解绑 采集端设备；
    E_RVS_USR_REQ_USR_BIND_DEV,                                 //绑定  采集端设备；

    E_RVS_USR_REQ_USR_TRANSFER_SVR,                             //云服务转移；；

    E_RVS_USR_REQ_SET_USR_INF,                                  //更新个人信息；
    E_RVS_USR_REQ_TEST_EMAIL                                    //发送测试邮件；
}EN_RVS_USR_REQ_TYPE;

typedef enum enum_RVS_USR_POINT_REQ_TYPE
{
    E_RVS_USR_NODEFINE = 0,
    E_RVS_USR_SHARE    = 1, // 分享
    E_RVS_USR_BUY      = 2, // 购买
    E_RVS_USR_NEWUSER  = 3, // 新用户
    E_RVS_USR_SIGN     = 4, // 每日签到
    E_RVS_USR_SUGGEST  = 5, // 推荐新用户
}EN_RVS_USR_POINT_REQ_TYPE;

typedef enum enum_USR_ERRCODE
{

    EN_USR_SUCESS                           = 0,
    EN_USR_PAREMETER_ERR                    = 1,
    EN_USR_DECRESPONSE_ERR                  = 2,

    EN_USR_DATA_UPDATE                      = 50,//登陆的时候，收到这个状态码的时候，就可以获取cid列表信息； 
    EN_USR_AUTHER_ERR                       = 1000, 
    EN_USR_AUTHER_PARMETER_ERR              = 1001,// 参数错误       2001
    EN_USR_AUTHER_VERIFYCODE_ERR            = 1002,// 手机校验码错误 2002
    EN_USR_AUTHER_APPID_PAR_ERR             = 1003,// APPID正确 应该是license 但是发送了 symbol 2003
    EN_USR_AUTHER_APPID_FULL_ERR            = 1004,// 总量授权 ， 使用已经满了  2004
    EN_USR_AUTHER_LICENSE_USED_ERR          = 1005,// license 已经被使用   2005
    EN_USR_AUTHER_USRINF_ERR                = 1007, // 用户的密码错误      2007
    EN_USR_AUTHER_REQST_FREQUENTLY          = 1008, //请求过于频繁         2009
    EN_USR_AUTHER_GETCHECHCODE_ERR          = 1009, // 验证码获取错误       2010
    EN_USR_AUTHER_DEVCOMPANY_ERR            = 1010, // 产品 属于不同的 企业 2011
    EN_USR_AUTHER_DEVAPP_ERR                = 1011, //设备不属于同一个 APP  2012
    EN_USR_AUTHER_DEV_NOTREGST              = 1012, //产品 没有初始化     2013 

    EN_USR_AUTHER_EMAIL_HAVEBIND            = 1105, //邮箱已经被绑定  2105
    EN_USR_AUTHER_EMAIL_HAVEEXIST           = 1106,// 邮箱 已经存在   2106
    EN_USR_AUTHER_MOBILE_HAVEEXIST          = 1107,//  手机号 已经存在 2107
    EN_USR_AUTHER_MOBILE_HAVEBIND           = 1108, // 手机号已  绑定   2108
    EN_USR_AUTHER_VIVERCID_EXIST            = 1109, // 观看端 已经注册   2109
    EN_USR_AUTHER_STREAMCID_EXIST           = 1110, // 采集端 已经注册    2110

    EN_USR_AUTHER_COMPANY_NOTEXIST          = 1200,// 公司 不存在   2201
    EN_USR_AUTHER_APPID_NOTEXIST            = 1201,// app 不存在    2202
    EN_USR_AUTHER_LICENSE_NOTEXIST          = 1202,//鉴权 license 不存在 2203
    EN_USR_AUTHER_VIEWER_NOTEXIST           = 1203,//鉴权 客户端不存在 (没有 CID) 2204
    EN_USR_AUTHER_STREMER_NOTEXIST          = 1204,//鉴权 avs 不存在  2205
    EN_USR_AUTHER_PRODUCT_NOTEXIST          = 1205, //鉴权  产品不存在  2206
    EN_USR_AUTHER_USR_NOTEXIST              = 1206, //鉴权  用户不存在  2207
    EN_USR_AUTHER_SESSION_NOTEXIST          = 1207,// 鉴权 中心 session 不存在 2208
    EN_USR_AUTHER_REGISTQUERYFAILL          = 1208, // 没有 初始化      2014
    EN_USR_AUTHER_UNKNON                    = 1299,

    EN_USR_USR_LISTNODE_FULL                = 1301, // 用户 添加 数目 过多 4002 
    EN_USR_USR_SIGN_AGAIN                   = 1302, // 用户 重复 签到  4003
    EN_USR_USR_AVS_EXISTED                  = 1303, // 用户 系统 avs已经存在 4101
    EN_USR_USR_SESSION_NOTEXIST             = 1304,//   用户 session  不存在 4201
    EN_USR_USR_ACCOUNT_NOTEXIST             = 1305, // 用户 系统 账号 不存在 4202
    EN_USR_USR_LIST_NOTEXIST                = 1306, // avs list 中 不存在    4203
    EN_USR_USR_TASKID_NOTEXIST              = 1307, // 做的 任务 不存在      4204
    EN_USR_USR_VERSION_MUSTUPDATE           = 1308, // 9000 版本需要强制 升级

    EN_USR_INF_AVS_HAVEBINDBYOUTHER         = 1401, // 信息 系统 设备 已经 被其他设备绑定3002 
    EN_USR_INF_AVS_DSTHAVECLOUD             = 1402, // 目标CID 已经购买 云服务 3003
    EN_USR_INF_AVS_SRCONCLOUD               = 1403, // 源 cid 没有 云服务      3004
    EN_USR_INF_AVS_ENFORCE_BIND             = 1412,
    EN_USR_INF_STREAMER_NOTEXIST            = 1413,// 信息系统 采集端不存在   3201
    EN_USR_INF_VIEWER_NOTEXIST              = 1414,//观看端不存在3202

    EN_USR_INF_STREAMER_CAP_NOTEXIST        = 1415,//  能力集合不存在 3203
    EN_USR_INF_VIEWER_CAP_NOTEXIST          = 1416, //                3204

    EN_USR_INF_STREAMER_SUP_NOTEXIST        = 1417,  //支持项 不存在   3205
    EN_USR_INF_VIEWER_SUP_NOTEXIST          = 1418,// 3206

    EN_USR_INF_STREAMER_BUS_NOTEXIST        = 1419,// 业务项 不支持 3207
    EN_USR_INF_VIEWER_BUS_NOTEXIST          = 1420,//3208

    EN_USR_INF_STREAMER_SERVICE_NOTEXIST    = 1421,// 服务 不存在 3209
    EN_USR_INF_VIEWER_SERVICE_NOTEXIST      = 1422,

    EN_USR_SERVER_SYSTERM_ERR               = 1999, // 系统 错误 
    EN_USR_NET_ERR                          = 2000,
    EN_USR_NET_SOCKET_ERR                   = 2001, // socket 创建失败
    EN_USR_NET_TIMEOUT                      = 2002, // connect 上 但是超时 没有回应 
    EN_USR_NET_CONNETERR                    = 2003, // CONNECT 不上 
    EN_USR_NET_RCVDATAERR                   = 2004,

    EN_USR_NET_REGIST_ERR                   = 2011, // 分配 cid 错误 
    EN_USR_NET_ALLOCT_ERR                   = 2012, // cid 与 cpass  不 匹配
    EN_USR_NET_INTERUPT                     = 2013, // sokect 中断 
    EN_USR_NET_LIVETIMEOUT                  = 2014, // 保活 超时

    EN_USR_PEER_OFFLINE                     = 2100, // 远端没有上线 
    EN_USR_PEER_ERRSECRET                   = 2101, // 添加远端的用户名和 密码 错误
    EN_USR_PEER_NORIGHT                     = 2102, // 没有 权限

    EN_USR_CFGERR                           = 3000,
    EN_USR_CFGERR_ENCR                      = 3001,  //加密错误
    EN_USR_CFGERR_SAVE                      = 3002,  //存文件失败
    EN_USR_CFGERR_LOAD                      = 3003,  //加载文件失败
    EN_USR_CFGERR_DECR                      = 3004,  //文件解密失败
    EN_USR_CFGERR_PARSE                     = 3005,  //文件解析失败
    EN_USR_CFGERR_TIMEOUT                   = 3006,  //设置配置超时
    EN_USR_CFGERR_AUTH                      = 3007,  //设置配置权限问题
    EN_USR_CFGERR_SETERR                    = 3008,  //设置配置错误
}EN_USR_ERRCODE;



//----------------------------NTY-----------------------------------------
typedef enum enum_RVS_NTY_TYPE
{
    EN_RVS_NTY_TYPE_AUTH               = 0,    //Cbbs_NyfGetAuthInf
    EN_RVS_NTY_TYPE_ABILITY            = 1,    //Cbbs_GetAbiCamInf  Cbbs_GetAbiMicInf  Cbbs_GetAbiStorageInf  Cbbs_GetAbiWlanInf

    EN_RVS_NTY_TYPE_DEVICEINF          = 2,    //Cbbs_NyfGetDeviceInf
    EN_RVS_NTY_TYPE_SERVICE            = 3,    //Cbbs_NyfGetService
    EN_RVS_NTY_TYPE_SYMBOL             = 4,    //Cbbs_GetSymbol
    EN_RVS_NTY_TYPE_CFGBREADY          = 5,    //
    EN_RVS_NTY_TYPE_CFGBUS             = 6,    //
    EN_RVS_NTY_TYPE_SUPPORT            = 7,     //云服务信息；变更消息；

    EN_RVS_NTY_TYPE_MAX
}EN_RVS_NTY_TYPE;

typedef enum enum_RVS_VIEWER_LANGUAGE{
    E_RVS_VIEWER_LANGUAGE_zh_CN         = 1, // 中文简体
    E_RVS_VIEWER_LANGUAGE_en            = 2, // 英语（美国）
    E_RVS_VIEWER_LANGUAGE_zh_TW         = 3, // 中文繁体
    E_RVS_VIEWER_LANGUAGE_fr            = 4, // 法语
    E_RVS_VIEWER_LANGUAGE_ja            = 5, // 日语
    E_RVS_VIEWER_LANGUAGE_es            = 6, // 西班牙语
    E_RVS_VIEWER_LANGUAGE_ko            = 7, // 韩语
    E_RVS_VIEWER_LANGUAGE_it            = 8, // 意大利语
    E_RVS_VIEWER_LANGUAGE_pt            = 9, // 葡萄牙语
    E_RVS_VIEWER_LANGUAGE_ru            = 10, // 俄罗斯语
    E_RVS_VIEWER_LANGUAGE_th            = 11, // 泰语
    E_RVS_VIEWER_LANGUAGE_de            = 12, // 德语
    E_RVS_VIEWER_LANGUAGE_ar            = 13, // 阿拉伯语
    E_RVS_VIEWER_LANGUAGE_el            = 14 // 希腊文
}EN_RVS_VIEWER_LANGUAGE;


//观看端连接信息系统服务器状态；
typedef enum enum_RVS_VIEWER_REGION
{
    E_RVS_VIEWER_UNKNOW             = 0,     //未知区域；
    E_RVS_VIEWER_CN                 = 1,     //中国大陆；
    E_RVS_VIEWER_OTHER              = 2      //其他区域；
}EN_RVS_VIEWER_REGION;



typedef struct stRVS_USRINF
{
    RVS_UI uiMarried;
    RVS_UI uiSex;
    RVS_UC aucAddress[RVS_VIEWER_DATA_LEN128];
    RVS_UC aucBirthday[RVS_VIEWER_DATA_LEN32];
    RVS_UC aucCity[RVS_VIEWER_DATA_LEN128];
    RVS_UC aucCountry[RVS_VIEWER_DATA_LEN32];
    RVS_UC aucVMid[RVS_VIEWER_DATA_LEN128];
    RVS_UC aucNickName[RVS_VIEWER_DATA_LEN128];
    RVS_UC aucProvice[RVS_VIEWER_DATA_LEN64]; 
}ST_USR_INF;


typedef struct stRVS_CIDINF
{
    RVS_ULL lluCid;
    RVS_BOOL bAddUsrsys;
    RVS_UC  aucUsrName[RVS_USR_NAME_LEN];
    RVS_UC  aucPassWd[RVS_USR_PWD_LEN];
}ST_RVS_USR_CIDINF,*LPST_RVS_USR_CIDINF;



typedef struct st_RVS_SVR_INFO
{
    RVS_INT     iFlag;
    RVS_UI      uiPackageId;
    RVS_UI      uiGetBySel;
    RVS_UC      aucExpireDate[RVS_VIEWER_DATA_LEN64];
    RVS_UC      aucPlatform[RVS_VIEWER_DATA_LEN64];
    RVS_UC      aucMid[RVS_VIEWER_DATA_LEN64];

}ST_RVS_SVR_INFO;

class _RVS_API IRvsViewerEvent
{
public:

    /**************************************************************************************
    * Function Name : OnLoginResult 

    * Descriptions  : 客户端登陆信息系统状态通知；

    * Input			:  N/A

    * Output		:  enLoginState登陆基本状态；uiProgressRate登陆详细状态；enErrCode登陆错误码；

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/ 

    virtual RVS_VOID OnLoginResult(EN_RVS_LOGIN_STATE enLoginState, 
        RVS_INT uiProgressRate, 
        EN_RVS_LOGIN_SUBCODE enErrCode) = 0;



    /**************************************************************************************
    * Function Name : OnStreamerPresenceStatus 

    * Descriptions  : 客户端连接到采集端，采集端在线状态通知；

    * Input			:  N/A

    * Output		:  ullStreamerCID 采集端cid，enPresenceState采集端在线状态；

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID OnStreamerPresenceStatus(RVS_ULL ullStreamerCID, EN_RVS_STREAMER_PRESENCE_STATE enPresenceState) = 0;


    /**************************************************************************************
    * Function Name : OnLanSearchStreamerResult 

    * Descriptions  : 局域网搜索功能，可以查找出同一个路由器下的采集端设备；

    * Input			:  N/A

    * Output		:  ullStreamerCID 采集端cid，pucStreamerName采集端名称；采集端设备类型uiOSType；

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID OnLanSearchStreamerResult( RVS_ULL ullStreamerCID, 
                                                RVS_UC* pucStreamerName, 
                                                RVS_UI uiOSType) = 0 ;


    /**************************************************************************************
    * Function Name : OnUsrForceRemoveCid 

    * Descriptions  : 强制从cid列表中移除某一个cid；

    * Input			:  ullStreamerCID 采集端cid 
    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID OnUsrForceRemoveCid( RVS_ULL ullStreamerCID) = 0 ;



    /**************************************************************************************
    * Function Name : OnUsrForceRemoveCid 

    * Descriptions  : 强制从cid列表中移除某一个cid；

    * Input			:  ullStreamerCID 采集端cid 
    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID OnUsrAddStreamer(RVS_UI uiRequestId,EN_USR_ERRCODE enErrId, const RVS_UC* pucResverd ) = 0 ;


    /**************************************************************************************
    * Function Name : OnUsrRequestResult 

    * Descriptions  : 用户系统请求结果通知；

    * Input			: N/A

    * Output		: 
                        enRequsetType，请求类型，参照EN_RVS_USR_REQ_TYPE定义
                        uiRequestId，请求的id；
                        enErrId，请求结果状态，参照 EN_USR_ERRCODE


    * Return		: N/A
    ****************************************************************************************/
    virtual RVS_VOID OnUsrRequestResult(EN_RVS_USR_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId) = 0;


    /**************************************************************************************
    * Function Name : OnUsrPointRequestResult 

    * Descriptions  : 用户系统积分请求结果通知；

    * Input			: N/A

    * Output		: 
                    enRequsetType，请求类型，参照EN_RVS_USR_POINT_REQ_TYPE定义
                    uiRequestId，请求的id；
                    enErrId，请求结果状态，参照 EN_USR_ERRCODE
                    uiTaskPoint ，任务积分；
                    uiTotalPoint，总积分；

    * Return		: N/A
    ****************************************************************************************/
    virtual RVS_VOID OnUsrPointRequestResult(EN_RVS_USR_POINT_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId,RVS_UI uiTaskPoint,RVS_UI uiTotalPoint) = 0;

    /**************************************************************************************
    * Function Name : OnStreamerConfigChanged 

    * Descriptions  :  采集端配置更新通知；

    * Input			:  N/A

    * Output		: uiErrId错误码请参照 EN_USR_ERRCODE；

    * Return		:  N/A
    ****************************************************************************************/ 
    virtual RVS_VOID OnStreamerConfigChanged(RVS_ULL ullStreamerCID, EN_RVS_NTY_TYPE enRvsNfyType) = 0;
};



class _RVS_API IRvsViewer
{  
public: 
    
    enum { IID = IID_RVS_VIEWER };
    virtual ~IRvsViewer(){}


    /**************************************************************************************
    * Function Name : SetRvsViewerEvent 

    * Descriptions  : 设置接口事件通知实现类的方法；
                      （*如果不调用这个接口，所有的异步操作，都无法收到消息通知；*）

    * Input			:  N/A

    * Output		:  pIEvent，事件通知实现类的指针；

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT SetRvsViewerEvent(IRvsViewerEvent* pIEvent) = 0 ;


    /**************************************************************************************
    * Function Name : Init 

    * Descriptions  : 模块初始化方法；
    * Input			:  pucWorkPath工作目录； bEnableUsrSys 是否使用用户系统，默认为不使用；

    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT Init(const RVS_UC* pucWorkPath,  RVS_BOOL bEnableUsrSys = RVS_FALSE) = 0;

    /**************************************************************************************
    * Function Name : Destroy 

    * Descriptions  : 模块强制销毁方法；
    * Input			:  N/A

    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT Destroy() = 0;




    /**************************************************************************************
    * Function Name : SetLanguage 

    * Descriptions  : 设置客户端语言环境；；
    * Input			: enLanguage语言类型，参照EN_RVS_VIEWER_LANGUAGE定义；

    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT SetLanguage(EN_RVS_VIEWER_LANGUAGE enLanguage) = 0;


    /**************************************************************************************
    * Function Name :  SetLoginInfo 

    * Descriptions  :  客户端设置登陆信息方法；
    * Input			:  pucCompanyID：公司id，
                       ullCompanyKey：公司密钥；
                       pucAppID：产品id；
                       pucLicense：license；

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT SetLoginInfo(   const RVS_UC* pucCompanyID,
                                    const RVS_UC* pucCompanyKey,
                                    const RVS_UC* pucAppID,
                                    const RVS_UC* pucLicense)  = 0;


    /**************************************************************************************
    * Function Name :  Login 

    * Descriptions  :  客户端登陆到信息系统方法；
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT Login()  = 0 ;


    /**************************************************************************************
    * Function Name :  Logout 

    * Descriptions  :  客户端退出时注销；
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT Logout()  = 0 ;

    /**************************************************************************************
    * Function Name :  GetCID 

    * Descriptions  :  获取客户端连接cid；
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_ULL GetCID() = 0;



    /**************************************************************************************
    * Function Name :  ConnectStreamer

    * Descriptions  :  客户端连接采集端（获取配置信息，在线状态，通道状态灯信息）
                      （兼容老版本接口，如果使用用户系统，这个接口可以忽略）

    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT ConnectStreamer(RVS_ULL ullStreamerCID, 
                                    const RVS_UC* pucUserName, 
                                    const RVS_UC* pucPassword) = 0 ;


    /**************************************************************************************
    * Function Name :  DisconnectStreamer 

    * Descriptions  :  客户端断开连接
                      （兼容老版本接口，如果使用用户系统，这个接口可以忽略）

    * Input			:  ullStreamerCID：采集端cid；

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT DisconnectStreamer(RVS_ULL ullStreamerCID) = 0 ;


    /**************************************************************************************
    * Function Name :  SetLocalNetIp 

    * Descriptions  :  设置本机IP地址；
    * Input			:  ptLocalIp，点分十进制IP，断网时设置0.0.0.0，联网后设置真实IP;

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/

    virtual RVS_UI  SetLocalNetIp(RVS_UC *ptLocalIp) = 0 ;

    /**************************************************************************************
    * Function Name :  LANSearchStreamer 

    * Descriptions  :  局域网搜索采集端；
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_INT LANSearchStreamer(RVS_BOOL bStartSearch = RVS_TRUE) = 0 ;



    /**************************************************************************************
    * Function Name :  CheckSameLanNetWork 

    * Descriptions  :  判断采集端是否和观看端在同一个局域网内；
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_BOOL CheckSameLanNetWork(RVS_ULL ullStreamerCid) = 0;
    /**************************************************************************************
    * Function Name :  Release 

    * Descriptions  :  释放模块；
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID Release()= 0;


    /**************************************************************************************
    * Function Name : SetDebugMode 

    * Descriptions  : 是否打开调试模式；；
    * Input			: bOpen，RVS_TURE打开调试模式，否则关闭；

    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID SetDebugMode(RVS_BOOL bOpen)  = 0;



    /**************************************************************************************
    * Function Name : WriteDumpLog 

    * Descriptions  : //sdk写入crash日志信息；
    * Input			: 程序出现crash情况下，调用这个接口，写入剩余的日志信息，方便问题定位                        

    * Output		:  N/A

    * Return		: 成功返回RVS_OK, 失败为RVS_ERR；
    ****************************************************************************************/
    virtual RVS_VOID WriteDumpLog() = 0;


//////////////////////////////////////////////////////////////////////////////////////////////

    /**************************************************************************************
    //用户系统相关接口调用，如果不使用本sdk提供的用户系统，可以忽略如下接口；
    ****************************************************************************************/

/////////////////////////////////////////////////////////////////////////////////////////////

    //
    /**************************************************************************************
    * Function Name : UsrRegister 

    * Descriptions  :  mail 注册和登录；
    * Input			:  aucEmail邮箱地址；aucPasswd密码；                    

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id；
    ****************************************************************************************/
    virtual RVS_UI UsrRegister(const RVS_UC*aucEmail,const RVS_UC*aucPasswd) = 0;

  
    /**************************************************************************************
    * Function Name : UsrRetrievePassword 

    * Descriptions  :  // 邮箱找回密码；
    * Input			:  aucEmail邮箱地址；                     

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id；
    ****************************************************************************************/
    virtual RVS_UI UsrRetrievePassword(const RVS_UC*aucEmail ) = 0;

    
    /**************************************************************************************
    * Function Name : UsrRetrievePassword 

    * Descriptions  :  // 邮箱登陆；
    * Input			:  aucEmail邮箱地址；   ；aucPasswd密码；                   

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id，结果通知OnLoginResult ；
    ****************************************************************************************/
    virtual RVS_UI UsrLogin(const RVS_UC*aucEmail,const RVS_UC*aucPasswd) = 0;

    
    /**************************************************************************************
    * Function Name : UsrLogout 

    * Descriptions  :  // 注销接口；
    * Input			:  N/A                 

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id；
    ****************************************************************************************/
    virtual RVS_UI UsrLogout( ) = 0;


    
    /**************************************************************************************
    * Function Name : UsrSetRememberPwdFlag 

    * Descriptions  :  // 设置记住密码标志；
    * Input			:  uiFlag，1记住密码，0不记住密码；                 

    * Output		:  N/A

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetRememberPwdFlag(RVS_UI uiFlag) = 0;

    

    /**************************************************************************************
    * Function Name : UsrSetAutoLoginFlag 

    * Descriptions  :  // 设置自动登录标志；
    * Input			:  uiFlag，1自动登录，0不自动登录；                 

    * Output		:  N/A

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetAutoLoginFlag(RVS_UI uiFlag) = 0;  


    
    /**************************************************************************************
    * Function Name : UsrGetAccountInf 

    * Descriptions  :  // 获取登陆信息；
    * Input			:  N/A                 

    * Output		:  pstAccount，账号；                 
                       pstPasswd，密码；
                       puiMemPasswdFlag，是否记住密码；
                       puiAutoLoginFlag，是否自动登录；

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetAccountInf(RVS_UC* pstAccount,RVS_UC* pstPasswd  ,RVS_UI *puiMemPasswdFlag,RVS_UI *puiAutoLoginFlag) = 0;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    

    /**************************************************************************************
    * Function Name : UsrAddStreamer 

    * Descriptions  :  //新版本新增用户系统cid列表操作接口；；
    * Input			:  ullStreamerCID，采集端cid，pucUserName 用户名；   ；aucPasswd密码；                   

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id，结果通知OnUsrAddStreamerResult ；
    ****************************************************************************************/
    virtual RVS_UI UsrAddStreamer(RVS_ULL ullStreamerCID, 
                                const RVS_UC* pucUserName, 
                                const RVS_UC* pucPassword) = 0 ;


    
    /**************************************************************************************
    * Function Name : UsrUpdateStreamer 

    * Descriptions  :  //修改用户名密码；
    * Input			:  ullStreamerCID，采集端cid，pucUserName 用户名；   ；aucPasswd密码；                   

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id，结果通知OnUsrAddStreamerResult ；
    ****************************************************************************************/
    virtual RVS_UI UsrUpdateStreamer(RVS_ULL ullStreamerCID, 
                                    const RVS_UC* pucUserName, 
                                    const RVS_UC* pucPassword) = 0 ;
    /**************************************************************************************
    * Function Name : UsrDeleteStreamer 

    * Descriptions  :  //删除cid；
    * Input			:  ullStreamerCID，采集端cid，              

    * Output		:  N/A

    * Return		:  成功返回本次请求的请求id，结果通知OnUsrDeleteStreamerResult ；
    ****************************************************************************************/
    virtual RVS_UI UsrDeleteStreamer(RVS_ULL ullStreamerCID) = 0 ;



    /**************************************************************************************
    * Function Name : UsrSyncStreamerList 

    * Descriptions  :  UI手动同步cid列表；‘；；
    * Input			:                 

    * Output		:  N/A

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSyncStreamerList()  = 0 ;
    
    /**************************************************************************************
    * Function Name : UsrCancelRequest 

    * Descriptions  :   //取消异步操作；；
    * Input			:  ullStreamerCID，采集端cid，              

    * Output		:  N/A

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrCancelRequest(RVS_UI uiReqId) = 0;

    
    /**************************************************************************************
    * Function Name : UsrGetStreamerList 

    * Descriptions  :  //获取cid列表 ，返回实际的cid数目；在收到登陆通知消息码EN_USR_DATA_UPDATE就可以调用获取cid列表
    * Input			:  N/A    

    * Output		:  stUsrCidInfoList列表信息；uiCidCount采集端实际数目；

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetStreamerList(ST_RVS_USR_CIDINF** stUsrCidInfoList,RVS_UI* uiCidCount ) = 0 ;
    


    /**************************************************************************************
    * Function Name : UsrGetStreamerCount 

    * Descriptions  :  获取当前用户登录的会话id
    * Input			:  N/A    

    * Output		:  pucSessionId，当前用户登录的会话id；

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetSessionId(RVS_UC **pucSessionId) = 0;


    /**************************************************************************************
    * Function Name : UsrGetStreamerCount 

    * Descriptions  :  设置老版本登陆后的会话id
    * Input			:  pucSessionId，当前用户登录的会话id；  

    * Output		:  

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetSessionId(const RVS_UC *pucSessionId) = 0;

    /**************************************************************************************
    * Function Name :  UsrBindPeerDevice 

    * Descriptions  :  绑定采集端设备到此用户系统账号；
    * Input			:  ullPeerCid,采集端cid；    

    * Output		:   

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrBindPeerDevice(RVS_ULL  ullPeerCid) = 0;


    /**************************************************************************************
    * Function Name :  UsrUnBindPeerDevice 

    * Descriptions  :  解绑采集端设备 ；
    * Input			:  ullPeerCid,采集端cid；    

    * Output		:   

    * Return		:  成功返回本次请求的请求id，
    ****************************************************************************************/
    virtual RVS_UI UsrUnBindPeerDevice(RVS_ULL  ullPeerCid) = 0;


    /**************************************************************************************
    * Function Name :  UsrGetPeerDeviceBindFlag 

    * Descriptions  :  获取采集端和账号的绑定状态；
    * Input			:  ullPeerCid,采集端cid；    

    * Output		:  puiBindFlag，绑定状态；

    * Return		:  成功返回本次请求的请求id，
    ****************************************************************************************/
    virtual RVS_UI UsrGetPeerDeviceBindFlag(RVS_ULL  ullPeerCid,RVS_BOOL* pbBindFlag,RVS_BOOL* pbBySel,RVS_UC** ppucBindMid) = 0;

    /**************************************************************************************
    * Function Name : UsrGetUsrLeftPoint 

    * Descriptions  :  获取当前用户的剩余积分；
    * Input			:  N/A    

    * Output		:  N/A 

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetUsrLeftPoint( ) = 0;


    /**************************************************************************************
    * Function Name : UsrSignIn 

    * Descriptions  :  签到功能；
    * Input			:  N/A    

    * Output		:  N/A 

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSignIn( ) = 0;


    /**************************************************************************************
    * Function Name : UsrSetUsrInf 

    * Descriptions  :  更新当前用户的个人信息；
    * Input			:  EN_RVS_NTY_TYPE    

    * Output		:  N/A 

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetUsrInf(ST_USR_INF* pInf ) = 0;


    /**************************************************************************************
    * Function Name : UsrGetUsrInf 

    * Descriptions  :  获取当前用户的个人信息；
    * Input			:  N/A    

    * Output		:  EN_RVS_NTY_TYPE 

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetUsrInf(ST_USR_INF* pInf ) = 0;


    /**************************************************************************************
    * Function Name : UsrSendTestEmail 

    * Descriptions  :  发送测试邮件
    * Input			:  pucEmailAddr测试邮件地址；   

    * Output		:  N/A，

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSendTestEmail(RVS_UC *pucEmailAddr) = 0;


    /**************************************************************************************
    * Function Name : UsrSetServiceFlag 

    * Descriptions  : 购买云服务后，界面通知sdk更新数据；
    * Input			:  ullStreamerCid购买的采集端cid；  
                       uiPackageId，套餐id； 
                       iDateOffset，购买后有效期天数偏移量；
                       pucExpireDate，有效期日志；

    * Output		:  N/A，

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetServiceFlag(RVS_ULL ullStreamerCid,RVS_UI uiPackageId,RVS_INT iDateOffset,RVS_UC* pucExpireDate,RVS_UC* pucMid,RVS_UC* pucPlatform) = 0;




    /**************************************************************************************
    * Function Name : UsrGetServiceInfo 

    * Descriptions  : 根据套餐id，获取套餐信息；
    * Input			: ullStreamerCid购买的采集端cid；  
                      uiPackageId，套餐id； 


    * Output		:  
                       ST_RVS_SVR_INFO  套餐信息；

    * Return		:  成功返回RVS_OK，失败RVS_ERR
    ****************************************************************************************/
    virtual RVS_BOOL UsrGetServiceInfo(RVS_ULL ullStreamerCid,RVS_UI uiPackageId,ST_RVS_SVR_INFO* pstServiceInfo) = 0;
    /**************************************************************************************
    * Function Name : UsrTransferBusiness 

    * Descriptions  : 付费服务迁移；；
    * Input			: ullStreamerCidSrc 原来购买的云服务采集端cid；  
                      ullStreamerCidDst，目标采集端cid； 


    * Output		:  

    * Return		:  成功返回请求ID;失败返回0；
    ****************************************************************************************/
    virtual RVS_UI UsrTransferBusiness(RVS_ULL ullStreamerCidSrc,RVS_ULL ullStreamerCidDst) = 0;


    
    /**************************************************************************************
    * Function Name : UsrGetRegion 

    * Descriptions  : 获取当前观看端的区域位置；；
    * Input			: N/A

    * Output		:  

    * Return		:  参考这个的定义：EN_RVS_VIEWER_REGION
    ****************************************************************************************/
    virtual RVS_UI UsrGetRegion( ) = 0;
};



#endif