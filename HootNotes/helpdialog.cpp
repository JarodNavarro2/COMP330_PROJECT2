#include "helpdialog.h"
#include "ui_helpdialog.h"

HelpDialog::HelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpDialog)
{
    ui->setupUi(this);
    ui->tab->setObjectName("What is @");
}

HelpDialog::~HelpDialog()
{
    delete ui;
}
