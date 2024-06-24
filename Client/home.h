//Arthor:YangYunbo   DuJiangxin
//Date:2024.6.20 2024.6.21 2024.6.22 2024.6.23 2024.6.24
#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QtNetwork>
#include <QCloseEvent>

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();
    QTimer *timer;

private slots:
    void on_pushButton_quit_clicked();
    void on_pushButton_sendmessage_clicked();
    void Createdfriendlist();
    void on_pushButton_addpeople_clicked();

    void on_pushButton_startchat_clicked();

    void on_pushButton_deletepeople_clicked();
    void on_pushButton_sendfile_clicked();

    void on_pushButton_receivefile_clicked();

    void on_pushButton_fresh_clicked();
    void paintEvent(QPaintEvent *event);

    void on_pushButton_clicked();

protected:
    void closeEvent(QCloseEvent *event);
private:
    Ui::home *ui;
    QTcpSocket *tcpSocket;
};

#endif // HOME_H
