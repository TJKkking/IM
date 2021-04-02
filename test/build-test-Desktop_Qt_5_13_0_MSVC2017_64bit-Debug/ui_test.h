/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QWidget *centralWidget;
    QTextBrowser *TESTBOX;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QString::fromUtf8("test"));
        test->resize(400, 300);
        centralWidget = new QWidget(test);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TESTBOX = new QTextBrowser(centralWidget);
        TESTBOX->setObjectName(QString::fromUtf8("TESTBOX"));
        TESTBOX->setGeometry(QRect(80, 20, 201, 101));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(70, 130, 121, 91));
        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(210, 140, 131, 71));
        test->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        test->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        test->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        test->setStatusBar(statusBar);

        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QMainWindow *test)
    {
        test->setWindowTitle(QCoreApplication::translate("test", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
