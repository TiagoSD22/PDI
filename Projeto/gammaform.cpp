#include "gammaform.h"
#include "ui_gammaform.h"

gammaForm::gammaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gammaForm)
{
    ui->setupUi(this);
}

float gammaForm::getVGamma() {
    return ui->inputgammaFormGamma->value();
}

gammaForm::~gammaForm()
{
    delete ui;
}


