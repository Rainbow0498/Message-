//Arthor:YangYunbo
//Date:2024.6.20
#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include "client.h"

namespace Ui {
class registerdialog;
}

class registerdialog : public QWidget
{
    Q_OBJECT

public:
    explicit registerdialog(QWidget *parent = nullptr);
    ~registerdialog();

private slots:
    void on_pushButton_register_clicked();

    void on_pushButton_back_clicked();

    void on_lineEdit_name_editingFinished();

    void on_lineEdit_name_textEdited(const QString &arg1);

    void on_lineEdit_passwordone_editingFinished();

    void on_lineEdit_passwordone_textEdited(const QString &arg1);

    void on_lineEdit_passwordtwo_editingFinished();

    void on_lineEdit_passwordtwo_textEdited(const QString &arg1);

    void on_pushButton_3_clicked();

    void paintEvent(QPaintEvent *event);

private:
    Ui::registerdialog *ui;
    QTcpSocket *tcpSocket;


protected:
void connectionOperate();
void clearLine(int num1,int num2);
void attention(int flag);
void ifConnected();
void ifDisconnected();
void getRegistered();
};


#endif // REGISTERDIALOG_H
