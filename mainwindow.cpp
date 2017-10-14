#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    irvsViewer.clear();

    disconnectImage = "E:/caoXinHua/netCamApp/MonitoredControlSystem/build/image/camera.jpg";

    initTreeView_server();
    timer = new QTimer;
    setWindowTitle(QString::fromLocal8Bit("C919客户端"));
    ui->label_Num->setText(QString::asprintf("%d",ui->horizontalSlider->value()));

    ui->lineEdit_AppId->setText("31112017061511332201497421439982");
    ui->lineEdit_UserName->setText("sws88888");
    ui->lineEdit_pwd->setText("sws888888sws");
    ui->lineEdit_CompanyID->setText("11122017060920453701496984966283");
    ui->lineEdit_CompanyKey->setText("90a423d242944d93906b36dc4ac3bc87");
    ui->lineEdit_CID->setText("70141245");
    ui->groupBox_Server->hide();
    ui->frame_3->hide();

    connect(ui->serverBtn,SIGNAL(clicked(bool)),this,SLOT(onServerBtnConnect()));
    connect(ui->refreshBtn,SIGNAL(clicked(bool)),this,SLOT(onRefreshBtnPlay()));


    connect(timer,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    timer->start(20);
    for(int i=0;i<16;i++)
    {
        labelDisp[i] = new QLabelCustom(ui->frame_2);
        labelDisp[i]->labelId = i;
        labelDisp[i]->setFrameShape(QFrame::Box);
        if(i==0)
            labelDisp[i]->setGeometry(0,0,720,580);
        else
            labelDisp[i]->setGeometry(0,0,0,0);
        connect(labelDisp[i],SIGNAL(sendMouse(int,QPoint)),this,SLOT(recvMouse(int,QPoint)));
    }


}

MainWindow::~MainWindow()
{
    for(int i=0;i<16;i++)
    {
        labelDisp[i]->deleteLater();
    }

    timer->deleteLater();
    delete ui;
}

void MainWindow::showCapture()
{    

}
QTreeWidgetItem * MainWindow::AddTreeRoot(QString name,QString desc)
{
    QTreeWidgetItem * item=new QTreeWidgetItem(QStringList()<<name<<desc);
    ui->treeWidget_server->addTopLevelItem(item);
    return item;
}

QTreeWidgetItem * MainWindow::AddTreeNode(QTreeWidgetItem *parent,QString name,QString desc)
{
    QTreeWidgetItem * item=new QTreeWidgetItem(QStringList()<<name<<desc);
    parent->addChild(item);
    return item;
}
void MainWindow::initTreeView_server()
{
//    ui->treeView_Server->setHeader();
    QString localHostName = QHostInfo::localHostName();
    QHostInfo info = QHostInfo::fromName(localHostName);
    ui->treeWidget_server->setColumnCount(2);
    ui->treeWidget_server->setColumnWidth(0,200);
    ui->treeWidget_server->setHeaderLabels(QStringList()<<"Name"<<"Description");
    ui->treeWidget_server->setHeaderHidden(true);
    quint32 ip=info.addresses().at(1).toIPv4Address();
    QString ipStr= QString::asprintf("%d.%d.%d.%d",(uchar)((ip>>24)&0xff),(uchar)((ip>>16)&0xff),(uchar)((ip>>8)&0xff),(uchar)((ip)&0xff));
    QString s="C919 ("+ipStr+")";
    rootItem = AddTreeRoot(s,"");

}





void MainWindow::onTimeOut()
{


}

void MainWindow::on_splitScreenOneBtn_clicked()
{
    for(int i=0;i<16;i++)
    {
        if(i==0)
            labelDisp[i]->setGeometry(0,0,720,580);
        else
            labelDisp[i]->setGeometry(0,0,0,0);
    }
}

void MainWindow::on_splitScreenFourBtn_clicked()
{
    printf("on_splitScreenFourBtn_clicked\n");
    for(int i=0;i<16;i++)
    {
        if(i==0)
            labelDisp[i]->setGeometry(10,10,350,280);
        else if(i==1)
            labelDisp[i]->setGeometry(360,10,350,280);
        else if(i==2)
            labelDisp[i]->setGeometry(10,290,350,280);
        else if(i==3)
            labelDisp[i]->setGeometry(360,290,350,280);
        else
            labelDisp[i]->setGeometry(0,0,0,0);
    }

}

void MainWindow::on_splitScreenSixBtn_clicked()
{
    for(int i=0;i<16;i++)
    {
        if(i==0)
            labelDisp[i]->setGeometry(0,10,480,380);
        else if(i==1)
            labelDisp[i]->setGeometry(480,10,240,190);
        else if(i==2)
            labelDisp[i]->setGeometry(480,200,240,190);
        else if(i==3)
            labelDisp[i]->setGeometry(0,390,240,190);
        else if(i==4)
            labelDisp[i]->setGeometry(240,390,240,190);
        else if(i==5)
            labelDisp[i]->setGeometry(480,390,240,190);
        else
            labelDisp[i]->setGeometry(0,0,0,0);
    }

}

void MainWindow::on_splitScreenNineBtn_clicked()
{
    for(int i=0;i<16;i++)
    {
        if(i==0)
            labelDisp[i]->setGeometry(0,10,240,190);
        else if(i==1)
            labelDisp[i]->setGeometry(240,10,240,190);
        else if(i==2)
            labelDisp[i]->setGeometry(480,10,240,190);
        else if(i==3)
            labelDisp[i]->setGeometry(0,200,240,190);
        else if(i==4)
            labelDisp[i]->setGeometry(240,200,240,190);
        else if(i==5)
            labelDisp[i]->setGeometry(480,200,240,190);
        else if(i==6)
            labelDisp[i]->setGeometry(0,390,240,190);
        else if(i==7)
            labelDisp[i]->setGeometry(240,390,240,190);
        else if(i==8)
            labelDisp[i]->setGeometry(480,390,240,190);
        else
            labelDisp[i]->setGeometry(0,0,0,0);
    }
}

void MainWindow::on_splitScreenSixteenBtn_clicked()
{
    labelDisp[0]->setGeometry(0,0,180,145);
    labelDisp[1]->setGeometry(180,0,180,145);
    labelDisp[2]->setGeometry(360,0,180,145);
    labelDisp[3]->setGeometry(540,0,180,145);
    labelDisp[4]->setGeometry(0,145,180,145);
    labelDisp[5]->setGeometry(180,145,180,145);
    labelDisp[6]->setGeometry(360,145,180,145);
    labelDisp[7]->setGeometry(540,145,180,145);
    labelDisp[8]->setGeometry(0,290,180,145);
    labelDisp[9]->setGeometry(180,290,180,145);
    labelDisp[10]->setGeometry(360,290,180,145);
    labelDisp[11]->setGeometry(540,290,180,145);
    labelDisp[12]->setGeometry(0,435,180,145);
    labelDisp[13]->setGeometry(180,435,180,145);
    labelDisp[14]->setGeometry(360,435,180,145);
    labelDisp[15]->setGeometry(540,435,180,145);
}

void MainWindow::onServerBtnConnect()
{
//    irvsViewer.connectIRvsViewer();
    ui->groupBox_Server->show();
    ui->lineEdit_AppId->setText("31112017061511332201497421439982");
    ui->lineEdit_UserName->setText("sws88888");
    ui->lineEdit_pwd->setText("sws888888sws");
    ui->lineEdit_CompanyID->setText("11122017060920453701496984966283");
    ui->lineEdit_CompanyKey->setText("90a423d242944d93906b36dc4ac3bc87");
    ui->lineEdit_CID->setText("70141245");

}

void MainWindow::onRefreshBtnPlay()
{

}



void MainWindow::on_CloseBtn_clicked()
{
    ui->lineEdit_AppId->setText("");
    ui->lineEdit_UserName->setText("");
    ui->lineEdit_pwd->setText("");
    ui->lineEdit_CompanyID->setText("");
    ui->lineEdit_CompanyKey->setText("");
    ui->lineEdit_CID->setText("");
    ui->groupBox_Server->hide();
}

void MainWindow::on_AddServerBtn_clicked()
{
    QIRvsViewer *rvsViewer = new QIRvsViewer();
    QString cid , usename , pwd , CompanyID ,CompanyKey , appID;
    QTreeWidgetItem *Item,*Item1,*Item2,*Item3,*Item5;

    cid = ui->lineEdit_CID->text();
    usename = ui->lineEdit_UserName->text();
    pwd = ui->lineEdit_pwd->text();
    CompanyID = ui->lineEdit_CompanyID->text();
    CompanyKey = ui->lineEdit_CompanyKey->text();
    appID = ui->lineEdit_AppId->text();


    rvsViewer->cId = cid;
    rvsViewer->userName = usename;
    rvsViewer->pWd = pwd;
    rvsViewer->pucAppID = appID;
    rvsViewer->pucCompanyID= CompanyID;
    rvsViewer->pucCompanyKey= CompanyKey;

    bool zhanYong=false;
    for(int id=0;id<16;id++)
    {
        zhanYong=false;
        for(int i=0;i<irvsViewer.size();i++)
        {
            if(irvsViewer[i]->labelId == id)
            {
                zhanYong=true;
                break;
            }
        }
        if(!zhanYong)
        {
            rvsViewer->labelId = id;
            break;
        }
    }


//    rvsViewer->labelId = irvsViewer.size();///////////////////////////////////////////////

    for(int i=0;i<irvsViewer.size();i++)
    {
        if(irvsViewer[i]->cId != cid)
        {
            QFile file("E:/caoXinHua/netCamApp/MonitoredControlSystem/build/servers.dat");
            if(!file.open(QIODevice::ReadWrite | QIODevice::Append))
            {
                qDebug()<<"Can't open the file!"<<endl;
            }
            file.write((CompanyID+","+CompanyKey+","+appID+","+cid+","+usename+","+pwd+"\r\n").toLatin1().data());
            file.close();
        }
    }


    rvsViewer->initIRvsViewer();
    connect(rvsViewer,SIGNAL(sendImage(QImage,QString)),this,SLOT(recvImage(QImage,QString)));

    irvsViewer.push_back(rvsViewer);

    Item = AddTreeNode(rootItem,rvsViewer->cId,"cId");
    Item1 = AddTreeNode(Item,rvsViewer->userName,"userName");
    Item2 = AddTreeNode(Item,rvsViewer->pucAppID,"pucAppID");
    Item3 = AddTreeNode(Item,rvsViewer->pucCompanyID,"pucCompanyID");
    Item5 = AddTreeNode(Item,rvsViewer->pucCompanyKey,"pucCompanyKey");
    rootNode.push_back(Item);

//    QTreeWidgetItem *Item = AddTreeNode(rootItem,rvsViewer->cId,"cId");
//    QTreeWidgetItem *Item1 = AddTreeNode(Item,rvsViewer->userName,"userName");
//    QTreeWidgetItem *Item2 = AddTreeNode(Item,rvsViewer->pucAppID,"pucAppID");
//    QTreeWidgetItem *Item3 = AddTreeNode(Item,rvsViewer->pucCompanyID,"pucCompanyID");
//    QTreeWidgetItem *Item5 = AddTreeNode(Item,rvsViewer->pucCompanyKey,"pucCompanyKey");
//    rootNode.push_back(Item);
    ui->groupBox_Server->setHidden(true);

}

void MainWindow::recvImage(QImage img, QString cId)
{
    for(int i=0;i<irvsViewer.size();i++)
    {
        if(cId == irvsViewer[i]->cId)
        {
            QImage newImg = img.scaled(labelDisp[irvsViewer[i]->labelId]->width(),labelDisp[irvsViewer[i]->labelId]->height());
            labelDisp[irvsViewer[i]->labelId]->setPixmap(QPixmap::fromImage(newImg));
        }
    }

    bool zhanYong=false;
    for(int id=0;id<16;id++)
    {
        zhanYong=false;
        for(int i=0;i<irvsViewer.size();i++)
        {
            if(irvsViewer[i]->labelId == id)
            {
                zhanYong=true;
                break;
            }
        }
        if(!zhanYong)
        {
            QImage newImg = QImage(disconnectImage).scaled(labelDisp[id]->width(),labelDisp[id]->height());
            labelDisp[id]->setPixmap(QPixmap::fromImage(newImg));

        }
    }




}

void MainWindow::on_loadServersBtn_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Files(*.dat)"));
    if(path.length() == 0)
    {
       QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
       return;
    }
    QFile file(path);
    if(!file.open(QIODevice::ReadWrite))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }


    int serverNumber = -1;
    QString cid , usename , pwd , CompanyID ,CompanyKey , appID;


    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);

        if(str.contains("severNumber"))
        {
            serverNumber = str.mid(str.lastIndexOf(" ")+1,str.length()-str.lastIndexOf(" ")+1).toInt();
            qDebug()<< serverNumber;
        }
        else
        {
            cid = str.section(",",3,3);
            usename = str.section(",",4,4);
            pwd = str.section(",",5,5).trimmed();
            CompanyID = str.section(",",0,0);
            CompanyKey = str.section(",",1,1);
            appID = str.section(",",2,2);
//            qDebug()<< cid << "\n" << usename << "\n" << pwd << "\n" << CompanyID << "\n" << CompanyKey << "\n" << appID;

            QIRvsViewer *rvsViewer = new QIRvsViewer();

            rvsViewer->cId = cid;
            rvsViewer->userName = usename;
            rvsViewer->pWd = pwd;
            rvsViewer->pucAppID = appID;
            rvsViewer->pucCompanyID = CompanyID;
            rvsViewer->pucCompanyKey = CompanyKey;

            bool zhanYong=false;
            for(int id=0;id<16;id++)
            {
                zhanYong=false;
                for(int i=0;i<irvsViewer.size();i++)
                {
                    if(irvsViewer[i]->labelId == id)
                    {
                        zhanYong=true;
                        break;
                    }
                }
                if(!zhanYong)
                {
                    rvsViewer->labelId = id;
                    break;
                }
            }

            rvsViewer->initIRvsViewer();
            connect(rvsViewer,SIGNAL(sendImage(QImage,QString)),this,SLOT(recvImage(QImage,QString)));


            irvsViewer.push_back(rvsViewer);

            QTreeWidgetItem *Item,*Item1,*Item2,*Item3,*Item5;
            for(int i=0;i<irvsViewer.size();i++)
            {
                if(i==0)
                {
                    Item = AddTreeNode(rootItem,rvsViewer->cId,"cId");
                    Item1 = AddTreeNode(Item,rvsViewer->userName,"userName");
                    Item2 = AddTreeNode(Item,rvsViewer->pucAppID,"pucAppID");
                    Item3 = AddTreeNode(Item,rvsViewer->pucCompanyID,"pucCompanyID");
                    Item5 = AddTreeNode(Item,rvsViewer->pucCompanyKey,"pucCompanyKey");
                    rootNode.push_back(Item);
                }
                if(irvsViewer[i]->cId != cid )
                {
                    Item = AddTreeNode(rootItem,rvsViewer->cId,"cId");
                    Item1 = AddTreeNode(Item,rvsViewer->userName,"userName");
                    Item2 = AddTreeNode(Item,rvsViewer->pucAppID,"pucAppID");
                    Item3 = AddTreeNode(Item,rvsViewer->pucCompanyID,"pucCompanyID");
                    Item5 = AddTreeNode(Item,rvsViewer->pucCompanyKey,"pucCompanyKey");
                    rootNode.push_back(Item);
                }
            }


        }

        qDebug()<< "total" << str;
    }
    file.close();
    ui->groupBox_Server->setHidden(true);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->label_Num->setText(QString::asprintf("%d",value));
}

void MainWindow::recvMouse(int labelID, QPoint p)
{
    QPoint p_offset(labelDisp[labelID]->geometry().x()+ui->frame_2->geometry().x(),labelDisp[labelID]->geometry().y()+ui->frame_2->geometry().y());
    ui->frame_3->show();
    ui->frame_3->move(p+p_offset);
    this->labelID = labelID;
}

void MainWindow::on_OKBtn_clicked()
{
    int id = ui->comboBox_8->currentIndex();

    for(int i=0;i<irvsViewer.size();i++)
    {
        if(irvsViewer[i]->labelId == this->labelID)
        {
            irvsViewer[i]->labelId = id;
        }
    }
    ui->frame_3->setHidden(true);
}

void MainWindow::on_NOBtn_clicked()
{
    ui->frame_3->setHidden(true);
}
