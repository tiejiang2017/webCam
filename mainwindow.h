#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <opencv2/opencv.hpp>
#include <QLabel>
#include <QTimer>
#include <QImage>
#include <time.h>
#include <QTreeWidgetItem>
#include <QHostInfo>
#include <QFileDialog>
#include <QMessageBox>

#include"rvs_define.h"
#include"rvs_viewer_api.h"
#include"IRvsViewer.h"
#include"IRvsViewerCmd.h"
#include"IRvsViewerMedia.h"
#include"IRvsViewerStreamInfo.h"
#include"rvs_viewer_event_impl.h"

#include "irvsviewer.h"
#include "qlabelcustom.h"

using namespace std;
//using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void showCapture();
//    void PlayYUV420(unsigned char* yPixels,unsigned char* uPixels,unsigned char* vPixels);

    void initTreeView_server();
    QTreeWidgetItem * AddTreeRoot(QString name,QString desc);
    QTreeWidgetItem * AddTreeNode(QTreeWidgetItem *parent,QString name,QString desc);

private slots:
    void onTimeOut();
    void on_splitScreenOneBtn_clicked();

    void on_splitScreenFourBtn_clicked();

    void on_splitScreenSixBtn_clicked();

    void on_splitScreenNineBtn_clicked();

    void on_splitScreenSixteenBtn_clicked();

    void onServerBtnConnect();
    void onRefreshBtnPlay();



    void on_CloseBtn_clicked();

    void on_AddServerBtn_clicked();

    void recvImage(QImage img,QString cId);

    void on_loadServersBtn_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void recvMouse(int labelID , QPoint p);

    void on_OKBtn_clicked();

    void on_NOBtn_clicked();

private:
    Ui::MainWindow *ui;
//    QLabel *label_0,*label_1,*label_2,*label_3,*label_4,*label_5,*label_6,*label_7,*label_8,*label_9,*label_10,*label_11,*label_12,*label_13,*label_14,*label_15;
    QLabelCustom *labelDisp[16];
    int labelID;

    QTimer *timer;

    std::vector<QIRvsViewer*> irvsViewer;

    QTreeWidgetItem *rootItem;
    std::vector<QTreeWidgetItem *>rootNode;

    int                 m_iWidth;
    int                 m_iHeight;
    unsigned char *pRGB24;

    QString disconnectImage;
};

#endif // MAINWINDOW_H
