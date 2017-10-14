#ifndef IRVSVIEWER_H
#define IRVSVIEWER_H

#include <QObject>
#include <time.h>
#include <QTimer>

#include"rvs_define.h"
#include"rvs_viewer_api.h"
#include"IRvsViewer.h"
#include"IRvsViewerCmd.h"
#include"IRvsViewerMedia.h"
#include"IRvsViewerStreamInfo.h"
#include"rvs_viewer_event_impl.h"
#include<QString>
#include<QImage>
#include<QThread>

using namespace std;
class QIRvsViewer : public QObject
{
    Q_OBJECT
public:
    explicit QIRvsViewer(QObject *parent = 0);

    void PlayYUV420(unsigned char* yPixels,unsigned char* uPixels,unsigned char* vPixels);

    void initIRvsViewer();
    void connectIRvsViewer();
    void playIRvsViewer();
    bool isPlaying;

    QString cId , userName , pWd, pucCompanyID,pucCompanyKey,pucAppID;

    CViewerEventImpl    *m_pIViewerEventImpl;
    IRvsViewer          *m_pIRvsViewer;
    IRvsViewerMedia     *m_pIRvsMedia;
    RVS_HANDLE          m_hPlayid;
    uchar               *m_pixelsY;
    uchar               *m_pixelsU;
    uchar               *m_pixelsV;
    int                 m_iWidth;
    int                 m_iHeight;

    uchar labelId;
    unsigned char *pRGB24;
    clock_t start, finish;
    int frameCnt;
    float fps;

    QTimer *timer;

signals:
    void sendImage(QImage image,QString cid);

public slots:
    void onTimeOut();
};

#endif // IRVSVIEWER_H
