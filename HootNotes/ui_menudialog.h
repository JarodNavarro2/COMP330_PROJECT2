/********************************************************************************
** Form generated from reading UI file 'menudialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDIALOG_H
#define UI_MENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MenuDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MenuDialog)
    {
        if (MenuDialog->objectName().isEmpty())
            MenuDialog->setObjectName(QStringLiteral("MenuDialog"));
        MenuDialog->resize(691, 440);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/images/HootIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MenuDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MenuDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(MenuDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(MenuDialog);

        QMetaObject::connectSlotsByName(MenuDialog);
    } // setupUi

    void retranslateUi(QDialog *MenuDialog)
    {
        MenuDialog->setWindowTitle(QApplication::translate("MenuDialog", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MenuDialog: public Ui_MenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDIALOG_H
