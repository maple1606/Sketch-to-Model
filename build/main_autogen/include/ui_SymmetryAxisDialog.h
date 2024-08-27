/********************************************************************************
** Form generated from reading UI file 'SymmetryAxisDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMMETRYAXISDIALOG_H
#define UI_SYMMETRYAXISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SymmetryAxisDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioBtnX;
    QRadioButton *radioBtnY;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SymmetryAxisDialog)
    {
        if (SymmetryAxisDialog->objectName().isEmpty())
            SymmetryAxisDialog->setObjectName(QString::fromUtf8("SymmetryAxisDialog"));
        SymmetryAxisDialog->resize(389, 107);
        verticalLayout_2 = new QVBoxLayout(SymmetryAxisDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioBtnX = new QRadioButton(SymmetryAxisDialog);
        radioBtnX->setObjectName(QString::fromUtf8("radioBtnX"));
        radioBtnX->setChecked(false);

        verticalLayout_2->addWidget(radioBtnX);

        radioBtnY = new QRadioButton(SymmetryAxisDialog);
        radioBtnY->setObjectName(QString::fromUtf8("radioBtnY"));
        radioBtnY->setChecked(true);

        verticalLayout_2->addWidget(radioBtnY);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SymmetryAxisDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SymmetryAxisDialog);

        QMetaObject::connectSlotsByName(SymmetryAxisDialog);
    } // setupUi

    void retranslateUi(QDialog *SymmetryAxisDialog)
    {
        SymmetryAxisDialog->setWindowTitle(QCoreApplication::translate("SymmetryAxisDialog", "Dialog", nullptr));
        radioBtnX->setText(QCoreApplication::translate("SymmetryAxisDialog", "X Axis", nullptr));
        radioBtnY->setText(QCoreApplication::translate("SymmetryAxisDialog", "Y Axis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymmetryAxisDialog: public Ui_SymmetryAxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMMETRYAXISDIALOG_H
