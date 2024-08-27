/********************************************************************************
** Form generated from reading UI file 'SetInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETINFODIALOG_H
#define UI_SETINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetInfoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QRadioButton *radioBtnDepthX;
    QRadioButton *radioBtnDepthY;
    QRadioButton *radioBtnDepthZ;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMinDepth;
    QSlider *sliderDepth;
    QLabel *labelMaxDepth;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QCheckBox *checkBoxAutoSkel;
    QComboBox *comboBoxToyLayer;
    QLabel *label_4;
    QLabel *labelThickTmp;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSlider *sliderThick;
    QLabel *labelThickMax;
    QLabel *labelScaleTmp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSlider *sliderScale;
    QLabel *labelScaleMax;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetInfoDialog)
    {
        if (SetInfoDialog->objectName().isEmpty())
            SetInfoDialog->setObjectName(QString::fromUtf8("SetInfoDialog"));
        SetInfoDialog->resize(420, 277);
        verticalLayout_2 = new QVBoxLayout(SetInfoDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(SetInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        radioBtnDepthX = new QRadioButton(SetInfoDialog);
        radioBtnDepthX->setObjectName(QString::fromUtf8("radioBtnDepthX"));

        horizontalLayout_3->addWidget(radioBtnDepthX);

        radioBtnDepthY = new QRadioButton(SetInfoDialog);
        radioBtnDepthY->setObjectName(QString::fromUtf8("radioBtnDepthY"));
        radioBtnDepthY->setChecked(false);

        horizontalLayout_3->addWidget(radioBtnDepthY);

        radioBtnDepthZ = new QRadioButton(SetInfoDialog);
        radioBtnDepthZ->setObjectName(QString::fromUtf8("radioBtnDepthZ"));
        radioBtnDepthZ->setChecked(true);

        horizontalLayout_3->addWidget(radioBtnDepthZ);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelMinDepth = new QLabel(SetInfoDialog);
        labelMinDepth->setObjectName(QString::fromUtf8("labelMinDepth"));

        horizontalLayout->addWidget(labelMinDepth);

        sliderDepth = new QSlider(SetInfoDialog);
        sliderDepth->setObjectName(QString::fromUtf8("sliderDepth"));
        sliderDepth->setMinimum(-800);
        sliderDepth->setMaximum(800);
        sliderDepth->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderDepth);

        labelMaxDepth = new QLabel(SetInfoDialog);
        labelMaxDepth->setObjectName(QString::fromUtf8("labelMaxDepth"));

        horizontalLayout->addWidget(labelMaxDepth);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(SetInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        checkBoxAutoSkel = new QCheckBox(SetInfoDialog);
        checkBoxAutoSkel->setObjectName(QString::fromUtf8("checkBoxAutoSkel"));
        checkBoxAutoSkel->setChecked(true);

        gridLayout_2->addWidget(checkBoxAutoSkel, 1, 1, 1, 1);

        comboBoxToyLayer = new QComboBox(SetInfoDialog);
        comboBoxToyLayer->setObjectName(QString::fromUtf8("comboBoxToyLayer"));

        gridLayout_2->addWidget(comboBoxToyLayer, 0, 1, 1, 1);

        label_4 = new QLabel(SetInfoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout_2->addLayout(gridLayout_2);

        labelThickTmp = new QLabel(SetInfoDialog);
        labelThickTmp->setObjectName(QString::fromUtf8("labelThickTmp"));

        verticalLayout_2->addWidget(labelThickTmp);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(SetInfoDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        sliderThick = new QSlider(SetInfoDialog);
        sliderThick->setObjectName(QString::fromUtf8("sliderThick"));
        sliderThick->setMinimum(1);
        sliderThick->setMaximum(500);
        sliderThick->setSingleStep(1);
        sliderThick->setSliderPosition(100);
        sliderThick->setTracking(true);
        sliderThick->setOrientation(Qt::Horizontal);
        sliderThick->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(sliderThick);

        labelThickMax = new QLabel(SetInfoDialog);
        labelThickMax->setObjectName(QString::fromUtf8("labelThickMax"));

        horizontalLayout_2->addWidget(labelThickMax);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        labelScaleTmp = new QLabel(SetInfoDialog);
        labelScaleTmp->setObjectName(QString::fromUtf8("labelScaleTmp"));

        verticalLayout_2->addWidget(labelScaleTmp);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(SetInfoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        sliderScale = new QSlider(SetInfoDialog);
        sliderScale->setObjectName(QString::fromUtf8("sliderScale"));
        sliderScale->setMinimum(1);
        sliderScale->setMaximum(1000);
        sliderScale->setValue(100);
        sliderScale->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(sliderScale);

        labelScaleMax = new QLabel(SetInfoDialog);
        labelScaleMax->setObjectName(QString::fromUtf8("labelScaleMax"));

        horizontalLayout_4->addWidget(labelScaleMax);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SetInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SetInfoDialog);

        QMetaObject::connectSlotsByName(SetInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *SetInfoDialog)
    {
        SetInfoDialog->setWindowTitle(QCoreApplication::translate("SetInfoDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SetInfoDialog", "Depth:", nullptr));
        radioBtnDepthX->setText(QCoreApplication::translate("SetInfoDialog", "Along X Axis", nullptr));
        radioBtnDepthY->setText(QCoreApplication::translate("SetInfoDialog", "Along Y Axis", nullptr));
        radioBtnDepthZ->setText(QCoreApplication::translate("SetInfoDialog", "Along Z Axis", nullptr));
        labelMinDepth->setText(QCoreApplication::translate("SetInfoDialog", "-800", nullptr));
        labelMaxDepth->setText(QCoreApplication::translate("SetInfoDialog", "800", nullptr));
        label->setText(QCoreApplication::translate("SetInfoDialog", "Auto Skeleton:", nullptr));
        checkBoxAutoSkel->setText(QString());
        comboBoxToyLayer->setCurrentText(QString());
        label_4->setText(QCoreApplication::translate("SetInfoDialog", "Layer:", nullptr));
        labelThickTmp->setText(QCoreApplication::translate("SetInfoDialog", "Propotion of Thickness", nullptr));
        label_7->setText(QCoreApplication::translate("SetInfoDialog", "0.0", nullptr));
        labelThickMax->setText(QCoreApplication::translate("SetInfoDialog", "5.0", nullptr));
        labelScaleTmp->setText(QCoreApplication::translate("SetInfoDialog", "Scale", nullptr));
        label_5->setText(QCoreApplication::translate("SetInfoDialog", "-", nullptr));
        labelScaleMax->setText(QCoreApplication::translate("SetInfoDialog", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetInfoDialog: public Ui_SetInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETINFODIALOG_H
