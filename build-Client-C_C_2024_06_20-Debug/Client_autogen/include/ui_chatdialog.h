/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatdialog
{
public:
    QLabel *label_title;
    QTextBrowser *textBrowser_chat;
    QLineEdit *lineEdit_sendmessage;
    QToolButton *pushButton_send;
    QWidget *widget;
    QToolButton *pushButton;

    void setupUi(QWidget *chatdialog)
    {
        if (chatdialog->objectName().isEmpty())
            chatdialog->setObjectName("chatdialog");
        chatdialog->resize(410, 520);
        chatdialog->setMinimumSize(QSize(410, 520));
        chatdialog->setMaximumSize(QSize(410, 520));
        chatdialog->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	background-image: url(:/QT/icon/background.png);\n"
"}"));
        label_title = new QLabel(chatdialog);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(20, 10, 191, 41));
        label_title->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Comic Sans MS\";"));
        textBrowser_chat = new QTextBrowser(chatdialog);
        textBrowser_chat->setObjectName("textBrowser_chat");
        textBrowser_chat->setGeometry(QRect(20, 60, 301, 351));
        textBrowser_chat->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Comic Sans MS\";\n"
"background-color: rgba(255, 255, 255,1);"));
        lineEdit_sendmessage = new QLineEdit(chatdialog);
        lineEdit_sendmessage->setObjectName("lineEdit_sendmessage");
        lineEdit_sendmessage->setGeometry(QRect(20, 440, 301, 41));
        lineEdit_sendmessage->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Comic Sans MS\";\n"
"background-color: rgba(255, 255, 255,0.5);"));
        pushButton_send = new QToolButton(chatdialog);
        pushButton_send->setObjectName("pushButton_send");
        pushButton_send->setGeometry(QRect(330, 430, 81, 51));
        pushButton_send->setStyleSheet(QString::fromUtf8("#pushButton_send:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: rgba(0, 0, 0, 1);\n"
"}\n"
"#pushButton_send:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/QT/icon/Send.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_send->setIcon(icon);
        pushButton_send->setIconSize(QSize(40, 40));
        pushButton_send->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        widget = new QWidget(chatdialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 410, 520));
        pushButton = new QToolButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 10, 40, 40));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("border-style:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("QT/icon/Closed2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        widget->raise();
        label_title->raise();
        textBrowser_chat->raise();
        lineEdit_sendmessage->raise();
        pushButton_send->raise();

        retranslateUi(chatdialog);

        QMetaObject::connectSlotsByName(chatdialog);
    } // setupUi

    void retranslateUi(QWidget *chatdialog)
    {
        chatdialog->setWindowTitle(QCoreApplication::translate("chatdialog", "Chat", nullptr));
        label_title->setText(QCoreApplication::translate("chatdialog", "TextLabel", nullptr));
        pushButton_send->setText(QCoreApplication::translate("chatdialog", "\345\217\221\351\200\201", nullptr));
        pushButton->setText(QCoreApplication::translate("chatdialog", "\347\273\210\346\255\242\345\257\271\350\257\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatdialog: public Ui_chatdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
