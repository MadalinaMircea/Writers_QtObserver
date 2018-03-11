/********************************************************************************
** Form generated from reading UI file 'developwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPWINDOW_H
#define UI_DEVELOPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DevelopWindow
{
public:
    QTextEdit *textEdit;
    QPushButton *saveButton;

    void setupUi(QWidget *DevelopWindow)
    {
        if (DevelopWindow->objectName().isEmpty())
            DevelopWindow->setObjectName(QStringLiteral("DevelopWindow"));
        DevelopWindow->resize(594, 339);
        textEdit = new QTextEdit(DevelopWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 20, 411, 291));
        saveButton = new QPushButton(DevelopWindow);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(440, 130, 131, 51));

        retranslateUi(DevelopWindow);

        QMetaObject::connectSlotsByName(DevelopWindow);
    } // setupUi

    void retranslateUi(QWidget *DevelopWindow)
    {
        DevelopWindow->setWindowTitle(QApplication::translate("DevelopWindow", "DevelopWindow", 0));
        saveButton->setText(QApplication::translate("DevelopWindow", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class DevelopWindow: public Ui_DevelopWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPWINDOW_H
