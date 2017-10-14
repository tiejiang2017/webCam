#ifndef _RVS_VIEWER_TYPE_
#define _RVS_VIEWER_TYPE_
/******************************************************************************
文件名          : rvs_define.h
版本号          : 1.0
作者            : NICK
生成日期        : 20150630
最近修改        : 
功能描述        : 本文件是SDK的基本数据类型定义，基本接口定义头文件；
函数列表        : RvsQueryInterface(RVS_UI uiIID,RVS_VOID** ppClass)  ;

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
///////////////////////模块IID定义///////////////////////////////
// Interface ID  == IID
typedef enum _tInterfaceID
{
    IID_RVS_VIEWER		        = 0x00,				//IRvsStreamer模块IID
    IID_RVS_MEDIA			    = 0x01,				//IRvsViewerMedia模块IID
    IID_RVS_CMD				    = 0x02,				//IRvsViewerCmd模块IID
    IID_RVS_STREAMINFO          = 0x03,             //IRvsStreamInfo模块
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

* Descriptions  : 接口查询方法，提供了RVS模块相关的接口的获得方式；通过定义的模块IID，获得模块实例，
每次查询，接口的引用计数都用增加1，所以接口调用操作完之后，需要调用接口的Release()
释放当前查询引用，这样可以灵活控制接口的创建和释放；

* Input			:  uiIID: 模块定义的IID，具体的类型参照 "rvs_define.h"中_tInterfaceID的定义；

* Output		:  ppClass，查询到的的接口实例指针；

IRvsViewer（以及事件通知类IRvsViewerEvent):
提供了观看端媒体流、能力集的初始化，运行等方法；
具体业务调用流程请查看IRvsViewerEvent文件；

IRvsCmd( 事件通知类IRvsCmdEvent）:
提供了观看端常用的操作回调通知；
具体业务调用流程请查看IRvsViewer.h文件；

IRvsMedia(事件通知IRvsMediaEvent）
提供了媒体数据处理和发送接口；
具体业务调用流程请查看IRvsViewerMedia.h文件；

IRvsViewerStreamInfo：
此接口主要提供了媒体信息查询和设置相关接口；

* Return		: 成功返回RVS_OK, 失败为RVS_ERR；
****************************************************************************************/ 
_RVS_API int RvsQueryInterface(RVS_UI uiIID,RVS_VOID** ppClass)  ;


_RVS_API void RvsWriteLog(EN_RVS_LOG_LEVEL enLogLevel, char *pFunc, int iLine, const char* pucFormat, ...);

#endif
