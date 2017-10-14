#ifndef _IRVS_VIEWER_INC_
#define _IRVS_VIEWER_INC_
/******************************************************************************
�ļ���          : IRvsViewer.h
�汾��          : 1.0
����            : NICK
��������        : 20150630
����޸�        : 
��������        : ���ļ��ǹۿ������ӿڶ���ͷ�ļ���
�����б�        : ������IRvsViewer�ӿڵĻ��������ͽӿ��¼�֪ͨ��IRvsViewerEvent��

*******************************************************************************/

#include "rvs_define.h"


//�ۿ���������Ϣϵͳ������״̬��
typedef enum enum_RVS_LOGIN_STATE
{
    E_RVS_LOGIN_STATE_IDLE         = 0,
    E_RVS_LOGIN_STATE_AUTH         = 1,     //��Ϣϵͳ��Ȩ�ɹ���
    E_RVS_LOGIN_STATE_CONNECTING   = 2,     //������...
    E_RVS_LOGIN_STATE_CONNECTED    = 3,     //���ӳɹ�...
    E_RVS_LOGIN_STATE_DISCONNECT   = 4      //����ʧ�ܣ�
}EN_RVS_LOGIN_STATE;


//������ϸ��״̬��
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


//�ɼ�������״̬��
typedef enum enum_RVS_STREAMER_PRESENCE_STATE
{
    E_RVS_STREAMER_PRESENCE_STATE_INIT = 0,                             //��ʼ״̬��
    E_RVS_STREAMER_PRESENCE_STATE_OFFLINE,                              //���ߣ�
    E_RVS_STREAMER_PRESENCE_STATE_ONLINE,                               //���ߣ�
    E_RVS_STREAMER_PRESENCE_STATE_CONNECTED,                            //����ͨ�������ɹ���
    E_RVS_STREAMER_PRESENCE_STATE_ERRUSERPWD                            //�û������������
}EN_RVS_STREAMER_PRESENCE_STATE;


//�ͻ�������֪ͨ���ͣ�
typedef enum enum_RVS_USR_REQ_TYPE
{
    E_RVS_USR_REQ_USER_REGISTER = 0,                                 //ע�᣻
    E_RVS_USR_REQ_RETRIEVE_PWD = 1,                                 //�һ����룻
    E_RVS_USR_REQ_USER_LOGIN,                                        //��¼...
    E_RVS_USR_REQ_USER_LOGOUT,                                       //ע��.

    E_RVS_USR_REQ_SYNC_AVS,                                     //ͬ���ɼ����б�
    E_RVS_USR_REQ_ADD_AVS,                                      //��Ӳɼ���
    E_RVS_USR_REQ_UPDATE_AVS,                                   //���²ɼ���
    E_RVS_USR_REQ_DEL_AVS,                                       //ɾ���ɼ��ˣ�

    E_RVS_USR_REQ_USR_UNBIND_DEV,                                 // ��� �ɼ����豸��
    E_RVS_USR_REQ_USR_BIND_DEV,                                 //��  �ɼ����豸��

    E_RVS_USR_REQ_USR_TRANSFER_SVR,                             //�Ʒ���ת�ƣ���

    E_RVS_USR_REQ_SET_USR_INF,                                  //���¸�����Ϣ��
    E_RVS_USR_REQ_TEST_EMAIL                                    //���Ͳ����ʼ���
}EN_RVS_USR_REQ_TYPE;

typedef enum enum_RVS_USR_POINT_REQ_TYPE
{
    E_RVS_USR_NODEFINE = 0,
    E_RVS_USR_SHARE    = 1, // ����
    E_RVS_USR_BUY      = 2, // ����
    E_RVS_USR_NEWUSER  = 3, // ���û�
    E_RVS_USR_SIGN     = 4, // ÿ��ǩ��
    E_RVS_USR_SUGGEST  = 5, // �Ƽ����û�
}EN_RVS_USR_POINT_REQ_TYPE;

typedef enum enum_USR_ERRCODE
{

    EN_USR_SUCESS                           = 0,
    EN_USR_PAREMETER_ERR                    = 1,
    EN_USR_DECRESPONSE_ERR                  = 2,

    EN_USR_DATA_UPDATE                      = 50,//��½��ʱ���յ����״̬���ʱ�򣬾Ϳ��Ի�ȡcid�б���Ϣ�� 
    EN_USR_AUTHER_ERR                       = 1000, 
    EN_USR_AUTHER_PARMETER_ERR              = 1001,// ��������       2001
    EN_USR_AUTHER_VERIFYCODE_ERR            = 1002,// �ֻ�У������� 2002
    EN_USR_AUTHER_APPID_PAR_ERR             = 1003,// APPID��ȷ Ӧ����license ���Ƿ����� symbol 2003
    EN_USR_AUTHER_APPID_FULL_ERR            = 1004,// ������Ȩ �� ʹ���Ѿ�����  2004
    EN_USR_AUTHER_LICENSE_USED_ERR          = 1005,// license �Ѿ���ʹ��   2005
    EN_USR_AUTHER_USRINF_ERR                = 1007, // �û����������      2007
    EN_USR_AUTHER_REQST_FREQUENTLY          = 1008, //�������Ƶ��         2009
    EN_USR_AUTHER_GETCHECHCODE_ERR          = 1009, // ��֤���ȡ����       2010
    EN_USR_AUTHER_DEVCOMPANY_ERR            = 1010, // ��Ʒ ���ڲ�ͬ�� ��ҵ 2011
    EN_USR_AUTHER_DEVAPP_ERR                = 1011, //�豸������ͬһ�� APP  2012
    EN_USR_AUTHER_DEV_NOTREGST              = 1012, //��Ʒ û�г�ʼ��     2013 

    EN_USR_AUTHER_EMAIL_HAVEBIND            = 1105, //�����Ѿ�����  2105
    EN_USR_AUTHER_EMAIL_HAVEEXIST           = 1106,// ���� �Ѿ�����   2106
    EN_USR_AUTHER_MOBILE_HAVEEXIST          = 1107,//  �ֻ��� �Ѿ����� 2107
    EN_USR_AUTHER_MOBILE_HAVEBIND           = 1108, // �ֻ�����  ��   2108
    EN_USR_AUTHER_VIVERCID_EXIST            = 1109, // �ۿ��� �Ѿ�ע��   2109
    EN_USR_AUTHER_STREAMCID_EXIST           = 1110, // �ɼ��� �Ѿ�ע��    2110

    EN_USR_AUTHER_COMPANY_NOTEXIST          = 1200,// ��˾ ������   2201
    EN_USR_AUTHER_APPID_NOTEXIST            = 1201,// app ������    2202
    EN_USR_AUTHER_LICENSE_NOTEXIST          = 1202,//��Ȩ license ������ 2203
    EN_USR_AUTHER_VIEWER_NOTEXIST           = 1203,//��Ȩ �ͻ��˲����� (û�� CID) 2204
    EN_USR_AUTHER_STREMER_NOTEXIST          = 1204,//��Ȩ avs ������  2205
    EN_USR_AUTHER_PRODUCT_NOTEXIST          = 1205, //��Ȩ  ��Ʒ������  2206
    EN_USR_AUTHER_USR_NOTEXIST              = 1206, //��Ȩ  �û�������  2207
    EN_USR_AUTHER_SESSION_NOTEXIST          = 1207,// ��Ȩ ���� session ������ 2208
    EN_USR_AUTHER_REGISTQUERYFAILL          = 1208, // û�� ��ʼ��      2014
    EN_USR_AUTHER_UNKNON                    = 1299,

    EN_USR_USR_LISTNODE_FULL                = 1301, // �û� ��� ��Ŀ ���� 4002 
    EN_USR_USR_SIGN_AGAIN                   = 1302, // �û� �ظ� ǩ��  4003
    EN_USR_USR_AVS_EXISTED                  = 1303, // �û� ϵͳ avs�Ѿ����� 4101
    EN_USR_USR_SESSION_NOTEXIST             = 1304,//   �û� session  ������ 4201
    EN_USR_USR_ACCOUNT_NOTEXIST             = 1305, // �û� ϵͳ �˺� ������ 4202
    EN_USR_USR_LIST_NOTEXIST                = 1306, // avs list �� ������    4203
    EN_USR_USR_TASKID_NOTEXIST              = 1307, // ���� ���� ������      4204
    EN_USR_USR_VERSION_MUSTUPDATE           = 1308, // 9000 �汾��Ҫǿ�� ����

    EN_USR_INF_AVS_HAVEBINDBYOUTHER         = 1401, // ��Ϣ ϵͳ �豸 �Ѿ� �������豸��3002 
    EN_USR_INF_AVS_DSTHAVECLOUD             = 1402, // Ŀ��CID �Ѿ����� �Ʒ��� 3003
    EN_USR_INF_AVS_SRCONCLOUD               = 1403, // Դ cid û�� �Ʒ���      3004
    EN_USR_INF_AVS_ENFORCE_BIND             = 1412,
    EN_USR_INF_STREAMER_NOTEXIST            = 1413,// ��Ϣϵͳ �ɼ��˲�����   3201
    EN_USR_INF_VIEWER_NOTEXIST              = 1414,//�ۿ��˲�����3202

    EN_USR_INF_STREAMER_CAP_NOTEXIST        = 1415,//  �������ϲ����� 3203
    EN_USR_INF_VIEWER_CAP_NOTEXIST          = 1416, //                3204

    EN_USR_INF_STREAMER_SUP_NOTEXIST        = 1417,  //֧���� ������   3205
    EN_USR_INF_VIEWER_SUP_NOTEXIST          = 1418,// 3206

    EN_USR_INF_STREAMER_BUS_NOTEXIST        = 1419,// ҵ���� ��֧�� 3207
    EN_USR_INF_VIEWER_BUS_NOTEXIST          = 1420,//3208

    EN_USR_INF_STREAMER_SERVICE_NOTEXIST    = 1421,// ���� ������ 3209
    EN_USR_INF_VIEWER_SERVICE_NOTEXIST      = 1422,

    EN_USR_SERVER_SYSTERM_ERR               = 1999, // ϵͳ ���� 
    EN_USR_NET_ERR                          = 2000,
    EN_USR_NET_SOCKET_ERR                   = 2001, // socket ����ʧ��
    EN_USR_NET_TIMEOUT                      = 2002, // connect �� ���ǳ�ʱ û�л�Ӧ 
    EN_USR_NET_CONNETERR                    = 2003, // CONNECT ���� 
    EN_USR_NET_RCVDATAERR                   = 2004,

    EN_USR_NET_REGIST_ERR                   = 2011, // ���� cid ���� 
    EN_USR_NET_ALLOCT_ERR                   = 2012, // cid �� cpass  �� ƥ��
    EN_USR_NET_INTERUPT                     = 2013, // sokect �ж� 
    EN_USR_NET_LIVETIMEOUT                  = 2014, // ���� ��ʱ

    EN_USR_PEER_OFFLINE                     = 2100, // Զ��û������ 
    EN_USR_PEER_ERRSECRET                   = 2101, // ���Զ�˵��û����� ���� ����
    EN_USR_PEER_NORIGHT                     = 2102, // û�� Ȩ��

    EN_USR_CFGERR                           = 3000,
    EN_USR_CFGERR_ENCR                      = 3001,  //���ܴ���
    EN_USR_CFGERR_SAVE                      = 3002,  //���ļ�ʧ��
    EN_USR_CFGERR_LOAD                      = 3003,  //�����ļ�ʧ��
    EN_USR_CFGERR_DECR                      = 3004,  //�ļ�����ʧ��
    EN_USR_CFGERR_PARSE                     = 3005,  //�ļ�����ʧ��
    EN_USR_CFGERR_TIMEOUT                   = 3006,  //�������ó�ʱ
    EN_USR_CFGERR_AUTH                      = 3007,  //��������Ȩ������
    EN_USR_CFGERR_SETERR                    = 3008,  //�������ô���
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
    EN_RVS_NTY_TYPE_SUPPORT            = 7,     //�Ʒ�����Ϣ�������Ϣ��

    EN_RVS_NTY_TYPE_MAX
}EN_RVS_NTY_TYPE;

typedef enum enum_RVS_VIEWER_LANGUAGE{
    E_RVS_VIEWER_LANGUAGE_zh_CN         = 1, // ���ļ���
    E_RVS_VIEWER_LANGUAGE_en            = 2, // Ӣ�������
    E_RVS_VIEWER_LANGUAGE_zh_TW         = 3, // ���ķ���
    E_RVS_VIEWER_LANGUAGE_fr            = 4, // ����
    E_RVS_VIEWER_LANGUAGE_ja            = 5, // ����
    E_RVS_VIEWER_LANGUAGE_es            = 6, // ��������
    E_RVS_VIEWER_LANGUAGE_ko            = 7, // ����
    E_RVS_VIEWER_LANGUAGE_it            = 8, // �������
    E_RVS_VIEWER_LANGUAGE_pt            = 9, // ��������
    E_RVS_VIEWER_LANGUAGE_ru            = 10, // ����˹��
    E_RVS_VIEWER_LANGUAGE_th            = 11, // ̩��
    E_RVS_VIEWER_LANGUAGE_de            = 12, // ����
    E_RVS_VIEWER_LANGUAGE_ar            = 13, // ��������
    E_RVS_VIEWER_LANGUAGE_el            = 14 // ϣ����
}EN_RVS_VIEWER_LANGUAGE;


//�ۿ���������Ϣϵͳ������״̬��
typedef enum enum_RVS_VIEWER_REGION
{
    E_RVS_VIEWER_UNKNOW             = 0,     //δ֪����
    E_RVS_VIEWER_CN                 = 1,     //�й���½��
    E_RVS_VIEWER_OTHER              = 2      //��������
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

    * Descriptions  : �ͻ��˵�½��Ϣϵͳ״̬֪ͨ��

    * Input			:  N/A

    * Output		:  enLoginState��½����״̬��uiProgressRate��½��ϸ״̬��enErrCode��½�����룻

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/ 

    virtual RVS_VOID OnLoginResult(EN_RVS_LOGIN_STATE enLoginState, 
        RVS_INT uiProgressRate, 
        EN_RVS_LOGIN_SUBCODE enErrCode) = 0;



    /**************************************************************************************
    * Function Name : OnStreamerPresenceStatus 

    * Descriptions  : �ͻ������ӵ��ɼ��ˣ��ɼ�������״̬֪ͨ��

    * Input			:  N/A

    * Output		:  ullStreamerCID �ɼ���cid��enPresenceState�ɼ�������״̬��

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID OnStreamerPresenceStatus(RVS_ULL ullStreamerCID, EN_RVS_STREAMER_PRESENCE_STATE enPresenceState) = 0;


    /**************************************************************************************
    * Function Name : OnLanSearchStreamerResult 

    * Descriptions  : �������������ܣ����Բ��ҳ�ͬһ��·�����µĲɼ����豸��

    * Input			:  N/A

    * Output		:  ullStreamerCID �ɼ���cid��pucStreamerName�ɼ������ƣ��ɼ����豸����uiOSType��

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID OnLanSearchStreamerResult( RVS_ULL ullStreamerCID, 
                                                RVS_UC* pucStreamerName, 
                                                RVS_UI uiOSType) = 0 ;


    /**************************************************************************************
    * Function Name : OnUsrForceRemoveCid 

    * Descriptions  : ǿ�ƴ�cid�б����Ƴ�ĳһ��cid��

    * Input			:  ullStreamerCID �ɼ���cid 
    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID OnUsrForceRemoveCid( RVS_ULL ullStreamerCID) = 0 ;



    /**************************************************************************************
    * Function Name : OnUsrForceRemoveCid 

    * Descriptions  : ǿ�ƴ�cid�б����Ƴ�ĳһ��cid��

    * Input			:  ullStreamerCID �ɼ���cid 
    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID OnUsrAddStreamer(RVS_UI uiRequestId,EN_USR_ERRCODE enErrId, const RVS_UC* pucResverd ) = 0 ;


    /**************************************************************************************
    * Function Name : OnUsrRequestResult 

    * Descriptions  : �û�ϵͳ������֪ͨ��

    * Input			: N/A

    * Output		: 
                        enRequsetType���������ͣ�����EN_RVS_USR_REQ_TYPE����
                        uiRequestId�������id��
                        enErrId��������״̬������ EN_USR_ERRCODE


    * Return		: N/A
    ****************************************************************************************/
    virtual RVS_VOID OnUsrRequestResult(EN_RVS_USR_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId) = 0;


    /**************************************************************************************
    * Function Name : OnUsrPointRequestResult 

    * Descriptions  : �û�ϵͳ����������֪ͨ��

    * Input			: N/A

    * Output		: 
                    enRequsetType���������ͣ�����EN_RVS_USR_POINT_REQ_TYPE����
                    uiRequestId�������id��
                    enErrId��������״̬������ EN_USR_ERRCODE
                    uiTaskPoint ��������֣�
                    uiTotalPoint���ܻ��֣�

    * Return		: N/A
    ****************************************************************************************/
    virtual RVS_VOID OnUsrPointRequestResult(EN_RVS_USR_POINT_REQ_TYPE enRequsetType, RVS_UI uiRequestId, EN_USR_ERRCODE enErrId,RVS_UI uiTaskPoint,RVS_UI uiTotalPoint) = 0;

    /**************************************************************************************
    * Function Name : OnStreamerConfigChanged 

    * Descriptions  :  �ɼ������ø���֪ͨ��

    * Input			:  N/A

    * Output		: uiErrId����������� EN_USR_ERRCODE��

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

    * Descriptions  : ���ýӿ��¼�֪ͨʵ����ķ�����
                      ��*�������������ӿڣ����е��첽���������޷��յ���Ϣ֪ͨ��*��

    * Input			:  N/A

    * Output		:  pIEvent���¼�֪ͨʵ�����ָ�룻

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT SetRvsViewerEvent(IRvsViewerEvent* pIEvent) = 0 ;


    /**************************************************************************************
    * Function Name : Init 

    * Descriptions  : ģ���ʼ��������
    * Input			:  pucWorkPath����Ŀ¼�� bEnableUsrSys �Ƿ�ʹ���û�ϵͳ��Ĭ��Ϊ��ʹ�ã�

    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT Init(const RVS_UC* pucWorkPath,  RVS_BOOL bEnableUsrSys = RVS_FALSE) = 0;

    /**************************************************************************************
    * Function Name : Destroy 

    * Descriptions  : ģ��ǿ�����ٷ�����
    * Input			:  N/A

    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT Destroy() = 0;




    /**************************************************************************************
    * Function Name : SetLanguage 

    * Descriptions  : ���ÿͻ������Ի�������
    * Input			: enLanguage�������ͣ�����EN_RVS_VIEWER_LANGUAGE���壻

    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT SetLanguage(EN_RVS_VIEWER_LANGUAGE enLanguage) = 0;


    /**************************************************************************************
    * Function Name :  SetLoginInfo 

    * Descriptions  :  �ͻ������õ�½��Ϣ������
    * Input			:  pucCompanyID����˾id��
                       ullCompanyKey����˾��Կ��
                       pucAppID����Ʒid��
                       pucLicense��license��

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT SetLoginInfo(   const RVS_UC* pucCompanyID,
                                    const RVS_UC* pucCompanyKey,
                                    const RVS_UC* pucAppID,
                                    const RVS_UC* pucLicense)  = 0;


    /**************************************************************************************
    * Function Name :  Login 

    * Descriptions  :  �ͻ��˵�½����Ϣϵͳ������
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT Login()  = 0 ;


    /**************************************************************************************
    * Function Name :  Logout 

    * Descriptions  :  �ͻ����˳�ʱע����
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT Logout()  = 0 ;

    /**************************************************************************************
    * Function Name :  GetCID 

    * Descriptions  :  ��ȡ�ͻ�������cid��
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_ULL GetCID() = 0;



    /**************************************************************************************
    * Function Name :  ConnectStreamer

    * Descriptions  :  �ͻ������Ӳɼ��ˣ���ȡ������Ϣ������״̬��ͨ��״̬����Ϣ��
                      �������ϰ汾�ӿڣ����ʹ���û�ϵͳ������ӿڿ��Ժ��ԣ�

    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT ConnectStreamer(RVS_ULL ullStreamerCID, 
                                    const RVS_UC* pucUserName, 
                                    const RVS_UC* pucPassword) = 0 ;


    /**************************************************************************************
    * Function Name :  DisconnectStreamer 

    * Descriptions  :  �ͻ��˶Ͽ�����
                      �������ϰ汾�ӿڣ����ʹ���û�ϵͳ������ӿڿ��Ժ��ԣ�

    * Input			:  ullStreamerCID���ɼ���cid��

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT DisconnectStreamer(RVS_ULL ullStreamerCID) = 0 ;


    /**************************************************************************************
    * Function Name :  SetLocalNetIp 

    * Descriptions  :  ���ñ���IP��ַ��
    * Input			:  ptLocalIp�����ʮ����IP������ʱ����0.0.0.0��������������ʵIP;

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/

    virtual RVS_UI  SetLocalNetIp(RVS_UC *ptLocalIp) = 0 ;

    /**************************************************************************************
    * Function Name :  LANSearchStreamer 

    * Descriptions  :  �����������ɼ��ˣ�
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_INT LANSearchStreamer(RVS_BOOL bStartSearch = RVS_TRUE) = 0 ;



    /**************************************************************************************
    * Function Name :  CheckSameLanNetWork 

    * Descriptions  :  �жϲɼ����Ƿ�͹ۿ�����ͬһ���������ڣ�
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_BOOL CheckSameLanNetWork(RVS_ULL ullStreamerCid) = 0;
    /**************************************************************************************
    * Function Name :  Release 

    * Descriptions  :  �ͷ�ģ�飻
    * Input			:  N/A

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID Release()= 0;


    /**************************************************************************************
    * Function Name : SetDebugMode 

    * Descriptions  : �Ƿ�򿪵���ģʽ����
    * Input			: bOpen��RVS_TURE�򿪵���ģʽ������رգ�

    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID SetDebugMode(RVS_BOOL bOpen)  = 0;



    /**************************************************************************************
    * Function Name : WriteDumpLog 

    * Descriptions  : //sdkд��crash��־��Ϣ��
    * Input			: �������crash����£���������ӿڣ�д��ʣ�����־��Ϣ���������ⶨλ                        

    * Output		:  N/A

    * Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
    ****************************************************************************************/
    virtual RVS_VOID WriteDumpLog() = 0;


//////////////////////////////////////////////////////////////////////////////////////////////

    /**************************************************************************************
    //�û�ϵͳ��ؽӿڵ��ã������ʹ�ñ�sdk�ṩ���û�ϵͳ�����Ժ������½ӿڣ�
    ****************************************************************************************/

/////////////////////////////////////////////////////////////////////////////////////////////

    //
    /**************************************************************************************
    * Function Name : UsrRegister 

    * Descriptions  :  mail ע��͵�¼��
    * Input			:  aucEmail�����ַ��aucPasswd���룻                    

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id��
    ****************************************************************************************/
    virtual RVS_UI UsrRegister(const RVS_UC*aucEmail,const RVS_UC*aucPasswd) = 0;

  
    /**************************************************************************************
    * Function Name : UsrRetrievePassword 

    * Descriptions  :  // �����һ����룻
    * Input			:  aucEmail�����ַ��                     

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id��
    ****************************************************************************************/
    virtual RVS_UI UsrRetrievePassword(const RVS_UC*aucEmail ) = 0;

    
    /**************************************************************************************
    * Function Name : UsrRetrievePassword 

    * Descriptions  :  // �����½��
    * Input			:  aucEmail�����ַ��   ��aucPasswd���룻                   

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id�����֪ͨOnLoginResult ��
    ****************************************************************************************/
    virtual RVS_UI UsrLogin(const RVS_UC*aucEmail,const RVS_UC*aucPasswd) = 0;

    
    /**************************************************************************************
    * Function Name : UsrLogout 

    * Descriptions  :  // ע���ӿڣ�
    * Input			:  N/A                 

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id��
    ****************************************************************************************/
    virtual RVS_UI UsrLogout( ) = 0;


    
    /**************************************************************************************
    * Function Name : UsrSetRememberPwdFlag 

    * Descriptions  :  // ���ü�ס�����־��
    * Input			:  uiFlag��1��ס���룬0����ס���룻                 

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetRememberPwdFlag(RVS_UI uiFlag) = 0;

    

    /**************************************************************************************
    * Function Name : UsrSetAutoLoginFlag 

    * Descriptions  :  // �����Զ���¼��־��
    * Input			:  uiFlag��1�Զ���¼��0���Զ���¼��                 

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetAutoLoginFlag(RVS_UI uiFlag) = 0;  


    
    /**************************************************************************************
    * Function Name : UsrGetAccountInf 

    * Descriptions  :  // ��ȡ��½��Ϣ��
    * Input			:  N/A                 

    * Output		:  pstAccount���˺ţ�                 
                       pstPasswd�����룻
                       puiMemPasswdFlag���Ƿ��ס���룻
                       puiAutoLoginFlag���Ƿ��Զ���¼��

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetAccountInf(RVS_UC* pstAccount,RVS_UC* pstPasswd  ,RVS_UI *puiMemPasswdFlag,RVS_UI *puiAutoLoginFlag) = 0;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    

    /**************************************************************************************
    * Function Name : UsrAddStreamer 

    * Descriptions  :  //�°汾�����û�ϵͳcid�б�����ӿڣ���
    * Input			:  ullStreamerCID���ɼ���cid��pucUserName �û�����   ��aucPasswd���룻                   

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id�����֪ͨOnUsrAddStreamerResult ��
    ****************************************************************************************/
    virtual RVS_UI UsrAddStreamer(RVS_ULL ullStreamerCID, 
                                const RVS_UC* pucUserName, 
                                const RVS_UC* pucPassword) = 0 ;


    
    /**************************************************************************************
    * Function Name : UsrUpdateStreamer 

    * Descriptions  :  //�޸��û������룻
    * Input			:  ullStreamerCID���ɼ���cid��pucUserName �û�����   ��aucPasswd���룻                   

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id�����֪ͨOnUsrAddStreamerResult ��
    ****************************************************************************************/
    virtual RVS_UI UsrUpdateStreamer(RVS_ULL ullStreamerCID, 
                                    const RVS_UC* pucUserName, 
                                    const RVS_UC* pucPassword) = 0 ;
    /**************************************************************************************
    * Function Name : UsrDeleteStreamer 

    * Descriptions  :  //ɾ��cid��
    * Input			:  ullStreamerCID���ɼ���cid��              

    * Output		:  N/A

    * Return		:  �ɹ����ر������������id�����֪ͨOnUsrDeleteStreamerResult ��
    ****************************************************************************************/
    virtual RVS_UI UsrDeleteStreamer(RVS_ULL ullStreamerCID) = 0 ;



    /**************************************************************************************
    * Function Name : UsrSyncStreamerList 

    * Descriptions  :  UI�ֶ�ͬ��cid�б�������
    * Input			:                 

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSyncStreamerList()  = 0 ;
    
    /**************************************************************************************
    * Function Name : UsrCancelRequest 

    * Descriptions  :   //ȡ���첽��������
    * Input			:  ullStreamerCID���ɼ���cid��              

    * Output		:  N/A

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrCancelRequest(RVS_UI uiReqId) = 0;

    
    /**************************************************************************************
    * Function Name : UsrGetStreamerList 

    * Descriptions  :  //��ȡcid�б� ������ʵ�ʵ�cid��Ŀ�����յ���½֪ͨ��Ϣ��EN_USR_DATA_UPDATE�Ϳ��Ե��û�ȡcid�б�
    * Input			:  N/A    

    * Output		:  stUsrCidInfoList�б���Ϣ��uiCidCount�ɼ���ʵ����Ŀ��

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetStreamerList(ST_RVS_USR_CIDINF** stUsrCidInfoList,RVS_UI* uiCidCount ) = 0 ;
    


    /**************************************************************************************
    * Function Name : UsrGetStreamerCount 

    * Descriptions  :  ��ȡ��ǰ�û���¼�ĻỰid
    * Input			:  N/A    

    * Output		:  pucSessionId����ǰ�û���¼�ĻỰid��

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetSessionId(RVS_UC **pucSessionId) = 0;


    /**************************************************************************************
    * Function Name : UsrGetStreamerCount 

    * Descriptions  :  �����ϰ汾��½��ĻỰid
    * Input			:  pucSessionId����ǰ�û���¼�ĻỰid��  

    * Output		:  

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetSessionId(const RVS_UC *pucSessionId) = 0;

    /**************************************************************************************
    * Function Name :  UsrBindPeerDevice 

    * Descriptions  :  �󶨲ɼ����豸�����û�ϵͳ�˺ţ�
    * Input			:  ullPeerCid,�ɼ���cid��    

    * Output		:   

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrBindPeerDevice(RVS_ULL  ullPeerCid) = 0;


    /**************************************************************************************
    * Function Name :  UsrUnBindPeerDevice 

    * Descriptions  :  ���ɼ����豸 ��
    * Input			:  ullPeerCid,�ɼ���cid��    

    * Output		:   

    * Return		:  �ɹ����ر������������id��
    ****************************************************************************************/
    virtual RVS_UI UsrUnBindPeerDevice(RVS_ULL  ullPeerCid) = 0;


    /**************************************************************************************
    * Function Name :  UsrGetPeerDeviceBindFlag 

    * Descriptions  :  ��ȡ�ɼ��˺��˺ŵİ�״̬��
    * Input			:  ullPeerCid,�ɼ���cid��    

    * Output		:  puiBindFlag����״̬��

    * Return		:  �ɹ����ر������������id��
    ****************************************************************************************/
    virtual RVS_UI UsrGetPeerDeviceBindFlag(RVS_ULL  ullPeerCid,RVS_BOOL* pbBindFlag,RVS_BOOL* pbBySel,RVS_UC** ppucBindMid) = 0;

    /**************************************************************************************
    * Function Name : UsrGetUsrLeftPoint 

    * Descriptions  :  ��ȡ��ǰ�û���ʣ����֣�
    * Input			:  N/A    

    * Output		:  N/A 

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetUsrLeftPoint( ) = 0;


    /**************************************************************************************
    * Function Name : UsrSignIn 

    * Descriptions  :  ǩ�����ܣ�
    * Input			:  N/A    

    * Output		:  N/A 

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSignIn( ) = 0;


    /**************************************************************************************
    * Function Name : UsrSetUsrInf 

    * Descriptions  :  ���µ�ǰ�û��ĸ�����Ϣ��
    * Input			:  EN_RVS_NTY_TYPE    

    * Output		:  N/A 

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetUsrInf(ST_USR_INF* pInf ) = 0;


    /**************************************************************************************
    * Function Name : UsrGetUsrInf 

    * Descriptions  :  ��ȡ��ǰ�û��ĸ�����Ϣ��
    * Input			:  N/A    

    * Output		:  EN_RVS_NTY_TYPE 

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrGetUsrInf(ST_USR_INF* pInf ) = 0;


    /**************************************************************************************
    * Function Name : UsrSendTestEmail 

    * Descriptions  :  ���Ͳ����ʼ�
    * Input			:  pucEmailAddr�����ʼ���ַ��   

    * Output		:  N/A��

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSendTestEmail(RVS_UC *pucEmailAddr) = 0;


    /**************************************************************************************
    * Function Name : UsrSetServiceFlag 

    * Descriptions  : �����Ʒ���󣬽���֪ͨsdk�������ݣ�
    * Input			:  ullStreamerCid����Ĳɼ���cid��  
                       uiPackageId���ײ�id�� 
                       iDateOffset���������Ч������ƫ������
                       pucExpireDate����Ч����־��

    * Output		:  N/A��

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_UI UsrSetServiceFlag(RVS_ULL ullStreamerCid,RVS_UI uiPackageId,RVS_INT iDateOffset,RVS_UC* pucExpireDate,RVS_UC* pucMid,RVS_UC* pucPlatform) = 0;




    /**************************************************************************************
    * Function Name : UsrGetServiceInfo 

    * Descriptions  : �����ײ�id����ȡ�ײ���Ϣ��
    * Input			: ullStreamerCid����Ĳɼ���cid��  
                      uiPackageId���ײ�id�� 


    * Output		:  
                       ST_RVS_SVR_INFO  �ײ���Ϣ��

    * Return		:  �ɹ�����RVS_OK��ʧ��RVS_ERR
    ****************************************************************************************/
    virtual RVS_BOOL UsrGetServiceInfo(RVS_ULL ullStreamerCid,RVS_UI uiPackageId,ST_RVS_SVR_INFO* pstServiceInfo) = 0;
    /**************************************************************************************
    * Function Name : UsrTransferBusiness 

    * Descriptions  : ���ѷ���Ǩ�ƣ���
    * Input			: ullStreamerCidSrc ԭ��������Ʒ���ɼ���cid��  
                      ullStreamerCidDst��Ŀ��ɼ���cid�� 


    * Output		:  

    * Return		:  �ɹ���������ID;ʧ�ܷ���0��
    ****************************************************************************************/
    virtual RVS_UI UsrTransferBusiness(RVS_ULL ullStreamerCidSrc,RVS_ULL ullStreamerCidDst) = 0;


    
    /**************************************************************************************
    * Function Name : UsrGetRegion 

    * Descriptions  : ��ȡ��ǰ�ۿ��˵�����λ�ã���
    * Input			: N/A

    * Output		:  

    * Return		:  �ο�����Ķ��壺EN_RVS_VIEWER_REGION
    ****************************************************************************************/
    virtual RVS_UI UsrGetRegion( ) = 0;
};



#endif