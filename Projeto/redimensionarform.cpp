#include "redimensionarform.h"
#include "ui_redimensionarform.h"

redimensionarForm::redimensionarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::redimensionarForm)
{
    ui->setupUi(this);
}

int redimensionarForm::getl() {
    return ui->inputredimensionarForml->value();
}

int redimensionarForm::geth() {
    return ui->inputredimensionarFormh->value();
}

redimensionarForm::~redimensionarForm()
{
    delete ui;
}




