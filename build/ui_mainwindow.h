/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *serverBtn;
    QPushButton *refreshBtn;
    QPushButton *helfBtn;
    QPushButton *splitScreenOneBtn;
    QPushButton *splitScreenFourBtn;
    QPushButton *splitScreenSixBtn;
    QPushButton *splitScreenNineBtn;
    QPushButton *splitScreenSixteenBtn;
    QPushButton *saveBtn;
    QPushButton *setParamBtn;
    QFrame *frame_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *subtractBtn;
    QPushButton *addBtn;
    QLabel *label_enlarge;
    QPushButton *adaptBtn;
    QPushButton *leftTurnBtn;
    QPushButton *rightTurnBtn;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_Num;
    QWidget *tab_2;
    QLabel *label_9;
    QSpinBox *spinBox_3;
    QLabel *label_10;
    QSpinBox *spinBox_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *tab_3;
    QLabel *label_8;
    QComboBox *comboBox;
    QPushButton *useBtn;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *catchBtn;
    QPushButton *shuaXinBtn;
    QTreeWidget *treeWidget_server;
    QFrame *frame_3;
    QLabel *label_25;
    QComboBox *comboBox_8;
    QPushButton *OKBtn;
    QPushButton *NOBtn;
    QGroupBox *groupBox_Server;
    QPushButton *AddServerBtn;
    QPushButton *CloseBtn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_CID;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_pwd;
    QLineEdit *lineEdit_CompanyID;
    QLineEdit *lineEdit_CompanyKey;
    QLineEdit *lineEdit_AppId;
    QPushButton *loadServersBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1059, 704);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(55, 100, 125);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 701, 41));
        QPalette palette;
        QBrush brush(QColor(120, 120, 120, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        frame->setPalette(palette);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(120, 120, 120);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        serverBtn = new QPushButton(frame);
        serverBtn->setObjectName(QStringLiteral("serverBtn"));
        serverBtn->setGeometry(QRect(10, 10, 51, 21));
        serverBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        refreshBtn = new QPushButton(frame);
        refreshBtn->setObjectName(QStringLiteral("refreshBtn"));
        refreshBtn->setGeometry(QRect(70, 10, 51, 23));
        refreshBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        helfBtn = new QPushButton(frame);
        helfBtn->setObjectName(QStringLiteral("helfBtn"));
        helfBtn->setGeometry(QRect(130, 10, 51, 23));
        helfBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        splitScreenOneBtn = new QPushButton(frame);
        splitScreenOneBtn->setObjectName(QStringLiteral("splitScreenOneBtn"));
        splitScreenOneBtn->setGeometry(QRect(190, 10, 51, 23));
        splitScreenOneBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        splitScreenFourBtn = new QPushButton(frame);
        splitScreenFourBtn->setObjectName(QStringLiteral("splitScreenFourBtn"));
        splitScreenFourBtn->setGeometry(QRect(250, 10, 51, 23));
        splitScreenFourBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        splitScreenSixBtn = new QPushButton(frame);
        splitScreenSixBtn->setObjectName(QStringLiteral("splitScreenSixBtn"));
        splitScreenSixBtn->setGeometry(QRect(310, 10, 51, 23));
        splitScreenSixBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        splitScreenNineBtn = new QPushButton(frame);
        splitScreenNineBtn->setObjectName(QStringLiteral("splitScreenNineBtn"));
        splitScreenNineBtn->setGeometry(QRect(370, 10, 51, 23));
        splitScreenNineBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        splitScreenSixteenBtn = new QPushButton(frame);
        splitScreenSixteenBtn->setObjectName(QStringLiteral("splitScreenSixteenBtn"));
        splitScreenSixteenBtn->setGeometry(QRect(430, 10, 51, 23));
        splitScreenSixteenBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        saveBtn = new QPushButton(frame);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(490, 10, 81, 23));
        saveBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        setParamBtn = new QPushButton(frame);
        setParamBtn->setObjectName(QStringLiteral("setParamBtn"));
        setParamBtn->setGeometry(QRect(580, 10, 111, 23));
        setParamBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 60, 720, 580));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(740, 10, 301, 261));
        QPalette palette1;
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(55, 100, 125, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        tabWidget->setPalette(palette1);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setUsesScrollButtons(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_1 = new QPushButton(tab);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 20, 31, 31));
        pushButton_1->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/cloudTablePic/build/image/zuoshang.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_1->setIcon(icon);
        pushButton_1->setIconSize(QSize(30, 30));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 20, 31, 31));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/cloudTablePic/build/image/shang.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(30, 30));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 20, 31, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/cloudTablePic/build/image/youshang.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 60, 31, 31));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/cloudTablePic/build/image/zuo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 60, 31, 31));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/cloudTablePic/build/image/you.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(30, 30));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 100, 31, 31));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/cloudTablePic/build/image/zuoxia.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(30, 30));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(70, 100, 31, 31));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/cloudTablePic/build/image/xia.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon6);
        pushButton_7->setIconSize(QSize(30, 30));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(110, 100, 31, 31));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/cloudTablePic/build/image/youxia.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon7);
        pushButton_8->setIconSize(QSize(30, 30));
        subtractBtn = new QPushButton(tab);
        subtractBtn->setObjectName(QStringLiteral("subtractBtn"));
        subtractBtn->setGeometry(QRect(180, 20, 31, 23));
        subtractBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        addBtn = new QPushButton(tab);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(230, 20, 31, 23));
        addBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        label_enlarge = new QLabel(tab);
        label_enlarge->setObjectName(QStringLiteral("label_enlarge"));
        label_enlarge->setGeometry(QRect(210, 21, 21, 21));
        label_enlarge->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/res/enlarge.bmp")));
        adaptBtn = new QPushButton(tab);
        adaptBtn->setObjectName(QStringLiteral("adaptBtn"));
        adaptBtn->setGeometry(QRect(180, 50, 81, 23));
        QPalette palette2;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(0, 55, 100, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        adaptBtn->setPalette(palette2);
        adaptBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        leftTurnBtn = new QPushButton(tab);
        leftTurnBtn->setObjectName(QStringLiteral("leftTurnBtn"));
        leftTurnBtn->setGeometry(QRect(180, 80, 81, 23));
        leftTurnBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        rightTurnBtn = new QPushButton(tab);
        rightTurnBtn->setObjectName(QStringLiteral("rightTurnBtn"));
        rightTurnBtn->setGeometry(QRect(180, 110, 81, 23));
        rightTurnBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 170, 91, 16));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(55, 100, 125);"));
        label->setScaledContents(false);
        horizontalSlider = new QSlider(tab);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(110, 170, 131, 19));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(15);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        label_Num = new QLabel(tab);
        label_Num->setObjectName(QStringLiteral("label_Num"));
        label_Num->setGeometry(QRect(250, 170, 31, 16));
        label_Num->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(55, 100, 125);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 71, 21));
        spinBox_3 = new QSpinBox(tab_2);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(91, 10, 51, 21));
        spinBox_3->setMaximum(255);
        spinBox_3->setValue(128);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 10, 71, 21));
        spinBox_4 = new QSpinBox(tab_2);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(231, 10, 51, 22));
        spinBox_4->setMaximum(255);
        spinBox_4->setValue(128);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 50, 81, 21));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 50, 81, 21));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 90, 54, 21));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(150, 90, 54, 21));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 130, 54, 21));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(150, 130, 54, 21));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 170, 61, 31));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(150, 170, 51, 31));
        spinBox_5 = new QSpinBox(tab_2);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(91, 50, 51, 22));
        spinBox_5->setMaximum(255);
        spinBox_5->setValue(128);
        spinBox_6 = new QSpinBox(tab_2);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setGeometry(QRect(231, 50, 51, 22));
        spinBox_6->setMaximum(255);
        spinBox_6->setValue(128);
        comboBox_4 = new QComboBox(tab_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(70, 90, 71, 22));
        comboBox_5 = new QComboBox(tab_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(210, 90, 69, 22));
        comboBox_6 = new QComboBox(tab_2);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(70, 130, 71, 22));
        comboBox_7 = new QComboBox(tab_2);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(210, 130, 69, 22));
        spinBox_7 = new QSpinBox(tab_2);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setGeometry(QRect(70, 170, 71, 22));
        spinBox_7->setMaximum(1000);
        spinBox_7->setValue(10);
        spinBox_8 = new QSpinBox(tab_2);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setGeometry(QRect(210, 170, 71, 22));
        spinBox_8->setMaximum(1000);
        spinBox_8->setValue(1000);
        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 210, 101, 23));
        pushButton_9->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(160, 210, 111, 23));
        pushButton_10->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 180, 161, 21));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 10, 69, 18));
        useBtn = new QPushButton(tab_3);
        useBtn->setObjectName(QStringLiteral("useBtn"));
        useBtn->setGeometry(QRect(20, 180, 91, 23));
        useBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 210, 91, 23));
        pushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        comboBox_2 = new QComboBox(tab_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(130, 40, 69, 18));
        comboBox_3 = new QComboBox(tab_3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(130, 70, 69, 18));
        horizontalSlider_2 = new QSlider(tab_3);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(130, 100, 71, 16));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(6);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TicksBelow);
        spinBox = new QSpinBox(tab_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(130, 120, 69, 22));
        spinBox->setValue(15);
        spinBox_2 = new QSpinBox(tab_3);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(130, 150, 69, 22));
        spinBox_2->setValue(75);
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 10, 86, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setLayoutDirection(Qt::RightToLeft);
        label_6->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(label_7);

        tabWidget->addTab(tab_3, QString());
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(740, 280, 291, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(181, 20));

        horizontalLayout->addWidget(lineEdit);

        catchBtn = new QPushButton(layoutWidget1);
        catchBtn->setObjectName(QStringLiteral("catchBtn"));
        catchBtn->setMaximumSize(QSize(51, 23));
        catchBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));

        horizontalLayout->addWidget(catchBtn);

        shuaXinBtn = new QPushButton(layoutWidget1);
        shuaXinBtn->setObjectName(QStringLiteral("shuaXinBtn"));
        shuaXinBtn->setMaximumSize(QSize(51, 23));
        shuaXinBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 55, 100); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));

        horizontalLayout->addWidget(shuaXinBtn);

        treeWidget_server = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_server->setHeaderItem(__qtreewidgetitem);
        treeWidget_server->setObjectName(QStringLiteral("treeWidget_server"));
        treeWidget_server->setGeometry(QRect(740, 330, 311, 311));
        treeWidget_server->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(660, 330, 91, 101));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(150, 100, 100);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_25 = new QLabel(frame_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 10, 41, 31));
        comboBox_8 = new QComboBox(frame_3);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(10, 40, 69, 22));
        OKBtn = new QPushButton(frame_3);
        OKBtn->setObjectName(QStringLiteral("OKBtn"));
        OKBtn->setGeometry(QRect(50, 70, 31, 23));
        NOBtn = new QPushButton(frame_3);
        NOBtn->setObjectName(QStringLiteral("NOBtn"));
        NOBtn->setGeometry(QRect(10, 70, 31, 23));
        groupBox_Server = new QGroupBox(centralWidget);
        groupBox_Server->setObjectName(QStringLiteral("groupBox_Server"));
        groupBox_Server->setGeometry(QRect(130, 140, 461, 371));
        groupBox_Server->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(21, 46, 85);\n"
""));
        AddServerBtn = new QPushButton(groupBox_Server);
        AddServerBtn->setObjectName(QStringLiteral("AddServerBtn"));
        AddServerBtn->setGeometry(QRect(340, 320, 75, 23));
        AddServerBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(10, 40, 60); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        CloseBtn = new QPushButton(groupBox_Server);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(280, 320, 51, 23));
        CloseBtn->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(10, 40, 60); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }"));
        layoutWidget2 = new QWidget(groupBox_Server);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 60, 401, 241));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_2->addWidget(label_19);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_2->addWidget(label_20);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_2->addWidget(label_21);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_2->addWidget(label_22);

        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_2->addWidget(label_23);

        label_24 = new QLabel(layoutWidget2);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_2->addWidget(label_24);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_CID = new QLineEdit(layoutWidget2);
        lineEdit_CID->setObjectName(QStringLiteral("lineEdit_CID"));

        verticalLayout_3->addWidget(lineEdit_CID);

        lineEdit_UserName = new QLineEdit(layoutWidget2);
        lineEdit_UserName->setObjectName(QStringLiteral("lineEdit_UserName"));

        verticalLayout_3->addWidget(lineEdit_UserName);

        lineEdit_pwd = new QLineEdit(layoutWidget2);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));

        verticalLayout_3->addWidget(lineEdit_pwd);

        lineEdit_CompanyID = new QLineEdit(layoutWidget2);
        lineEdit_CompanyID->setObjectName(QStringLiteral("lineEdit_CompanyID"));

        verticalLayout_3->addWidget(lineEdit_CompanyID);

        lineEdit_CompanyKey = new QLineEdit(layoutWidget2);
        lineEdit_CompanyKey->setObjectName(QStringLiteral("lineEdit_CompanyKey"));

        verticalLayout_3->addWidget(lineEdit_CompanyKey);

        lineEdit_AppId = new QLineEdit(layoutWidget2);
        lineEdit_AppId->setObjectName(QStringLiteral("lineEdit_AppId"));

        verticalLayout_3->addWidget(lineEdit_AppId);


        horizontalLayout_2->addLayout(verticalLayout_3);

        loadServersBtn = new QPushButton(groupBox_Server);
        loadServersBtn->setObjectName(QStringLiteral("loadServersBtn"));
        loadServersBtn->setGeometry(QRect(30, 320, 101, 23));
        loadServersBtn->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(10, 40, 60); border-radius: 3px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(0, 0, 0); }\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1059, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        serverBtn->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", 0));
        refreshBtn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0));
        helfBtn->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
        splitScreenOneBtn->setText(QApplication::translate("MainWindow", "1\345\210\206\345\261\217", 0));
        splitScreenFourBtn->setText(QApplication::translate("MainWindow", "4\345\210\206\345\261\217", 0));
        splitScreenSixBtn->setText(QApplication::translate("MainWindow", "6\345\210\206\345\261\217", 0));
        splitScreenNineBtn->setText(QApplication::translate("MainWindow", "9\345\210\206\345\261\217", 0));
        splitScreenSixteenBtn->setText(QApplication::translate("MainWindow", "16\345\210\206\345\261\217", 0));
        saveBtn->setText(QApplication::translate("MainWindow", "\345\275\225\345\203\217\344\277\235\345\255\230\347\233\256\345\275\225", 0));
        setParamBtn->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\346\222\255\346\224\276\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        subtractBtn->setText(QApplication::translate("MainWindow", "-", 0));
        addBtn->setText(QApplication::translate("MainWindow", "+", 0));
        label_enlarge->setText(QString());
        adaptBtn->setText(QApplication::translate("MainWindow", "\351\200\202\345\272\224\347\224\273\351\235\242", 0));
        leftTurnBtn->setText(QApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\25490\345\272\246", 0));
        rightTurnBtn->setText(QApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\25490\345\272\246", 0));
        label->setText(QApplication::translate("MainWindow", "\344\272\221\345\217\260\351\200\237\345\272\246\357\274\2101~15\357\274\211", 0));
        label_Num->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\272\221\345\217\260\346\216\247\345\210\266", 0));
        label_9->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246(0-255)", 0));
        label_10->setText(QApplication::translate("MainWindow", "\350\211\262\350\260\203(0-255)", 0));
        label_11->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246(0-255)", 0));
        label_12->setText(QApplication::translate("MainWindow", "\351\245\261\345\222\214\345\272\246(0-255)", 0));
        label_13->setText(QApplication::translate("MainWindow", "\346\233\235\345\205\211\345\217\202\346\225\260", 0));
        label_14->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\345\277\253\351\227\250", 0));
        label_15->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\277\253\351\227\250", 0));
        label_16->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\345\277\253\351\227\250", 0));
        label_17->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\345\242\236\347\233\212\n"
"(0-1000)", 0));
        label_18->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\242\236\347\233\212\n"
"(0-1000)", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\211\213\345\212\250\346\250\241\345\274\217", 0)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1/25", 0)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1/1", 0)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1/100000", 0)
        );
        pushButton_9->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\210\266", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "\345\272\224    \347\224\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\247\206\351\242\221\351\207\207\351\233\206\345\217\202\346\225\260", 0));
        label_8->setText(QApplication::translate("MainWindow", "(\350\256\276\347\275\256\346\210\220\345\212\237\345\220\216\357\274\214\351\207\215\345\220\257\350\256\276\345\244\207\347\224\237\346\225\210)", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "H264", 0)
        );
        useBtn->setText(QApplication::translate("MainWindow", "\345\272\224   \347\224\250", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\351\207\215\345\220\257\350\256\276\345\244\207", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CBR", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "352x288", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "\347\274\226\347\240\201\345\231\250 ", 0));
        label_3->setText(QApplication::translate("MainWindow", "\347\240\201\347\216\207\346\216\247\345\210\266\347\261\273\345\236\213", 0));
        label_4->setText(QApplication::translate("MainWindow", "\347\274\226\347\240\201\345\214\272\345\237\237", 0));
        label_5->setText(QApplication::translate("MainWindow", "\347\274\226\347\240\201\350\264\250\351\207\217(1~6)", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\270\247\347\216\207", 0));
        label_7->setText(QApplication::translate("MainWindow", "\345\205\263\351\224\256\345\270\247\351\227\264\351\232\224(\345\270\247)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\247\206\351\242\221\347\274\226\347\240\201\345\217\202\346\225\260", 0));
        catchBtn->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", 0));
        shuaXinBtn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0));
        label_25->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242\345\210\260", 0));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 0", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 1", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 2", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 3", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 4", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 5", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 6", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 7", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 8", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 9", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 10", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 11", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 12", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 13", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 14", 0)
         << QApplication::translate("MainWindow", "\351\242\221\345\271\225 15", 0)
        );
        OKBtn->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", 0));
        NOBtn->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", 0));
        groupBox_Server->setTitle(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\234\215\345\212\241\345\231\250", 0));
        AddServerBtn->setText(QApplication::translate("MainWindow", "\346\267\273 \345\212\240", 0));
        CloseBtn->setText(QApplication::translate("MainWindow", "\345\217\226 \346\266\210", 0));
        label_19->setText(QApplication::translate("MainWindow", "CID\357\274\232", 0));
        label_20->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_21->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", 0));
        label_22->setText(QApplication::translate("MainWindow", "CompanyID\357\274\232", 0));
        label_23->setText(QApplication::translate("MainWindow", "CompanyKey\357\274\232", 0));
        label_24->setText(QApplication::translate("MainWindow", "AppID\357\274\232", 0));
        loadServersBtn->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\351\273\230\350\256\244\346\234\215\345\212\241\345\231\250", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
