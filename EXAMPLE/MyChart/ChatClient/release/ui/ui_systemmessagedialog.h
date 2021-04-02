/********************************************************************************
** Form generated from reading UI file 'systemmessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMMESSAGEDIALOG_H
#define UI_SYSTEMMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemMessageDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMainIcon;
    QLabel *labelText;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer;
    QWidget *widgetTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitle;
    QWidget *widgetContent;
    QVBoxLayout *verticalLayout;
    QLabel *labelDateTime;
    QLabel *labelContent;

    void setupUi(QWidget *SystemMessageDialog)
    {
        if (SystemMessageDialog->objectName().isEmpty())
            SystemMessageDialog->setObjectName(QString::fromUtf8("SystemMessageDialog"));
        SystemMessageDialog->resize(327, 200);
        SystemMessageDialog->setStyleSheet(QString::fromUtf8("QWidget#SystemMessageDialog {\n"
"	background-image: url(:/resource/background/background.png);\n"
"	border: 1px solid #c9c9c9;\n"
"	border-radius: 1px;\n"
"}\n"
"QWidget#widgetTitle {\n"
"	background-color: rgba(255, 255, 255, 20%);\n"
"}\n"
"QWidget#widgetContent {\n"
"	background-color: rgb(230, 225, 201);\n"
"}\n"
"\n"
"QPushButton#btnClose:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(238, 0, 0, 128), stop:1 rgba(238, 44, 44, 255));\n"
"}\n"
"\n"
"QLabel#labelTitle, QLabel#labelText {\n"
"	color: #ffffff;\n"
"	font: bold 14px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(SystemMessageDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, -1, -1);
        labelMainIcon = new QLabel(SystemMessageDialog);
        labelMainIcon->setObjectName(QString::fromUtf8("labelMainIcon"));
        labelMainIcon->setMinimumSize(QSize(30, 30));
        labelMainIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/robot.png")));

        horizontalLayout->addWidget(labelMainIcon);

        labelText = new QLabel(SystemMessageDialog);
        labelText->setObjectName(QString::fromUtf8("labelText"));

        horizontalLayout->addWidget(labelText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(SystemMessageDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMinimumSize(QSize(30, 30));
        btnClose->setMaximumSize(QSize(30, 16777215));
        btnClose->setFocusPolicy(Qt::NoFocus);
        btnClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	min-width: 30px;\n"
"	background-color: none;\n"
"	border: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon);
        btnClose->setFlat(true);

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widgetTitle = new QWidget(SystemMessageDialog);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        horizontalLayout_2 = new QHBoxLayout(widgetTitle);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelTitle = new QLabel(widgetTitle);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayout_2->addWidget(labelTitle);


        verticalLayout_2->addWidget(widgetTitle);

        widgetContent = new QWidget(SystemMessageDialog);
        widgetContent->setObjectName(QString::fromUtf8("widgetContent"));
        verticalLayout = new QVBoxLayout(widgetContent);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelDateTime = new QLabel(widgetContent);
        labelDateTime->setObjectName(QString::fromUtf8("labelDateTime"));

        verticalLayout->addWidget(labelDateTime);

        labelContent = new QLabel(widgetContent);
        labelContent->setObjectName(QString::fromUtf8("labelContent"));

        verticalLayout->addWidget(labelContent);


        verticalLayout_2->addWidget(widgetContent);

        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(3, 2);

        retranslateUi(SystemMessageDialog);

        QMetaObject::connectSlotsByName(SystemMessageDialog);
    } // setupUi

    void retranslateUi(QWidget *SystemMessageDialog)
    {
        SystemMessageDialog->setWindowTitle(QCoreApplication::translate("SystemMessageDialog", "Form", nullptr));
        labelMainIcon->setText(QString());
        labelText->setText(QCoreApplication::translate("SystemMessageDialog", "\347\225\205\345\260\217\345\212\251", nullptr));
        btnClose->setText(QString());
        labelTitle->setText(QCoreApplication::translate("SystemMessageDialog", "\345\260\217\345\212\251\346\217\220\351\206\222\344\275\240\357\274\232", nullptr));
        labelDateTime->setText(QCoreApplication::translate("SystemMessageDialog", "\344\273\212\345\244\251\346\230\257\357\274\2322016\345\271\26403\346\234\21002\346\227\245 \346\230\237\346\234\237\344\270\211 16:21", nullptr));
        labelContent->setText(QCoreApplication::translate("SystemMessageDialog", "\345\260\217\345\212\251\347\245\235\344\275\240\346\234\211\344\270\252\346\204\211\345\277\253\347\232\204\345\277\203\346\203\205\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemMessageDialog: public Ui_SystemMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMMESSAGEDIALOG_H
