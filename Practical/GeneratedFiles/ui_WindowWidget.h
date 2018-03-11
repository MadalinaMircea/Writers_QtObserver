/********************************************************************************
** Form generated from reading UI file 'WindowWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWWIDGET_H
#define UI_WINDOWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowWidget
{
public:
    QListWidget *ideas;
    QPushButton *acceptButton;
    QPushButton *developButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *descriptionLabel;
    QLineEdit *descriptionTextBox;
    QLabel *actLabel;
    QLineEdit *actTextBox;
    QPushButton *addButton;
    QPushButton *saveButton;

    void setupUi(QWidget *WindowWidget)
    {
        if (WindowWidget->objectName().isEmpty())
            WindowWidget->setObjectName(QStringLiteral("WindowWidget"));
        WindowWidget->resize(597, 385);
        ideas = new QListWidget(WindowWidget);
        ideas->setObjectName(QStringLiteral("ideas"));
        ideas->setGeometry(QRect(0, 0, 371, 391));
        acceptButton = new QPushButton(WindowWidget);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(380, 180, 211, 23));
        developButton = new QPushButton(WindowWidget);
        developButton->setObjectName(QStringLiteral("developButton"));
        developButton->setGeometry(QRect(380, 260, 211, 23));
        layoutWidget = new QWidget(WindowWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 20, 211, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        descriptionLabel = new QLabel(layoutWidget);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, descriptionLabel);

        descriptionTextBox = new QLineEdit(layoutWidget);
        descriptionTextBox->setObjectName(QStringLiteral("descriptionTextBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, descriptionTextBox);

        actLabel = new QLabel(layoutWidget);
        actLabel->setObjectName(QStringLiteral("actLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, actLabel);

        actTextBox = new QLineEdit(layoutWidget);
        actTextBox->setObjectName(QStringLiteral("actTextBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, actTextBox);


        verticalLayout->addLayout(formLayout);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);

        saveButton = new QPushButton(WindowWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(380, 340, 211, 23));

        retranslateUi(WindowWidget);

        QMetaObject::connectSlotsByName(WindowWidget);
    } // setupUi

    void retranslateUi(QWidget *WindowWidget)
    {
        WindowWidget->setWindowTitle(QApplication::translate("WindowWidget", "WindowWidget", 0));
        acceptButton->setText(QApplication::translate("WindowWidget", "Accept", 0));
        developButton->setText(QApplication::translate("WindowWidget", "Develop", 0));
        descriptionLabel->setText(QApplication::translate("WindowWidget", "Description", 0));
        actLabel->setText(QApplication::translate("WindowWidget", "Act", 0));
        addButton->setText(QApplication::translate("WindowWidget", "Add", 0));
        saveButton->setText(QApplication::translate("WindowWidget", "Save Plot", 0));
    } // retranslateUi

};

namespace Ui {
    class WindowWidget: public Ui_WindowWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWWIDGET_H
