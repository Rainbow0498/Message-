//Arthor:YangYunbo   DuJiangxin
//Date:2024.6.20
#include "client.h"
#include "ui_client.h"
#include <QtNetwork>
#include <QMessageBox>
#include "userinfo.h"
#include "home.h"
#include <QPainter>
#include <QPoint>
extern userinfo user;
extern QString hostip;
extern int hosthost;

client::client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::client)
{
    ui->setupUi(this);
    tcpSocket = new QTcpSocket();
   /* setWindowFlags(Qt::FramelessWindowHint);

    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    setAttribute(Qt::WA_TranslucentBackground);

    move(200,200);
*/
}

client::~client()
{
    delete tcpSocket;
    delete ui;
}


void client::on_pushButton_login_clicked()
{
    if(ui->lineEdit_username->text()!=""&& ui->lineEdit_pwd->text()!= "")
    {//账号密码不能为空
        tcpSocket->abort();//取消已有链接
        tcpSocket->connectToHost(hostip, hosthost);//链接服务器
        QString ip = tcpSocket->peerAddress().toString().section(":",3,3);
        int port = tcpSocket->peerPort();
        QString str = QString("[%1:%2]").arg(ip).arg(port);
        qDebug() << str ;
        if(!tcpSocket->waitForConnected(30000))
        {
            QMessageBox::warning(this, "Warning!", "网络错误", QMessageBox::Yes);
        }
        else
        {//服务器连接成功
            QString loginmessage = QString("login##%1##%2").arg(ui->lineEdit_username->text()).arg(ui->lineEdit_pwd->text());
            tcpSocket->write(loginmessage.toUtf8());
            tcpSocket->flush();
            connect(tcpSocket,&QTcpSocket::readyRead,[=](){
                QByteArray buffer = tcpSocket->readAll();
                if(QString(buffer).section("##",0,0)==QString("login successed"))
                {//登陆成功
                    user.id=QString(buffer).section("##",1,1).toInt();
                    user.name = ui->lineEdit_username->text();
                    user.islogin = true;
                    this->close();
                    home *hom = new home();
                    hom->show();
                }
                else if(QString(buffer).section("##",0,0)==QString("login error"))
                {
                    if(QString(buffer).section("##",1,1)==QString("no_user"))
                    {//用户不存在
                        QMessageBox::warning(this, "Warning!", "用户不存在", QMessageBox::Yes);
                        ui->lineEdit_username->clear();
                        ui->lineEdit_pwd->clear();
                        ui->lineEdit_username->setFocus();
                    }
                    else if(QString(buffer).section("##",1,1)==QString("errpwd"))
                    {
                        QMessageBox::warning(this, "Warning!", "密码错误", QMessageBox::Yes);
                        ui->lineEdit_pwd->clear();
                        ui->lineEdit_pwd->setFocus();
                    }
                    else if(QString(buffer).section("##",1,1)==QString("again_user"))
                    {
                        QMessageBox::warning(this, "Warning!", "用户已登录", QMessageBox::Yes);
                        ui->lineEdit_pwd->clear();
                        ui->lineEdit_pwd->setFocus();
                    }
                }
            });
        }
    }
    else
    {
        QMessageBox::warning(this, "Warning!", "用户名或密码不为空", QMessageBox::Yes);
        ui->lineEdit_username->clear();
        ui->lineEdit_pwd->clear();
        ui->lineEdit_username->setFocus();
    }
}


void client::on_pushButton_register_clicked()
{
    this->close();
    registerdialog *reg = new registerdialog();
    reg->show();
}


void client::on_lineEdit_username_editingFinished()
{
    ui->label_username->setStyleSheet("color: rgb(0, 0, 0);font: 75 12pt Comic Sans MS;");
}


void client::on_lineEdit_username_textEdited(const QString &arg1)
{
    ui->label_username->setStyleSheet("color: rgb(255, 85, 255);font: 75 12pt Comic Sans MS;");
}


void client::on_lineEdit_pwd_editingFinished()
{
    ui->label_pwd->setStyleSheet("color: rgb(0, 0, 0);font: 75 12pt Comic Sans MS;");
}


void client::on_lineEdit_pwd_textEdited(const QString &arg1)
{
    ui->label_pwd->setStyleSheet("color: rgb(255, 85, 255);font: 75 12pt Comic Sans MS;");
}

void client::paintEvent(QPaintEvent *event)
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
    painter.drawRoundedRect(rect, 20, 20);

    QWidget::paintEvent(event);
}


void client::on_pushButton_clicked()
{
    this->close();
}

