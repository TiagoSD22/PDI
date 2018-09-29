#include "solarizeform.h"
#include "ui_solarizeform.h"

solarizeForm::solarizeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::solarizeForm)
{
    ui->setupUi(this);
}

int solarizeForm::getLimiarR() {
    return ui->inputsolarizeFormLimiarR->value();
}

int solarizeForm::getLimiarG(){
    return ui->inputsolarizeFormLimiarG->value();
}

int solarizeForm::getLimiarB(){
    return ui->inputsolarizeFormLimiarB->value();
}

solarizeForm::~solarizeForm()
{
    delete ui;
}




