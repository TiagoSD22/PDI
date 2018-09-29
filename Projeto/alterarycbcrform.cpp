#include "alterarycbcrform.h"
#include "ui_alterarycbcrform.h"

alterarYCbCrForm::alterarYCbCrForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarYCbCrForm)
{
    ui->setupUi(this);
}

int alterarYCbCrForm::getdeltaY() {
    return ui->inputalterarYCbCrFormDeltaY->value();
}

int alterarYCbCrForm::getdeltaCb() {
    return ui->inputalterarYCbCrFormDeltaCb->value();
}

int alterarYCbCrForm::getdeltaCr() {
    return ui->inputalterarYCbCrFormDeltaCr->value();
}

alterarYCbCrForm::~alterarYCbCrForm()
{
    delete ui;
}




