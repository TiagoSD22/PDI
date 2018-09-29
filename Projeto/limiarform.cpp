#include "limiarform.h"
#include "ui_limiarform.h"

limiarForm::limiarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::limiarForm)
{
    ui->setupUi(this);
}

int limiarForm::getVLimiar() {
    return ui->inputlimiarFormVLimiar->value();
}

limiarForm::~limiarForm()
{
    delete ui;
}



