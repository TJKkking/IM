/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditMsg;
    QPushButton *btnSend;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxObj;
    QCheckBox *checkBoxHex;
    QCheckBox *checkBoxHideIP;
    QCheckBox *checkBoxCycle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClear;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelNum;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxLoop;
    QLabel *label_3;
    QLineEdit *lineEditLoopTime;
    QLabel *label_4;
    QPushButton *btnStopLoop;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::NonModal);
        Dialog->resize(736, 617);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditMsg = new QLineEdit(Dialog);
        lineEditMsg->setObjectName(QString::fromUtf8("lineEditMsg"));

        horizontalLayout_3->addWidget(lineEditMsg);

        btnSend = new QPushButton(Dialog);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout_3->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBoxObj = new QComboBox(Dialog);
        comboBoxObj->setObjectName(QString::fromUtf8("comboBoxObj"));

        horizontalLayout_2->addWidget(comboBoxObj);

        checkBoxHex = new QCheckBox(Dialog);
        checkBoxHex->setObjectName(QString::fromUtf8("checkBoxHex"));

        horizontalLayout_2->addWidget(checkBoxHex);

        checkBoxHideIP = new QCheckBox(Dialog);
        checkBoxHideIP->setObjectName(QString::fromUtf8("checkBoxHideIP"));

        horizontalLayout_2->addWidget(checkBoxHideIP);

        checkBoxCycle = new QCheckBox(Dialog);
        checkBoxCycle->setObjectName(QString::fromUtf8("checkBoxCycle"));

        horizontalLayout_2->addWidget(checkBoxCycle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_2->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelNum = new QLabel(Dialog);
        labelNum->setObjectName(QString::fromUtf8("labelNum"));

        horizontalLayout->addWidget(labelNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxLoop = new QCheckBox(Dialog);
        checkBoxLoop->setObjectName(QString::fromUtf8("checkBoxLoop"));

        horizontalLayout->addWidget(checkBoxLoop);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditLoopTime = new QLineEdit(Dialog);
        lineEditLoopTime->setObjectName(QString::fromUtf8("lineEditLoopTime"));

        horizontalLayout->addWidget(lineEditLoopTime);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        btnStopLoop = new QPushButton(Dialog);
        btnStopLoop->setObjectName(QString::fromUtf8("btnStopLoop"));

        horizontalLayout->addWidget(btnStopLoop);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        lineEditMsg->setText(QString());
        btnSend->setText(QCoreApplication::translate("Dialog", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\345\217\221\351\200\201\345\257\271\350\261\241  \357\274\232", nullptr));
        checkBoxHex->setText(QCoreApplication::translate("Dialog", "HEX\346\224\266\345\217\221 ", nullptr));
        checkBoxHideIP->setText(QCoreApplication::translate("Dialog", "\344\270\215\346\230\276\347\244\272\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200   ", nullptr));
        checkBoxCycle->setText(QCoreApplication::translate("Dialog", "\346\224\266\345\217\221\345\276\252\347\216\257", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\345\275\223\345\211\215\350\277\236\346\216\245\346\225\260\357\274\232", nullptr));
        labelNum->setText(QString());
        checkBoxLoop->setText(QCoreApplication::translate("Dialog", "\351\207\215\345\244\215\345\217\221\351\200\201", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\346\227\266\351\227\264\351\227\264\351\232\224\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "ms", nullptr));
        btnStopLoop->setText(QCoreApplication::translate("Dialog", "\345\201\234\346\255\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
