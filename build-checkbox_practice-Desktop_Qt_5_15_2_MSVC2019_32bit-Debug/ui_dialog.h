/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *txtEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QString::fromUtf8("chkBoxUnder"));

        horizontalLayout_2->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QString::fromUtf8("chkBoxItalic"));

        horizontalLayout_2->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QString::fromUtf8("chkBoxBold"));

        horizontalLayout_2->addWidget(chkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QString::fromUtf8("rBtnBlack"));

        horizontalLayout->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QString::fromUtf8("rBtnRed"));

        horizontalLayout->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QString::fromUtf8("rBtnBlue"));

        horizontalLayout->addWidget(rBtnBlue);


        verticalLayout->addWidget(groupBox_2);

        txtEdit = new QPlainTextEdit(Dialog);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));

        verticalLayout->addWidget(txtEdit);

        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout_3->addWidget(btnOK);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_3->addWidget(btnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(Dialog);
        QObject::connect(btnOK, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        chkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        chkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        rBtnBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        rBtnRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        rBtnBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        btnClose->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
