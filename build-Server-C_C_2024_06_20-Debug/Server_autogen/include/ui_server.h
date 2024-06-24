/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *listWidget;
    QTextEdit *textEditOut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName("server");
        server->resize(800, 600);
        centralwidget = new QWidget(server);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 80, 121, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(110, 110, 341, 391));
        textEditOut = new QTextEdit(centralwidget);
        textEditOut->setObjectName("textEditOut");
        textEditOut->setGeometry(QRect(570, 100, 151, 401));
        server->setCentralWidget(centralwidget);
        menubar = new QMenuBar(server);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        server->setMenuBar(menubar);
        statusbar = new QStatusBar(server);
        statusbar->setObjectName("statusbar");
        server->setStatusBar(statusbar);

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QMainWindow *server)
    {
        server->setWindowTitle(QCoreApplication::translate("server", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("server", "\345\234\250\347\272\277\347\232\204\347\224\250\346\210\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
