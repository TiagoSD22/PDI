#include "eqhistform.h"
#include "ui_eqhistform.h"

eqhistForm::eqhistForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eqhistForm)
{
    ui->setupUi(this);
}

int eqhistForm::getMin() {
    return ui->inputeqhistFormMin->value();
}

int eqhistForm::getMax() {
    return ui->inputeqhistFormMax->value();
}

eqhistForm::~eqhistForm()
{
    delete ui;
}




