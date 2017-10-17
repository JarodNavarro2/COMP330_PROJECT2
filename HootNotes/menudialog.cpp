#include "menudialog.h"
#include "ui_menudialog.h"
MenuDialog::MenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuDialog)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(222, 241, 255);");
    ui->textBrowser->setSource(QUrl("qrc:/Menu/menu/menu.html"));
    this->setWindowTitle("Help");

}

MenuDialog::~MenuDialog()
{
    delete ui;
}
