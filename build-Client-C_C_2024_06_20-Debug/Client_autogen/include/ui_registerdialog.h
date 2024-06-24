/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerdialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_name;
    QLabel *label_passwordone;
    QLabel *label_passwordtwo;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_passwordone;
    QLineEdit *lineEdit_passwordtwo;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *toolButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_register;
    QWidget *widget;
    QPushButton *pushButton_back;
    QToolButton *toolButton_2;

    void setupUi(QWidget *registerdialog)
    {
        if (registerdialog->objectName().isEmpty())
            registerdialog->setObjectName("registerdialog");
        registerdialog->resize(661, 459);
        registerdialog->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
""));
        label = new QLabel(registerdialog);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 40, 181, 71));
        label->setStyleSheet(QString::fromUtf8("color:rgb(154, 153, 150);\n"
"font: 300 italic 25pt \"Ubuntu\";"));
        label_2 = new QLabel(registerdialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 180, 151, 17));
        label_3 = new QLabel(registerdialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 230, 151, 17));
        label_4 = new QLabel(registerdialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 290, 151, 17));
        label_name = new QLabel(registerdialog);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(200, 160, 51, 31));
        label_name->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        label_passwordone = new QLabel(registerdialog);
        label_passwordone->setObjectName("label_passwordone");
        label_passwordone->setGeometry(QRect(200, 210, 51, 51));
        label_passwordone->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        label_passwordtwo = new QLabel(registerdialog);
        label_passwordtwo->setObjectName("label_passwordtwo");
        label_passwordtwo->setGeometry(QRect(190, 270, 71, 31));
        label_passwordtwo->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);"));
        lineEdit_name = new QLineEdit(registerdialog);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(260, 150, 151, 31));
        lineEdit_name->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset"));
        lineEdit_passwordone = new QLineEdit(registerdialog);
        lineEdit_passwordone->setObjectName("lineEdit_passwordone");
        lineEdit_passwordone->setGeometry(QRect(260, 200, 151, 31));
        lineEdit_passwordone->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset"));
        lineEdit_passwordtwo = new QLineEdit(registerdialog);
        lineEdit_passwordtwo->setObjectName("lineEdit_passwordtwo");
        lineEdit_passwordtwo->setGeometry(QRect(260, 260, 151, 31));
        lineEdit_passwordtwo->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset"));
        pushButton = new QPushButton(registerdialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 210, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("image:url(:/Client/QT/icon/Password.png)"));
        pushButton_2 = new QPushButton(registerdialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 160, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("image:url(:/Client/QT/icon/login_Account.png)"));
        toolButton = new QPushButton(registerdialog);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(410, 270, 31, 31));
        toolButton->setStyleSheet(QString::fromUtf8("image:url(:/QT/icon/login_\345\257\206\347\240\201.png)"));
        pushButton_3 = new QPushButton(registerdialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(630, 0, 21, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgba(32,0,72,0);\n"
"border-radius: 5px;\n"
"color:rgba(26, 95, 180,1);\n"
""));
        pushButton_register = new QPushButton(registerdialog);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(230, 320, 181, 61));
        pushButton_register->setStyleSheet(QString::fromUtf8("font: 700 23pt \"Ubuntu\";\n"
"color:rgb(98, 160, 234)"));
        widget = new QWidget(registerdialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 661, 461));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(:/QT/icon/backfin.png)"));
        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(10, 430, 51, 31));
        pushButton_back->setStyleSheet(QString::fromUtf8("image:url(:/QT/icon/goback.png);\n"
"background-color: rgba(255, 255, 255,0);"));
        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(20, 0, 100, 61));
        toolButton_2->setStyleSheet(QString::fromUtf8("image:url(:/QT/icon/logo.png)"));
        widget->raise();
        toolButton->raise();
        pushButton->raise();
        label_name->raise();
        label->raise();
        label_2->raise();
        label_passwordtwo->raise();
        label_4->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        lineEdit_passwordtwo->raise();
        label_3->raise();
        label_passwordone->raise();
        lineEdit_passwordone->raise();
        lineEdit_name->raise();
        pushButton_register->raise();

        retranslateUi(registerdialog);

        QMetaObject::connectSlotsByName(registerdialog);
    } // setupUi

    void retranslateUi(QWidget *registerdialog)
    {
        registerdialog->setWindowTitle(QCoreApplication::translate("registerdialog", "Form", nullptr));
        label->setText(QCoreApplication::translate("registerdialog", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("registerdialog", "\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224", nullptr));
        label_3->setText(QCoreApplication::translate("registerdialog", "\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224", nullptr));
        label_4->setText(QCoreApplication::translate("registerdialog", "\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224", nullptr));
        label_name->setText(QCoreApplication::translate("registerdialog", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_passwordone->setText(QCoreApplication::translate("registerdialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_passwordtwo->setText(QCoreApplication::translate("registerdialog", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        toolButton->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("registerdialog", "X", nullptr));
        pushButton_register->setText(QCoreApplication::translate("registerdialog", "\347\241\256\350\256\244", nullptr));
        pushButton_back->setText(QString());
        toolButton_2->setText(QCoreApplication::translate("registerdialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerdialog: public Ui_registerdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
