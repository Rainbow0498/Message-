/********************************************************************************
** Form generated from reading UI file 'sendfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFILEDIALOG_H
#define UI_SENDFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendfiledialog
{
public:
    QLabel *label_title;
    QLabel *label_message;
    QToolButton *pushButton_selectfile;
    QToolButton *pushButton_sendfile;
    QWidget *widget;
    QToolButton *toolButton;
    QLabel *label_people;

    void setupUi(QWidget *sendfiledialog)
    {
        if (sendfiledialog->objectName().isEmpty())
            sendfiledialog->setObjectName("sendfiledialog");
        sendfiledialog->resize(455, 340);
        sendfiledialog->setMinimumSize(QSize(455, 340));
        sendfiledialog->setMaximumSize(QSize(455, 340));
        sendfiledialog->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	background-image: url(:/QT/icon/background.png);\n"
"}"));
        label_title = new QLabel(sendfiledialog);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(90, 30, 171, 41));
        label_title->setStyleSheet(QString::fromUtf8("font: 28pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qlineargradient(spread:repeat, x1:0.72043, y1:0.732955, x2:1, y2:1, stop:0.134409 rgba(0, 0, 0, 255), stop:0.833333 rgba(96, 198, 66, 233));"));
        label_title->setAlignment(Qt::AlignCenter);
        label_message = new QLabel(sendfiledialog);
        label_message->setObjectName("label_message");
        label_message->setGeometry(QRect(50, 120, 351, 51));
        label_message->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 0, 0);"));
        label_message->setAlignment(Qt::AlignCenter);
        pushButton_selectfile = new QToolButton(sendfiledialog);
        pushButton_selectfile->setObjectName("pushButton_selectfile");
        pushButton_selectfile->setGeometry(QRect(50, 180, 120, 120));
        pushButton_selectfile->setMinimumSize(QSize(120, 120));
        pushButton_selectfile->setMaximumSize(QSize(120, 120));
        pushButton_selectfile->setStyleSheet(QString::fromUtf8("\n"
"	border-style:none;\n"
"	font: 18pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QT/icon/\351\200\211\346\213\251\346\226\207\344\273\266.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_selectfile->setIcon(icon);
        pushButton_selectfile->setIconSize(QSize(75, 75));
        pushButton_selectfile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_sendfile = new QToolButton(sendfiledialog);
        pushButton_sendfile->setObjectName("pushButton_sendfile");
        pushButton_sendfile->setGeometry(QRect(240, 180, 120, 120));
        pushButton_sendfile->setMinimumSize(QSize(120, 120));
        pushButton_sendfile->setMaximumSize(QSize(120, 120));
        pushButton_sendfile->setStyleSheet(QString::fromUtf8("\n"
"	border-style:none;\n"
"	font: 18pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QT/icon/Send.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sendfile->setIcon(icon1);
        pushButton_sendfile->setIconSize(QSize(75, 75));
        pushButton_sendfile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        widget = new QWidget(sendfiledialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 455, 340));
        widget->setMinimumSize(QSize(455, 340));
        widget->setMaximumSize(QSize(455, 340));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(240, 10, 90, 90));
        toolButton->setMinimumSize(QSize(90, 90));
        toolButton->setMaximumSize(QSize(90, 90));
        toolButton->setStyleSheet(QString::fromUtf8("border-style:none;\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/QT/icon/\347\237\255\344\277\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(75, 75));
        label_people = new QLabel(widget);
        label_people->setObjectName("label_people");
        label_people->setGeometry(QRect(-50, -10, 171, 51));
        label_people->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Comic Sans MS\";\n"
"color: rgb(170, 255, 255);"));
        label_people->setAlignment(Qt::AlignCenter);
        widget->raise();
        label_title->raise();
        label_message->raise();
        pushButton_selectfile->raise();
        pushButton_sendfile->raise();

        retranslateUi(sendfiledialog);

        QMetaObject::connectSlotsByName(sendfiledialog);
    } // setupUi

    void retranslateUi(QWidget *sendfiledialog)
    {
        sendfiledialog->setWindowTitle(QCoreApplication::translate("sendfiledialog", "SendFile", nullptr));
        label_title->setText(QCoreApplication::translate("sendfiledialog", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        label_message->setText(QCoreApplication::translate("sendfiledialog", "\350\257\267\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushButton_selectfile->setText(QCoreApplication::translate("sendfiledialog", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushButton_sendfile->setText(QCoreApplication::translate("sendfiledialog", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        toolButton->setText(QCoreApplication::translate("sendfiledialog", "...", nullptr));
        label_people->setText(QCoreApplication::translate("sendfiledialog", "linpop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendfiledialog: public Ui_sendfiledialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFILEDIALOG_H
