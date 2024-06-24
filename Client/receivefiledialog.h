//Arthor:YangYunbo   DuJiangxin
//Date:2024.6.20 2024.6.21 2024.6.22 2024.6.23 2024.6.24
#ifndef RECEIVEFILEDIALOG_H
#define RECEIVEFILEDIALOG_H

#include <QWidget>
#include <QTcpSocket>
#include <QFile>
#include <QCloseEvent>

namespace Ui {
class receivefiledialog;
}

class receivefiledialog : public QWidget
{
    Q_OBJECT

public:
    explicit receivefiledialog(QWidget *parent = nullptr);
    ~receivefiledialog();

private slots:

protected:
    void closeEvent(QCloseEvent *event);
    void connectionMessage();
    void sendData();
    void fileInfo();
    void initBar();
    void updateBar();
    void receiveReady();

private:
    Ui::receivefiledialog *ui;
    QTcpSocket *tcpSocket;
    QFile file;
    QString fileName;
    quint64 fileSize;
    quint64 receiveSize;
    bool isStart;

    QString ip;
    qint16 port;
};

#endif // RECEIVEFILEDIALOG_H
