#include "alterarrgbform.h"
#include "ui_alterarrgbform.h"

alterarRGBForm::alterarRGBForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarRGBForm)
{
    ui->setupUi(this);
}

int alterarRGBForm::getdeltaR() {
    return ui->inputalterarRGBFormDeltaR->value();
}

int alterarRGBForm::getdeltaG() {
    return ui->inputalterarRGBFormDeltaG->value();
}

int alterarRGBForm::getdeltaB() {
    return ui->inputalterarRGBFormDeltaB->value();
}

alterarRGBForm::~alterarRGBForm()
{
    delete ui;
}



