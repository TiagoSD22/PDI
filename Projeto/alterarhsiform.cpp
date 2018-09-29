#include "alterarhsiform.h"
#include "ui_alterarhsiform.h"
#include <QDial>
#include <QSpinBox>

alterarhsiForm::alterarhsiForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarhsiForm)
{
    ui->setupUi(this);
}

float alterarhsiForm::getdeltaH() {
    return ui->inputalterarhsiFormDeltaH->value();
}

int alterarhsiForm::getdeltaS() {
    return ui->inputalterarhsiFormDeltaS->value();
}

int alterarhsiForm::getdeltaI() {
    return ui->inputalterarhsiFormDeltaI->value();
}

alterarhsiForm::~alterarhsiForm()
{
    delete ui;
}



