#include "irvsviewer.h"

void YUV420p_to_RGB24(unsigned char *py,unsigned char *pu,unsigned char *pv, unsigned char *rgb24, int width, int height)
{
    //  int begin = GetTickCount();
    int R,G,B,Y,U,V;
    int x,y;
    int nWidth = width>>1; //色度信号宽度
    for (y=0;y<height;y++)
    {
        for (x=0;x<width;x++)
        {
            Y = *(py + y*width + x);
            U = *(pu + ((y>>1)*nWidth) + (x>>1));
            V = *(pv + ((y>>1)*nWidth) + (x>>1));
            R = Y + 1.402*(V-128);
            G = Y - 0.34414*(U-128) - 0.71414*(V-128);
            B = Y + 1.772*(U-128);

            //防止越界
            if (R>255)R=255;
            if (R<0)R=0;
            if (G>255)G=255;
            if (G<0)G=0;
            if (B>255)B=255;
            if (B<0)B=0;

            *(rgb24 + ((height-y-1)*width + x)*3) = B;
            *(rgb24 + ((height-y-1)*width + x)*3 + 1) = G;
            *(rgb24 + ((height-y-1)*width + x)*3 + 2) = R;
            //    *(rgb24 + (y*width + x)*3) = B;
            //    *(rgb24 + (y*width + x)*3 + 1) = G;
            //    *(rgb24 + (y*width + x)*3 + 2) = R;
        }
    }
}

QIRvsViewer::QIRvsViewer(QObject *parent) : QObject(parent)
{
    m_pixelsY = NULL;
    m_pixelsU = NULL;
    m_pixelsV = NULL;
    pRGB24 = NULL;
    frameCnt=0;
    start=0;
    finish=0;

}

void QIRvsViewer::initIRvsViewer()
{
    RvsQueryInterface(IRvsViewer::IID,(RVS_VOID**)&m_pIRvsViewer);
    if (NULL != m_pIRvsViewer)
    {
        m_pIViewerEventImpl = new CViewerEventImpl;
        m_pIViewerEventImpl->playSuc=false;
        m_pIViewerEventImpl->connectSuc=false;
        m_pIRvsViewer->SetRvsViewerEvent(m_pIViewerEventImpl);
        m_pIRvsViewer->Init((const RVS_UC *)".\\" );
        m_pIRvsViewer->SetLoginInfo((const RVS_UC *)pucCompanyID.toLatin1().data(), (const RVS_UC *)pucCompanyKey.toLatin1().data(), (const RVS_UC*)pucAppID.toLatin1().data(), (const RVS_UC*)cId.toLatin1().data());
        m_pIRvsViewer->Login();
    }
    RvsQueryInterface(IRvsViewerMedia::IID,(RVS_VOID**)&m_pIRvsMedia);
    if (NULL != m_pIRvsMedia)
    {
        m_pIRvsMedia->SetViewerMediaEvent(m_pIViewerEventImpl);
    }
    isPlaying=false;
//    connectIRvsViewer();
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    timer->start(20);


}

void QIRvsViewer::connectIRvsViewer()
{
    if (NULL != m_pIRvsViewer)
    {
        m_pIRvsViewer->ConnectStreamer(cId.toInt(),(const RVS_UC*)userName.toLatin1().data(),(const RVS_UC*)pWd.toLatin1().data());
    }
}
void QIRvsViewer::onTimeOut()
{
    unsigned char* yPixel = NULL ;
    unsigned char* uPixel = NULL;
    unsigned char* vPixel = NULL;
    unsigned int timestamp = 0;

//    static int flag=true;
    if(m_pIViewerEventImpl->connectSuc && isPlaying==false)
    {
        m_pIViewerEventImpl->connectSuc =false;
         QThread::msleep ( 3000 ) ;
        playIRvsViewer();
//        flag=false;
    }

    if(m_pIViewerEventImpl->playSuc)
    {
        isPlaying=true;
        RVS_INT nRet = m_pIRvsMedia->GetVideoYUVData(m_hPlayid,( RVS_UC**)&yPixel,( RVS_UC**)&uPixel,( RVS_UC**)&vPixel,( RVS_UI*)&timestamp);
        if (RVS_ERR != nRet)
        {
           PlayYUV420(yPixel,uPixel,vPixel);
        }
    }
}

void QIRvsViewer::playIRvsViewer()
{
    if (NULL != m_pIRvsMedia)
    {
        printf("try to play\n");
        fflush(NULL);
        m_hPlayid = m_pIRvsMedia->OpenLiveStream(cId.toInt(),0,0,0);
    }

}

void QIRvsViewer::PlayYUV420(unsigned char* yPixels,unsigned char* uPixels,unsigned char* vPixels)
{
    ST_RVS_MEDIA_AVDESC stMediaDesc;

    m_pIRvsMedia->GetStreamDesc(m_hPlayid,&stMediaDesc);

    m_iWidth = stMediaDesc.iWidth;
    m_iHeight = stMediaDesc.iHeight;



    if (m_pixelsY == NULL )
    {

        m_pixelsY = new unsigned char[stMediaDesc.iWidth*stMediaDesc.iHeight];
        m_pixelsU = new unsigned char[stMediaDesc.iWidth*stMediaDesc.iHeight/4];
        m_pixelsV = new unsigned char[stMediaDesc.iWidth*stMediaDesc.iHeight/4];
    }

    memcpy(m_pixelsY,yPixels,m_iWidth*m_iHeight);
    memcpy(m_pixelsU,uPixels,m_iWidth*m_iHeight/4);
    memcpy(m_pixelsV,vPixels,m_iWidth*m_iHeight/4);



    if (pRGB24 == NULL )
    {
        pRGB24=(unsigned char *)malloc(m_iWidth*m_iHeight*3) ;
        printf("pRGB24=(unsigned char *)malloc(m_iWidth*m_iHeight*3) ;");
    }

    YUV420p_to_RGB24(m_pixelsY,m_pixelsU,m_pixelsV, pRGB24, m_iWidth, m_iHeight);

    QImage img(pRGB24,m_iWidth,m_iHeight,m_iWidth*3,QImage::Format_RGB888);
    img = img.mirrored();
//    printf("sendImage\n");
//    fflush(NULL);
    sendImage(img,cId);

}
