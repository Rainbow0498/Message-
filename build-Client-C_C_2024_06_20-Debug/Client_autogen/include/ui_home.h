/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *widget;
    QToolButton *pushButton_fresh;
    QToolButton *pushButton_startchat;
    QListWidget *listWidget;
    QLabel *label_3;
    QLabel *label;
    QToolButton *pushButton_receivefile;
    QToolButton *pushButton_sendfile;
    QToolButton *pushButton_quit;
    QLabel *label_2;
    QLabel *label_4;
    QToolButton *toolButton;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_sendname;
    QToolButton *pushButton_sendmessage;
    QPushButton *pushButton;
    QToolButton *pushButton_addpeople;
    QToolButton *pushButton_deletepeople;
    QLabel *label_5;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(661, 451);
        home->setMinimumSize(QSize(661, 451));
        home->setMaximumSize(QSize(661, 451));
        home->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-radius:20px;\n"
"	background-image: url(:/QT/icon/background.png);\n"
"\n"
"}"));
        widget = new QWidget(home);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 661, 451));
        pushButton_fresh = new QToolButton(widget);
        pushButton_fresh->setObjectName("pushButton_fresh");
        pushButton_fresh->setGeometry(QRect(20, 390, 45, 45));
        pushButton_fresh->setMinimumSize(QSize(45, 45));
        pushButton_fresh->setMaximumSize(QSize(60, 60));
        pushButton_fresh->setStyleSheet(QString::fromUtf8("#pushButton_fresh:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_fresh:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("QT/icon/Refresh2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fresh->setIcon(icon);
        pushButton_fresh->setIconSize(QSize(35, 35));
        pushButton_fresh->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_startchat = new QToolButton(widget);
        pushButton_startchat->setObjectName("pushButton_startchat");
        pushButton_startchat->setGeometry(QRect(270, 370, 80, 80));
        pushButton_startchat->setMinimumSize(QSize(80, 80));
        pushButton_startchat->setMaximumSize(QSize(80, 80));
        pushButton_startchat->setStyleSheet(QString::fromUtf8("#pushButton_startchat:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_startchat:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QT/icon/\347\237\255\344\277\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_startchat->setIcon(icon1);
        pushButton_startchat->setIconSize(QSize(50, 50));
        pushButton_startchat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        listWidget = new QListWidget(widget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 70, 181, 331));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border:none;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 40, 131, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        label_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 0, 211, 61));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(53, 132, 228);"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_receivefile = new QToolButton(widget);
        pushButton_receivefile->setObjectName("pushButton_receivefile");
        pushButton_receivefile->setGeometry(QRect(370, 370, 80, 80));
        pushButton_receivefile->setMinimumSize(QSize(80, 80));
        pushButton_receivefile->setMaximumSize(QSize(80, 80));
        pushButton_receivefile->setStyleSheet(QString::fromUtf8("#pushButton_receivefile:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_receivefile:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/QT/icon/sendd (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_receivefile->setIcon(icon2);
        pushButton_receivefile->setIconSize(QSize(50, 50));
        pushButton_receivefile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_receivefile->setAutoRaise(false);
        pushButton_receivefile->setArrowType(Qt::NoArrow);
        pushButton_sendfile = new QToolButton(widget);
        pushButton_sendfile->setObjectName("pushButton_sendfile");
        pushButton_sendfile->setGeometry(QRect(470, 370, 80, 80));
        pushButton_sendfile->setMinimumSize(QSize(80, 80));
        pushButton_sendfile->setMaximumSize(QSize(80, 80));
        pushButton_sendfile->setStyleSheet(QString::fromUtf8("#pushButton_sendfile:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_sendfile:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/QT/icon/sendd (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sendfile->setIcon(icon3);
        pushButton_sendfile->setIconSize(QSize(50, 50));
        pushButton_sendfile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_quit = new QToolButton(widget);
        pushButton_quit->setObjectName("pushButton_quit");
        pushButton_quit->setGeometry(QRect(580, 370, 80, 80));
        pushButton_quit->setMinimumSize(QSize(80, 80));
        pushButton_quit->setMaximumSize(QSize(80, 80));
        pushButton_quit->setStyleSheet(QString::fromUtf8("#pushButton_quit:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_quit:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Client/QT/icon/LoginOut_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_quit->setIcon(icon4);
        pushButton_quit->setIconSize(QSize(50, 50));
        pushButton_quit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 100, 130, 30));
        label_2->setMinimumSize(QSize(130, 30));
        label_2->setMaximumSize(QSize(130, 30));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(66, 91, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 140, 130, 30));
        label_4->setMinimumSize(QSize(120, 30));
        label_4->setMaximumSize(QSize(130, 30));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(66, 91, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(560, 0, 51, 41));
        toolButton->setMinimumSize(QSize(0, 0));
        toolButton->setMaximumSize(QSize(100, 100));
        toolButton->setStyleSheet(QString::fromUtf8("border-style:none;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("QT/icon/Message.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon5);
        toolButton->setIconSize(QSize(80, 80));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 160, 181, 29));
        label_6->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(240, 200, 181, 64));
        label_7->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);
        lineEdit_sendname = new QLineEdit(widget);
        lineEdit_sendname->setObjectName("lineEdit_sendname");
        lineEdit_sendname->setGeometry(QRect(380, 160, 125, 30));
        lineEdit_sendname->setMinimumSize(QSize(125, 30));
        lineEdit_sendname->setMaximumSize(QSize(125, 30));
        lineEdit_sendname->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0.5);"));
        pushButton_sendmessage = new QToolButton(widget);
        pushButton_sendmessage->setObjectName("pushButton_sendmessage");
        pushButton_sendmessage->setGeometry(QRect(380, 210, 80, 80));
        pushButton_sendmessage->setMinimumSize(QSize(80, 80));
        pushButton_sendmessage->setMaximumSize(QSize(80, 80));
        pushButton_sendmessage->setStyleSheet(QString::fromUtf8("#pushButton_sendmessage:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_sendmessage:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Client/QT/icon/Chat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sendmessage->setIcon(icon6);
        pushButton_sendmessage->setIconSize(QSize(50, 50));
        pushButton_sendmessage->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 0, 41, 41));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(154, 153, 150);"));
        pushButton_addpeople = new QToolButton(widget);
        pushButton_addpeople->setObjectName("pushButton_addpeople");
        pushButton_addpeople->setGeometry(QRect(270, 280, 80, 80));
        pushButton_addpeople->setMinimumSize(QSize(80, 80));
        pushButton_addpeople->setMaximumSize(QSize(80, 80));
        pushButton_addpeople->setStyleSheet(QString::fromUtf8("#pushButton_addpeople:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_addpeople:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/QT/icon/\346\267\273\345\212\240\350\201\224\347\263\273\344\272\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addpeople->setIcon(icon7);
        pushButton_addpeople->setIconSize(QSize(50, 50));
        pushButton_addpeople->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_addpeople->setAutoRaise(false);
        pushButton_deletepeople = new QToolButton(widget);
        pushButton_deletepeople->setObjectName("pushButton_deletepeople");
        pushButton_deletepeople->setGeometry(QRect(370, 280, 80, 80));
        pushButton_deletepeople->setMinimumSize(QSize(80, 80));
        pushButton_deletepeople->setMaximumSize(QSize(80, 80));
        pushButton_deletepeople->setStyleSheet(QString::fromUtf8("#pushButton_deletepeople:hover\n"
"{\n"
"	border-style:none;\n"
"	font: 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 1);\n"
"}\n"
"\n"
"#pushButton_deletepeople:!hover\n"
"{\n"
"	border-style:none;\n"
"	font: 75 12pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"	color: rgba(0, 0, 0, 0);\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/QT/icon/\345\210\240\351\231\244\350\201\224\347\263\273\344\272\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deletepeople->setIcon(icon8);
        pushButton_deletepeople->setIconSize(QSize(50, 50));
        pushButton_deletepeople->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 40, 201, 401));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/QT/icon/menn2.png);"));
        label_5->raise();
        pushButton_startchat->raise();
        label->raise();
        pushButton_receivefile->raise();
        pushButton_sendfile->raise();
        pushButton_quit->raise();
        label_2->raise();
        label_4->raise();
        toolButton->raise();
        label_6->raise();
        label_7->raise();
        lineEdit_sendname->raise();
        pushButton_sendmessage->raise();
        pushButton->raise();
        pushButton_addpeople->raise();
        pushButton_deletepeople->raise();
        listWidget->raise();
        pushButton_fresh->raise();
        label_3->raise();

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Function", nullptr));
        pushButton_fresh->setText(QString());
        pushButton_startchat->setText(QCoreApplication::translate("home", "\345\274\200\345\247\213\345\257\271\350\257\235", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        listWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QCoreApplication::translate("home", "\350\201\224\347\263\273\344\272\272\345\210\227\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("home", "\346\254\242\350\277\216\345\233\236\346\235\245", nullptr));
        pushButton_receivefile->setText(QCoreApplication::translate("home", "\346\216\245\346\224\266\346\226\207\344\273\266", nullptr));
        pushButton_sendfile->setText(QCoreApplication::translate("home", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("home", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
        toolButton->setText(QCoreApplication::translate("home", "...", nullptr));
        label_6->setText(QCoreApplication::translate("home", "\350\276\223\345\205\245\345\257\271\346\226\271\346\230\265\347\247\260:", nullptr));
        label_7->setText(QCoreApplication::translate("home", "\345\274\200\345\247\213\345\257\271\350\257\235", nullptr));
        pushButton_sendmessage->setText(QCoreApplication::translate("home", "\350\201\212\345\244\251", nullptr));
        pushButton->setText(QCoreApplication::translate("home", "X", nullptr));
        pushButton_addpeople->setText(QCoreApplication::translate("home", "\346\267\273\345\212\240\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_deletepeople->setText(QCoreApplication::translate("home", "\345\210\240\351\231\244\350\201\224\347\263\273\344\272\272", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
