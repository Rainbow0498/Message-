//Arthor:YangYunbo
//Date:2024.6.20
#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "userinfo.h"
#include <QPainter>
extern userinfo user;
extern QString hostip;
extern int hosthost;
registerdialog::registerdialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registerdialog)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket();

    setAttribute(Qt::WA_TranslucentBackground);

}

registerdialog::~registerdialog()
{
    delete ui;
}

void registerdialog::connectionOperate(){
    if(ui->lineEdit_name->text()!=""&& ui->lineEdit_passwordone->text()!=""&& ui->lineEdit_passwordtwo->text()!="")
    {
        if(ui->lineEdit_passwordone->text()==ui->lineEdit_passwordtwo->text())
        {
            tcpSocket->abort();//取消已有链接
            tcpSocket->connectToHost(hostip, hosthost);//链接服务器

            if(!tcpSocket->waitForConnected(30000))
            {//服务器连接超时
                ifDisconnected();
            }
            else
            {//服务器连接成功
                ifConnected();
            }
        }
        else
        {//两次密码不一致
            registerdialog::attention(3);
            registerdialog::clearLine(2,1);
        }
    }
    else
    {//用户名或密码为空
        registerdialog::attention(4);
        registerdialog::clearLine(3,2);
    }
}

void registerdialog::ifDisconnected(){
    registerdialog::attention(1);
    this->close();
    user.islogin = false;
    client *cli = new client();
    cli->show();
}

void registerdialog::ifConnected(){
    QString loginmessage = QString("register##%1##%2").arg(ui->lineEdit_name->text()).arg(ui->lineEdit_passwordone->text());
    tcpSocket->write(loginmessage.toUtf8());
    tcpSocket->flush();
    QString ip = tcpSocket->peerAddress().toString().section(":",3,3);
    int port = tcpSocket->peerPort();
    QString str = QString("[%1:%2]").arg(ip).arg(port);
    qDebug() << str ;
    connect(tcpSocket,&QTcpSocket::readyRead,this,&registerdialog::getRegistered);
}

void registerdialog::getRegistered(){
    QByteArray buffer = tcpSocket->readAll();
    if(QString(buffer).section("##",0,0)==QString("register successed"))
    {//注册成功
        this->close();
        client *cli = new client();
        cli->show();
    }
    else if(QString(buffer).section("##",0,0)==QString("register error"))
    {
        if(QString(buffer).section("##",1,1)==QString("same_name"))
        {//昵称有重复
            registerdialog::attention(2);
            registerdialog::clearLine(1,2);
        }
    }
}

void registerdialog::clearLine(int num1,int num2=0){
    if(num1==1){ui->lineEdit_name->clear();}
    else if(num1==2){
        ui->lineEdit_passwordone->clear();
        ui->lineEdit_passwordtwo->clear();
    }else{clearLine(1);clearLine(2);}
    if(num2==1){ui->lineEdit_passwordone->setFocus();}
    else if(num2==2){ui->lineEdit_name->setFocus();}
}

void registerdialog::attention(int flag){
    switch(flag){
    case 1:QMessageBox::warning(this, "Warning!", "网络错误", QMessageBox::Yes);break;
    case 2:QMessageBox::warning(this, "Warning!", "昵称有重复", QMessageBox::Yes);break;
    case 3:QMessageBox::warning(this, "Warning!", "两次密码不一致", QMessageBox::Yes);break;
    case 4:QMessageBox::warning(this, "Warning!", "用户名或密码不能为空", QMessageBox::Yes);break;
    default:break;
    }
}

void registerdialog::on_pushButton_back_clicked()
{
    this->close();
    client *cli = new client();
    cli->show();
}



void registerdialog::on_lineEdit_name_editingFinished()
{
     ui->label_name->setStyleSheet("color: rgb(0, 0, 0);font: 75 12pt Comic Sans MS;");
}


void registerdialog::on_lineEdit_name_textEdited(const QString &arg1)
{
     ui->label_name->setStyleSheet("color: rgb(255, 158, 2);font: 75 12pt Comic Sans MS;");
}


void registerdialog::on_lineEdit_passwordone_editingFinished()
{
    ui->label_passwordone->setStyleSheet("color: rgb(0, 0, 0);font: 75 12pt Comic Sans MS;");
}


void registerdialog::on_lineEdit_passwordone_textEdited(const QString &arg1)
{
    ui->label_passwordone->setStyleSheet("color: rgb(255, 158, 2);font: 75 12pt Comic Sans MS;");
}


void registerdialog::on_lineEdit_passwordtwo_editingFinished()
{
    ui->label_passwordtwo->setStyleSheet("color: rgb(0, 0, 0);font: 75 12pt Comic Sans MS;");
}


void registerdialog::on_lineEdit_passwordtwo_textEdited(const QString &arg1)
{
    ui->label_passwordtwo->setStyleSheet("color: rgb(255, 158, 2);font: 75 12pt Comic Sans MS;");
}


void registerdialog::on_pushButton_3_clicked()
{
    this -> close();
}

void registerdialog::paintEvent(QPaintEvent *event)
{
    // 创建绘图对象，并指定this为“画板”
    QPainter painter(this);
    /*
    * setRenderHint：设置渲染属性
    *    QPainter::Antialiasing：表示如果可能，引擎应该对图元的边缘进行抗锯齿处理
    */
    painter.setRenderHint(QPainter::Antialiasing);
    /*
    * Brush用于填充背景
    */
    painter.setBrush(QColor(255,255,255));
    // Pen 用于绘制轮廓线
    painter.setPen(Qt::transparent);
    // 获取绘制区域
    QRect rect = this->rect();
    // 设置绘制区域宽度
    rect.setWidth(rect.width());
    // 设置绘制区域高度
    rect.setHeight(rect.height());
    /*
    * drawRoundedRect 绘制带圆角的矩形
    */
    painter.drawRoundedRect(rect, 24, 24);

    QWidget::paintEvent(event);
}


void registerdialog::on_pushButton_register_clicked()
{
    connectionOperate();
}

