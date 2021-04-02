/********************************************************************************
** Form generated from reading UI file 'picturecutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURECUTDIALOG_H
#define UI_PICTURECUTDIALOG_H

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

class Ui_PictureCutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelWinIcon;
    QLabel *labelWinTitle;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QWidget *widgetBody;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widgetLoad;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPreview;
    QWidget *widgetView;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label64;
    QLabel *label_2;
    QLabel *label48;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PictureCutDialog)
    {
        if (PictureCutDialog->objectName().isEmpty())
            PictureCutDialog->setObjectName(QString::fromUtf8("PictureCutDialog"));
        PictureCutDialog->resize(404, 451);
        verticalLayout = new QVBoxLayout(PictureCutDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widgetWinTitle = new QWidget(PictureCutDialog);
        widgetWinTitle->setObjectName(QString::fromUtf8("widgetWinTitle"));
        widgetWinTitle->setMinimumSize(QSize(0, 30));
        widgetWinTitle->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_4 = new QHBoxLayout(widgetWinTitle);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 0, 0, 0);
        labelWinIcon = new QLabel(widgetWinTitle);
        labelWinIcon->setObjectName(QString::fromUtf8("labelWinIcon"));
        labelWinIcon->setMinimumSize(QSize(30, 30));
        labelWinIcon->setMaximumSize(QSize(30, 30));
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/robot.png")));

        horizontalLayout_4->addWidget(labelWinIcon);

        labelWinTitle = new QLabel(widgetWinTitle);
        labelWinTitle->setObjectName(QString::fromUtf8("labelWinTitle"));
        labelWinTitle->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));

        horizontalLayout_4->addWidget(labelWinTitle);

        btnWinMin = new QPushButton(widgetWinTitle);
        btnWinMin->setObjectName(QString::fromUtf8("btnWinMin"));
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/common/ic_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon);

        horizontalLayout_4->addWidget(btnWinMin);

        btnWinClose = new QPushButton(widgetWinTitle);
        btnWinClose->setObjectName(QString::fromUtf8("btnWinClose"));
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon1);

        horizontalLayout_4->addWidget(btnWinClose);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addWidget(widgetWinTitle);

        widgetBody = new QWidget(PictureCutDialog);
        widgetBody->setObjectName(QString::fromUtf8("widgetBody"));
        verticalLayout_3 = new QVBoxLayout(widgetBody);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        widgetButton = new QWidget(widgetBody);
        widgetButton->setObjectName(QString::fromUtf8("widgetButton"));
        horizontalLayout_2 = new QHBoxLayout(widgetButton);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnLoad = new QPushButton(widgetButton);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));
        btnLoad->setMinimumSize(QSize(110, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/PictureEdit/Resources/photo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLoad->setIcon(icon2);

        horizontalLayout_2->addWidget(btnLoad);

        btnSave = new QPushButton(widgetButton);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(110, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/PictureEdit/Resources/svae.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon3);

        horizontalLayout_2->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(widgetButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widgetLoad = new QWidget(widgetBody);
        widgetLoad->setObjectName(QString::fromUtf8("widgetLoad"));
        widgetLoad->setMinimumSize(QSize(300, 0));
        widgetLoad->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(widgetLoad);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelPreview = new QLabel(widgetLoad);
        labelPreview->setObjectName(QString::fromUtf8("labelPreview"));
        labelPreview->setMinimumSize(QSize(150, 150));
        labelPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelPreview, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_3->addWidget(widgetLoad);

        widgetView = new QWidget(widgetBody);
        widgetView->setObjectName(QString::fromUtf8("widgetView"));
        verticalLayout_2 = new QVBoxLayout(widgetView);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widgetView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label);

        label64 = new QLabel(widgetView);
        label64->setObjectName(QString::fromUtf8("label64"));
        label64->setMinimumSize(QSize(64, 64));
        label64->setMaximumSize(QSize(48, 48));
        label64->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label64);

        label_2 = new QLabel(widgetView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label48 = new QLabel(widgetView);
        label48->setObjectName(QString::fromUtf8("label48"));
        label48->setMinimumSize(QSize(48, 48));
        label48->setMaximumSize(QSize(48, 48));
        label48->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label48);

        label_3 = new QLabel(widgetView);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(widgetView);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(widgetBody);


        retranslateUi(PictureCutDialog);
        QObject::connect(btnWinClose, SIGNAL(clicked()), PictureCutDialog, SLOT(close()));
        QObject::connect(btnWinMin, SIGNAL(clicked()), PictureCutDialog, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(PictureCutDialog);
    } // setupUi

    void retranslateUi(QWidget *PictureCutDialog)
    {
        PictureCutDialog->setWindowTitle(QCoreApplication::translate("PictureCutDialog", "Form", nullptr));
        labelWinIcon->setText(QString());
        labelWinTitle->setText(QCoreApplication::translate("PictureCutDialog", "\345\244\264\345\203\217\350\243\201\345\211\252", nullptr));
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
        btnLoad->setText(QCoreApplication::translate("PictureCutDialog", "\346\234\254\345\234\260\347\205\247\347\211\207", nullptr));
        btnSave->setText(QCoreApplication::translate("PictureCutDialog", "\344\277\235\345\255\230\350\243\201\345\211\252", nullptr));
        labelPreview->setText(QString());
        label->setText(QCoreApplication::translate("PictureCutDialog", "\351\242\204\350\247\210\357\274\232", nullptr));
        label64->setText(QCoreApplication::translate("PictureCutDialog", "64*64", nullptr));
        label_2->setText(QCoreApplication::translate("PictureCutDialog", "64*64", nullptr));
        label48->setText(QCoreApplication::translate("PictureCutDialog", "48*48", nullptr));
        label_3->setText(QCoreApplication::translate("PictureCutDialog", "48*48", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureCutDialog: public Ui_PictureCutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURECUTDIALOG_H
