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
}

server::~server()
{
    tcpServer->close();
    tcpServer->deleteLater();
    delete ui;
}
