#ifndef _RVS_VIEWER_TYPE_
#define _RVS_VIEWER_TYPE_
/******************************************************************************
�ļ���          : rvs_define.h
�汾��          : 1.0
����            : NICK
��������        : 20150630
����޸�        : 
��������        : ���ļ���SDK�Ļ����������Ͷ��壬�����ӿڶ���ͷ�ļ���
�����б�        : RvsQueryInterface(RVS_UI uiIID,RVS_VOID** ppClass)  ;

*******************************************************************************/
#ifdef  RVS_VIEWER_EXPORTS
#define  _RVS_API __declspec(dllexport)
#else
#define  _RVS_API __declspec(dllimport)
#endif

#define  RVS_OK                  0
#define  RVS_ERR                 (-1) 
#define  RVS_ERR2                (1) 
#define  RVS_NULL                0
#define  RVS_TRUE                1 
#define  RVS_FALSE               0


typedef  void                    RVS_VOID;
typedef  char                    RVS_CHAR;
typedef  int                     RVS_INT;
typedef  int                     RVS_BOOL;
typedef  unsigned char           RVS_UC;
typedef  unsigned int            RVS_UI;
typedef  unsigned long           RVS_UL;
typedef  unsigned long long      RVS_ULL;
typedef  unsigned short          RVS_US;

typedef  RVS_VOID               *RVS_HANDLE;

#define _OUT

#define RVS_MAX_CHAR            0x7F 
#define RVS_MAX_UC              0xFF 
#define RVS_MAX_UI              0xFFFFFFFF
#define RVS_MAX_US              0xFFFF
#define RVS_MAX_INT             0x7FFFFFFF
#define RVS_MAX_UL              0xFFFFFFFFUL
#define SA_LOG_ID_STR           "SA_VIEWER"
#define RVS_VIEWER_DATA_LEN	    256
#define RVS_VIEWER_DATA_LEN128	128
#define RVS_VIEWER_DATA_LEN64	64
#define RVS_VIEWER_DATA_LEN32	32
#define RVS_USR_NAME_LEN        128
#define RVS_USR_PWD_LEN         64
#define RVS_MAX_CAM_COUNT       (8)
//////////////////////////////////////////////////////////////////////////


#define RVS_RELEASE(x)          if (x) { x->Release(); x = NULL; }

#define RVS_DELETE(x)           if (x) { delete x; x = NULL; }

#define RVS_DELETEA(x)          if (x) { delete [] x; x = NULL; }

#define RVS_FREE(_ptr)   do\
{                           \
    if ((_ptr))              \
    {                       \
        free((_ptr));        \
        (_ptr) = 0;       \
    }       \
}while(0)
///////////////////////ģ��IID����///////////////////////////////
// Interface ID  == IID
typedef enum _tInterfaceID
{
    IID_RVS_VIEWER		        = 0x00,				//IRvsStreamerģ��IID
    IID_RVS_MEDIA			    = 0x01,				//IRvsViewerMediaģ��IID
    IID_RVS_CMD				    = 0x02,				//IRvsViewerCmdģ��IID
    IID_RVS_STREAMINFO          = 0x03,             //IRvsStreamInfoģ��
}T_INTERFACE_ID;
//////////////////////////////////////////////////////////////////////////

typedef enum enum_RVS_LOG_LEVEL
{
    EN_RVS_LOG_DEBUG = 0,
    EN_RVS_LOG_INFO,
    EN_RVS_LOG_WARNNING,
    EN_RVS_LOG_ERROR
}EN_RVS_LOG_LEVEL;

/**************************************************************************************
* Function Name : RvsQueryInterface 

* Descriptions  : �ӿڲ�ѯ�������ṩ��RVSģ����صĽӿڵĻ�÷�ʽ��ͨ�������ģ��IID�����ģ��ʵ����
ÿ�β�ѯ���ӿڵ����ü�����������1�����Խӿڵ��ò�����֮����Ҫ���ýӿڵ�Release()
�ͷŵ�ǰ��ѯ���ã��������������ƽӿڵĴ������ͷţ�

* Input			:  uiIID: ģ�鶨���IID����������Ͳ��� "rvs_define.h"��_tInterfaceID�Ķ��壻

* Output		:  ppClass����ѯ���ĵĽӿ�ʵ��ָ�룻

IRvsViewer���Լ��¼�֪ͨ��IRvsViewerEvent):
�ṩ�˹ۿ���ý�������������ĳ�ʼ�������еȷ�����
����ҵ�����������鿴IRvsViewerEvent�ļ���

IRvsCmd( �¼�֪ͨ��IRvsCmdEvent��:
�ṩ�˹ۿ��˳��õĲ����ص�֪ͨ��
����ҵ�����������鿴IRvsViewer.h�ļ���

IRvsMedia(�¼�֪ͨIRvsMediaEvent��
�ṩ��ý�����ݴ���ͷ��ͽӿڣ�
����ҵ�����������鿴IRvsViewerMedia.h�ļ���

IRvsViewerStreamInfo��
�˽ӿ���Ҫ�ṩ��ý����Ϣ��ѯ��������ؽӿڣ�

* Return		: �ɹ�����RVS_OK, ʧ��ΪRVS_ERR��
****************************************************************************************/ 
_RVS_API int RvsQueryInterface(RVS_UI uiIID,RVS_VOID** ppClass)  ;


_RVS_API void RvsWriteLog(EN_RVS_LOG_LEVEL enLogLevel, char *pFunc, int iLine, const char* pucFormat, ...);

#endif
