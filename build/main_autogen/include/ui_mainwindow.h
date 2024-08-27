/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Viewer;
    QAction *actionRearange_Viewer;
    QAction *actionSplit_Viewer;
    QAction *actionSplit_to_Four_Viewers;
    QAction *actionMerge;
    QAction *actionTranslation;
    QAction *actionRotate;
    QAction *actionScale;
    QAction *actionShape_Deformation;
    QAction *actionAuto_Generate;
    QAction *actionPoint_Handle;
    QAction *actionBone_Handle;
    QAction *actionPick;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hl;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuView;
    QMenu *menuEdit;
    QMenu *menuTransformation;
    QMenu *menuSkeleton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(805, 599);
        actionAdd_Viewer = new QAction(MainWindow);
        actionAdd_Viewer->setObjectName(QString::fromUtf8("actionAdd_Viewer"));
        actionRearange_Viewer = new QAction(MainWindow);
        actionRearange_Viewer->setObjectName(QString::fromUtf8("actionRearange_Viewer"));
        actionSplit_Viewer = new QAction(MainWindow);
        actionSplit_Viewer->setObjectName(QString::fromUtf8("actionSplit_Viewer"));
        actionSplit_to_Four_Viewers = new QAction(MainWindow);
        actionSplit_to_Four_Viewers->setObjectName(QString::fromUtf8("actionSplit_to_Four_Viewers"));
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        actionTranslation = new QAction(MainWindow);
        actionTranslation->setObjectName(QString::fromUtf8("actionTranslation"));
        actionRotate = new QAction(MainWindow);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        actionScale = new QAction(MainWindow);
        actionScale->setObjectName(QString::fromUtf8("actionScale"));
        actionShape_Deformation = new QAction(MainWindow);
        actionShape_Deformation->setObjectName(QString::fromUtf8("actionShape_Deformation"));
        actionAuto_Generate = new QAction(MainWindow);
        actionAuto_Generate->setObjectName(QString::fromUtf8("actionAuto_Generate"));
        actionPoint_Handle = new QAction(MainWindow);
        actionPoint_Handle->setObjectName(QString::fromUtf8("actionPoint_Handle"));
        actionBone_Handle = new QAction(MainWindow);
        actionBone_Handle->setObjectName(QString::fromUtf8("actionBone_Handle"));
        actionPick = new QAction(MainWindow);
        actionPick->setObjectName(QString::fromUtf8("actionPick"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hl = new QHBoxLayout();
        hl->setSpacing(6);
        hl->setObjectName(QString::fromUtf8("hl"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        hl->addWidget(mdiArea);


        verticalLayout->addLayout(hl);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 805, 28));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTransformation = new QMenu(menuEdit);
        menuTransformation->setObjectName(QString::fromUtf8("menuTransformation"));
        menuSkeleton = new QMenu(menuBar);
        menuSkeleton->setObjectName(QString::fromUtf8("menuSkeleton"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSkeleton->menuAction());
        menuView->addAction(actionSplit_Viewer);
        menuView->addAction(actionSplit_to_Four_Viewers);
        menuView->addAction(actionAdd_Viewer);
        menuView->addAction(actionRearange_Viewer);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPick);
        menuEdit->addAction(actionMerge);
        menuEdit->addAction(menuTransformation->menuAction());
        menuEdit->addAction(actionShape_Deformation);
        menuTransformation->addSeparator();
        menuTransformation->addSeparator();
        menuTransformation->addAction(actionTranslation);
        menuTransformation->addAction(actionRotate);
        menuTransformation->addAction(actionScale);
        menuSkeleton->addAction(actionAuto_Generate);
        menuSkeleton->addAction(actionPoint_Handle);
        menuSkeleton->addAction(actionBone_Handle);
        mainToolBar->addAction(actionPick);
        mainToolBar->addAction(actionRotate);
        mainToolBar->addAction(actionTranslation);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_Viewer->setText(QCoreApplication::translate("MainWindow", "Add Views", nullptr));
        actionRearange_Viewer->setText(QCoreApplication::translate("MainWindow", "Rearange Views", nullptr));
        actionSplit_Viewer->setText(QCoreApplication::translate("MainWindow", "2D && 3D Views", nullptr));
        actionSplit_to_Four_Viewers->setText(QCoreApplication::translate("MainWindow", "Four Views", nullptr));
        actionMerge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        actionTranslation->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        actionRotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        actionScale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        actionShape_Deformation->setText(QCoreApplication::translate("MainWindow", "Deformation", nullptr));
        actionAuto_Generate->setText(QCoreApplication::translate("MainWindow", "Auto Generate", nullptr));
        actionPoint_Handle->setText(QCoreApplication::translate("MainWindow", "Point Handle", nullptr));
        actionBone_Handle->setText(QCoreApplication::translate("MainWindow", "Bone Handle", nullptr));
        actionPick->setText(QCoreApplication::translate("MainWindow", "Pick", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTransformation->setTitle(QCoreApplication::translate("MainWindow", "Transformation", nullptr));
        menuSkeleton->setTitle(QCoreApplication::translate("MainWindow", "Skeleton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
