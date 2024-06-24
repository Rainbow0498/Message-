/********************************************************************************
** Form generated from reading UI file 'receivefiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEFILEDIALOG_H
#define UI_RECEIVEFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_receivefiledialog
{
public:
    QWidget *widget;
    QLabel *label_message;
    QProgressBar *progressBar;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QWidget *receivefiledialog)
    {
        if (receivefiledialog->objectName().isEmpty())
            receivefiledialog->setObjectName("receivefiledialog");
        receivefiledialog->resize(441, 338);
        receivefiledialog->setMinimumSize(QSize(441, 338));
        receivefiledialog->setMaximumSize(QSize(441, 338));
        receivefiledialog->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	background-image: url(:/QT/icon/background.png);\n"
"}"));
        widget = new QWidget(receivefiledialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-50, -50, 821, 461));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(111111, 111111));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/QT/icon/background.png);"));
        label_message = new QLabel(widget);
        label_message->setObjectName("label_message");
        label_message->setGeometry(QRect(170, 260, 211, 41));
        label_message->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 0);\n"
"color: rgb(149, 0, 0);"));
        label_message->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(130, 300, 311, 31));
        progressBar->setValue(24);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 50, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\351\232\266\344\271\246")});
        font.setPointSize(32);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 32pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qlineargradient(spread:repeat, x1:0.72043, y1:0.732955, x2:1, y2:1, stop:0.134409 rgba(0, 0, 0, 255), stop:0.833333 rgba(96, 198, 66, 233));"));
        label->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(370, 60, 90, 90));
        toolButton->setMinimumSize(QSize(90, 90));
        toolButton->setMaximumSize(QSize(90, 90));
        toolButton->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-width:0;\n"
"border-style:outset"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QT/icon/\347\237\255\344\277\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(75, 75));

        retranslateUi(receivefiledialog);

        QMetaObject::connectSlotsByName(receivefiledialog);
    } // setupUi

    void retranslateUi(QWidget *receivefiledialog)
    {
        receivefiledialog->setWindowTitle(QCoreApplication::translate("receivefiledialog", "ReceiveFile", nullptr));
        label_message->setText(QCoreApplication::translate("receivefiledialog", "\347\255\211\345\276\205\344\270\216\345\217\221\351\200\201\347\253\257\350\277\236\346\216\245", nullptr));
        label->setText(QCoreApplication::translate("receivefiledialog", "\346\216\245\346\224\266\346\226\207\344\273\266", nullptr));
        toolButton->setText(QCoreApplication::translate("receivefiledialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class receivefiledialog: public Ui_receivefiledialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEFILEDIALOG_H
