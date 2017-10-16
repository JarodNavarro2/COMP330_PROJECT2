#include "menudialog.h"
#include "ui_menudialog.h"
MenuDialog::MenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuDialog)
{
    ui->setupUi(this);
    ui->textBrowser->setSource(QUrl("qrc:/Menu/menu/menu.html"));

}

MenuDialog::~MenuDialog()
{
    delete ui;
}
