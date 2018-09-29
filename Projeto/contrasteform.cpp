#include "contrasteform.h"
#include "ui_contrasteform.h"

contrasteForm::contrasteForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::contrasteForm)
{
    ui->setupUi(this);
}

int contrasteForm::getMin() {
    return ui->inputcontrasteFormMin->value();
}

int contrasteForm::getMax() {
    return ui->inputcontrasteFormMax->value();
}

contrasteForm::~contrasteForm()
{
    delete ui;
}



