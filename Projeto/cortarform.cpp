#include "cortarform.h"
#include "ui_cortarform.h"

cortarForm::cortarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cortarForm)
{
    ui->setupUi(this);
}

int cortarForm::getii() {
    return ui->inputcortarFormii->value();
}

int cortarForm::getifi() {
    return ui->inputcortarFormifi->value();
}

int cortarForm::getji() {
    return ui->inputcortarFormji->value();
}

int cortarForm::getjf() {
    return ui->inputcortarFormjf->value();
}

cortarForm::~cortarForm()
{
    delete ui;
}






