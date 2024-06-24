/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QToolButton *pwd;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_pwd;
    QLabel *label_username;
    QLineEdit *lineEdit_pwd;
    QLineEdit *lineEdit_username;
    QPushButton *pushButton;
    QToolButton *pushButton_login;
    QToolButton *pushButton_register;
    QToolButton *toolButton;
    QToolButton *toolButton_2;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName("client");
        client->resize(661, 451);
        centralwidget = new QWidget(client);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 661, 451));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(971, 601));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(:/QT/icon/backfin.png);\n"
"border-radius: 20px;\n"
"\n"
""));
        pwd = new QToolButton(widget);
        pwd->setObjectName("pwd");
        pwd->setGeometry(QRect(420, 230, 40, 40));
        pwd->setMinimumSize(QSize(40, 40));
        pwd->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/QT/icon/Password.png"), QSize(), QIcon::Normal, QIcon::Off);
        pwd->setIcon(icon);
        pwd->setIconSize(QSize(30, 30));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 171, 80));
        label->setStyleSheet(QString::fromUtf8("font: 75 italic 28pt \"Comic Sans MS\";\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 410, 31, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 180, 191, 17));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 260, 191, 17));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset"));
        label_pwd = new QLabel(widget);
        label_pwd->setObjectName("label_pwd");
        label_pwd->setGeometry(QRect(190, 240, 41, 21));
        label_username = new QLabel(widget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(190, 160, 41, 21));
        lineEdit_pwd = new QLineEdit(widget);
        lineEdit_pwd->setObjectName("lineEdit_pwd");
        lineEdit_pwd->setGeometry(QRect(225, 220, 191, 35));
        lineEdit_pwd->setStyleSheet(QString::fromUtf8("\n"
"background:transparent;border-width:0;border-style:outset"));
        lineEdit_pwd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(225, 150, 191, 35));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset;\n"
"font: 75 14pt \"Comic Sans MS\";"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 10, 41, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(192, 191, 188);"));
        pushButton_login = new QToolButton(widget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(280, 290, 81, 41));
        pushButton_login->setStyleSheet(QString::fromUtf8("border-style:none;\n"
"font: 28pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"background-color: transparent;\n"
"border-width:0;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Client/QT/icon/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_login->setIcon(icon1);
        pushButton_login->setIconSize(QSize(50, 50));
        pushButton_register = new QToolButton(widget);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(590, 360, 51, 51));
        pushButton_register->setStyleSheet(QString::fromUtf8("border-style:none;\n"
"font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Client/QT/icon/Register.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_register->setIcon(icon2);
        pushButton_register->setIconSize(QSize(50, 50));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(300, 90, 51, 51));
        toolButton->setStyleSheet(QString::fromUtf8("border-style:none;\n"
"image:url(:/Client/QT/icon/Chat.png)"));
        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(420, 160, 40, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Client/QT/icon/login_Account.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon3);
        toolButton_2->setIconSize(QSize(30, 30));
        client->setCentralWidget(centralwidget);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QCoreApplication::translate("client", "MainWindow", nullptr));
        pwd->setText(QCoreApplication::translate("client", "...", nullptr));
        label->setText(QCoreApplication::translate("client", "Welcome", nullptr));
        label_2->setText(QCoreApplication::translate("client", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("client", "\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224", nullptr));
        label_4->setText(QCoreApplication::translate("client", "\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224", nullptr));
        label_pwd->setText(QCoreApplication::translate("client", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_username->setText(QCoreApplication::translate("client", "\350\264\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("client", "X", nullptr));
        pushButton_login->setText(QCoreApplication::translate("client", "...", nullptr));
        pushButton_register->setText(QCoreApplication::translate("client", "...", nullptr));
        toolButton->setText(QCoreApplication::translate("client", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("client", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
