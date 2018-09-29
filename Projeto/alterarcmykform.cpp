#include "alterarcmykform.h"
#include "ui_alterarcmykform.h"

alterarcmykForm::alterarcmykForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarcmykForm)
{
    ui->setupUi(this);
}

int alterarcmykForm::getdeltaC() {
    return ui->inputalterarcmykFormDeltaC->value();
}

int alterarcmykForm::getdeltaM() {
    return ui->inputalterarcmykFormDeltaM->value();
}

int alterarcmykForm::getdeltaY() {
    return ui->inputalterarcmykFormDeltaY->value();
}

int alterarcmykForm::getdeltaK() {
    return ui->inputalterarcmykFormDeltaK->value();
}

alterarcmykForm::~alterarcmykForm()
{
    delete ui;
}





