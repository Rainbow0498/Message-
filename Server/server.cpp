//Arthor:YangYunbo  DuJiangxin
//Date:2024.6.19 6.20 6.21
#include "server.h"
#include "ui_server.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDateTime>

int currentsize;

server::server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::server)
{
    ui->setupUi(this);

    ui->listWidget->clear();
    ui->listWidget->insertItem(0,tr("当前无在线用户"));
    tcpServer = new QTcpServer();
    for(int i = 0; i < M; i++)
    {
        tcpSocket[i]=new QTcpSocket();
    }
    tcpServer->listen(QHostAddress::Any,8888);

    //init
    db = QSqlDatabase::addDatabase("QSQLITE");

    //判断是否建立了用户表
    db.setDatabaseName("./people.db");
    db.open();
    QSqlQuery sqlquery;
    sqlquery.exec("UPDATE people SET islogin = 0");
    sqlquery.exec("CREATE TABLE if not exists people (id INTEGER NOT NULL UNIQUE,name TEXT NOT NULL UNIQUE,password TEXT NOT NULL,ip TEXT,islogin INTEGER NOT NULL,PRIMARY KEY(id AUTOINCREMENT))");
    db.close();

    connect(tcpServer,&QTcpServer::newConnection,[=](){
        tcpSocket[0] = tcpServer->nextPendingConnection();
        currentsize++;
        ip = tcpSocket[0]->peerAddress().toString().section(":",3,3);
        int port = tcpSocket[0]->peerPort();
        //预留currentsize以用作多用户同时连接所用
        QString str = QString("[%1:%2]").arg(ip).arg(port);
        qDebug() << str ;

        connect(tcpSocket[0],&QTcpSocket::readyRead,[=](){
            //读取缓冲区数据
            buffer = tcpSocket[0]->readAll();

            if("login" == QString(buffer).section("##",0,0))
            {
                log("login");
                login();
            }
            else if("register" == QString(buffer).section("##",0,0))
            {
                log("register");
                registerIn();
            }
        });
     });
}

server::~server()
{
    tcpServer->close();
    tcpServer->deleteLater();
    delete ui;
}

void server::login(){
    db.setDatabaseName("./people.db");
    db.open();
    QSqlQuery sqlquery;
    sqlquery.prepare("select * from people where name = :name");
    sqlquery.bindValue(":name",QString(buffer).section("##",1,1));
    sqlquery.exec();
    if(!sqlquery.next())
    {//未查找到该用户
        tcpSocket[0]->write(QString("login error##no_user").toUtf8());
        tcpSocket[0]->flush();
        db.close();
    }
    else
    {//用户存在
        //用户存在

        //查询用户是否已经登录
        // 获取 "islogin" 字段的值
        int isLoginValue = sqlquery.value(4).toInt();
        // 根据查询结果进行处理
        if (isLoginValue == 1) {
            tcpSocket[0]->write(QString("login error##again_user").toUtf8());
            tcpSocket[0]->flush();
        }
        else{
            int id = sqlquery.value(0).toInt();
            QString pwd = sqlquery.value(2).toString();
            if(pwd == QString(buffer).section("##",2,2))
            {//登录成功
                tcpSocket[0]->write(QString("login successed##%1").arg(id).toUtf8());
                sqlquery.prepare("update people set ip=:ip, islogin=1 where name = :name");
                sqlquery.bindValue(":ip",ip);
                sqlquery.bindValue(":name",QString(buffer).section("##",1,1));
                sqlquery.exec();
                tcpSocket[0]->flush();

                //更新服务器界面
                ui->listWidget->clear();
                sqlquery.prepare("select * from people where islogin = 1");
                sqlquery.exec();
                if(sqlquery.next())
                {
                    QString userid = sqlquery.value(0).toString();
                    QString username = sqlquery.value(1).toString();
                    QString userip = sqlquery.value(3).toString();
                    //qDebug()<<userid;
                    ui->listWidget->insertItem(0,"用户ID："+userid+",用户昵称:"+username+",用户IP:"+userip);
                    int rownum = 1;
                    while (sqlquery.next())
                    {
                        QString userid = sqlquery.value(0).toString();
                        QString username = sqlquery.value(1).toString();
                        QString userip = sqlquery.value(3).toString();
                        ui->listWidget->insertItem(rownum,"用户ID："+userid+",用户昵称:"+username+",用户IP:"+userip);
                        rownum++;
                    }
                }
                else
                {
                    ui->listWidget->clear();
                    ui->listWidget->insertItem(0,tr("当前无在线用户"));
                }
            }
            else
            {//密码错误
                tcpSocket[0]->write(QString("login error##errpwd").toUtf8());
                tcpSocket[0]->flush();
                db.close();
            }
        }
    }
}
void server::registerIn(){
    db.setDatabaseName("./people.db");
    db.open();
    QSqlQuery sqlquery;
    //注册用户的时候需要进行判重
    sqlquery.prepare("select * from people where name = :name");
    sqlquery.bindValue(":name",QString(buffer).section("##",1,1));
    sqlquery.exec();
    if(!sqlquery.next())
    {//可以新建
        sqlquery.clear();
        sqlquery.prepare("insert into people values (null,:name,:password,null,0)");
        sqlquery.bindValue(":name",QString(buffer).section("##",1,1));
        sqlquery.bindValue(":password",QString(buffer).section("##",2,2));
        sqlquery.exec();

        sqlquery.clear();
        sqlquery.prepare("select * from people where name = :name");
        sqlquery.bindValue(":name",QString(buffer).section("##",1,1));
        sqlquery.exec();//获得新建的用户的id
        sqlquery.next();
        int newid = sqlquery.value(0).toInt();
        sqlquery.exec("create table if not exists friend__" + QString::number(newid) +"(id INTEGER unique, name TEXT,sendmassage INTEGER,sendfile INTEGER)");

        tcpSocket[0]->write(QString("register successed").toUtf8());
        tcpSocket[0]->flush();
        db.close();
    }
    else
    {//有重名
        tcpSocket[0]->write(QString("register error##same_name").toUtf8());
        tcpSocket[0]->flush();
        db.close();
    }
}
