/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralWidget;
    QTextBrowser *msgbox;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(400, 300);
        centralWidget = new QWidget(Server);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        msgbox = new QTextBrowser(centralWidget);
        msgbox->setObjectName(QString::fromUtf8("msgbox"));
        msgbox->setGeometry(QRect(40, 20, 311, 231));
        Server->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Server);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Server->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Server);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Server->setStatusBar(statusBar);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
