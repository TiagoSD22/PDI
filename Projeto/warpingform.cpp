#include "warpingform.h"
#include "ui_warpingform.h"

warpingForm::warpingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::warpingForm)
{
    ui->setupUi(this);
}

float warpingForm::geta() {
    return ui->inputwarpingForma->value();
}

float warpingForm::getb() {
    return ui->inputwarpingFormb->value();
}

float warpingForm::getc() {
    return ui->inputwarpingFormc->value();
}

float warpingForm::getd() {
    return ui->inputwarpingFormd->value();
}

float warpingForm::gete() {
    return ui->inputwarpingForme->value();
}

float warpingForm::getf() {
    return ui->inputwarpingFormf->value();
}

float warpingForm::getg() {
    return ui->inputwarpingFormg->value();
}

float warpingForm::geth() {
    return ui->inputwarpingFormh->value();
}

warpingForm::~warpingForm()
{
    delete ui;
}






