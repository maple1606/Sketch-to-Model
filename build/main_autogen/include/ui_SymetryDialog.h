/********************************************************************************
** Form generated from reading UI file 'SymetryDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMETRYDIALOG_H
#define UI_SYMETRYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SymetryDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxWstParent;
    QRadioButton *radioBtnXY;
    QRadioButton *radioBtnYZ;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SymetryDialog)
    {
        if (SymetryDialog->objectName().isEmpty())
            SymetryDialog->setObjectName(QString::fromUtf8("SymetryDialog"));
        SymetryDialog->resize(224, 116);
        verticalLayout_2 = new QVBoxLayout(SymetryDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxWstParent = new QCheckBox(SymetryDialog);
        checkBoxWstParent->setObjectName(QString::fromUtf8("checkBoxWstParent"));
        checkBoxWstParent->setChecked(true);

        verticalLayout_2->addWidget(checkBoxWstParent);

        radioBtnXY = new QRadioButton(SymetryDialog);
        radioBtnXY->setObjectName(QString::fromUtf8("radioBtnXY"));
        radioBtnXY->setChecked(true);

        verticalLayout_2->addWidget(radioBtnXY);

        radioBtnYZ = new QRadioButton(SymetryDialog);
        radioBtnYZ->setObjectName(QString::fromUtf8("radioBtnYZ"));
        radioBtnYZ->setChecked(false);

        verticalLayout_2->addWidget(radioBtnYZ);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SymetryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SymetryDialog);

        QMetaObject::connectSlotsByName(SymetryDialog);
    } // setupUi

    void retranslateUi(QDialog *SymetryDialog)
    {
        SymetryDialog->setWindowTitle(QCoreApplication::translate("SymetryDialog", "Dialog", nullptr));
        checkBoxWstParent->setText(QCoreApplication::translate("SymetryDialog", "With Respect to Parent", nullptr));
        radioBtnXY->setText(QCoreApplication::translate("SymetryDialog", "XY Plane", nullptr));
        radioBtnYZ->setText(QCoreApplication::translate("SymetryDialog", "YZ Plane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymetryDialog: public Ui_SymetryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMETRYDIALOG_H
