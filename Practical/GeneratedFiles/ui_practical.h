/********************************************************************************
** Form generated from reading UI file 'practical.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICAL_H
#define UI_PRACTICAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PracticalClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PracticalClass)
    {
        if (PracticalClass->objectName().isEmpty())
            PracticalClass->setObjectName(QStringLiteral("PracticalClass"));
        PracticalClass->resize(600, 400);
        menuBar = new QMenuBar(PracticalClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        PracticalClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PracticalClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PracticalClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PracticalClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PracticalClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PracticalClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PracticalClass->setStatusBar(statusBar);

        retranslateUi(PracticalClass);

        QMetaObject::connectSlotsByName(PracticalClass);
    } // setupUi

    void retranslateUi(QMainWindow *PracticalClass)
    {
        PracticalClass->setWindowTitle(QApplication::translate("PracticalClass", "Practical", 0));
    } // retranslateUi

};

namespace Ui {
    class PracticalClass: public Ui_PracticalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICAL_H
