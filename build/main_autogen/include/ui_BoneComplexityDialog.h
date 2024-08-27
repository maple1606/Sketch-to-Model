/********************************************************************************
** Form generated from reading UI file 'BoneComplexityDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BONECOMPLEXITYDIALOG_H
#define UI_BONECOMPLEXITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BoneComplexityDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QComboBox *comboBoxSkelType;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSlider *sliderBC;
    QLabel *label_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSlider *sliderMerge;
    QLabel *labelMerge;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSlider *sliderPrune;
    QLabel *labelPrune;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *sliderCollapse;
    QLabel *labelCollapse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BoneComplexityDialog)
    {
        if (BoneComplexityDialog->objectName().isEmpty())
            BoneComplexityDialog->setObjectName(QString::fromUtf8("BoneComplexityDialog"));
        BoneComplexityDialog->resize(253, 297);
        verticalLayout_2 = new QVBoxLayout(BoneComplexityDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(BoneComplexityDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        comboBoxSkelType = new QComboBox(BoneComplexityDialog);
        comboBoxSkelType->setObjectName(QString::fromUtf8("comboBoxSkelType"));

        verticalLayout_2->addWidget(comboBoxSkelType);

        label_5 = new QLabel(BoneComplexityDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(BoneComplexityDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        sliderBC = new QSlider(BoneComplexityDialog);
        sliderBC->setObjectName(QString::fromUtf8("sliderBC"));
        sliderBC->setMinimum(0);
        sliderBC->setMaximum(19);
        sliderBC->setSingleStep(1);
        sliderBC->setValue(5);
        sliderBC->setSliderPosition(5);
        sliderBC->setTracking(true);
        sliderBC->setOrientation(Qt::Horizontal);
        sliderBC->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(sliderBC);

        label_6 = new QLabel(BoneComplexityDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        label_3 = new QLabel(BoneComplexityDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(BoneComplexityDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        sliderMerge = new QSlider(BoneComplexityDialog);
        sliderMerge->setObjectName(QString::fromUtf8("sliderMerge"));
        sliderMerge->setMaximum(30);
        sliderMerge->setValue(30);
        sliderMerge->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(sliderMerge);

        labelMerge = new QLabel(BoneComplexityDialog);
        labelMerge->setObjectName(QString::fromUtf8("labelMerge"));

        horizontalLayout_3->addWidget(labelMerge);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_4 = new QLabel(BoneComplexityDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(BoneComplexityDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        sliderPrune = new QSlider(BoneComplexityDialog);
        sliderPrune->setObjectName(QString::fromUtf8("sliderPrune"));
        sliderPrune->setMaximum(30);
        sliderPrune->setValue(30);
        sliderPrune->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(sliderPrune);

        labelPrune = new QLabel(BoneComplexityDialog);
        labelPrune->setObjectName(QString::fromUtf8("labelPrune"));

        horizontalLayout_4->addWidget(labelPrune);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label = new QLabel(BoneComplexityDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(BoneComplexityDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        sliderCollapse = new QSlider(BoneComplexityDialog);
        sliderCollapse->setObjectName(QString::fromUtf8("sliderCollapse"));
        sliderCollapse->setMaximum(10);
        sliderCollapse->setValue(10);
        sliderCollapse->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderCollapse);

        labelCollapse = new QLabel(BoneComplexityDialog);
        labelCollapse->setObjectName(QString::fromUtf8("labelCollapse"));

        horizontalLayout->addWidget(labelCollapse);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(BoneComplexityDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(BoneComplexityDialog);

        QMetaObject::connectSlotsByName(BoneComplexityDialog);
    } // setupUi

    void retranslateUi(QDialog *BoneComplexityDialog)
    {
        BoneComplexityDialog->setWindowTitle(QCoreApplication::translate("BoneComplexityDialog", "Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("BoneComplexityDialog", "Skeleton Type", nullptr));
        label_5->setText(QCoreApplication::translate("BoneComplexityDialog", "Branch Simplification", nullptr));
        label_7->setText(QCoreApplication::translate("BoneComplexityDialog", "0", nullptr));
        label_6->setText(QCoreApplication::translate("BoneComplexityDialog", "1.0", nullptr));
        label_3->setText(QCoreApplication::translate("BoneComplexityDialog", "Merging", nullptr));
        label_8->setText(QCoreApplication::translate("BoneComplexityDialog", "0", nullptr));
        labelMerge->setText(QCoreApplication::translate("BoneComplexityDialog", "30", nullptr));
        label_4->setText(QCoreApplication::translate("BoneComplexityDialog", "Trimming", nullptr));
        label_10->setText(QCoreApplication::translate("BoneComplexityDialog", "0", nullptr));
        labelPrune->setText(QCoreApplication::translate("BoneComplexityDialog", "30", nullptr));
        label->setText(QCoreApplication::translate("BoneComplexityDialog", "Collapsing", nullptr));
        label_2->setText(QCoreApplication::translate("BoneComplexityDialog", "0", nullptr));
        labelCollapse->setText(QCoreApplication::translate("BoneComplexityDialog", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoneComplexityDialog: public Ui_BoneComplexityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BONECOMPLEXITYDIALOG_H
