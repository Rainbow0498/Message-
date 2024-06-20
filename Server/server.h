#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlDatabase>
#include <QDateTime>
#include <QSqlQuery>
#include <QThread>
const int M = 20;//设置20个通信口
QT_BEGIN_NAMESPACE
namespace Ui { class server; }
QT_END_NAMESPACE

class server : public QMainWindow
{
    Q_OBJECT

public:
    server(QWidget *parent = nullptr);
    ~server();
    void login();
    void registerIn();
    void wantsendmessage();
    void chat_history();
    void last_chat_history();
    void chat_send();
    void logout();
    void getfriendlist();
    void add_friend();
    void delete_friend();
    void want_send_file();
    void send_file_ok();
    void send_file_miss();
    void handleNewConnection();
    void handleDisConnection();
    void log(const QString &message);
    QByteArray buffer;
    QString ip;

private:
    Ui::server *ui;
    QTcpServer* tcpServer;
    QTcpSocket* tcpSocket[M];

    QSqlDatabase db;
    QSqlQuery sqlquery;
};
#endif // SERVER_H
