#include "bitplaneform.h"
#include "ui_bitplaneform.h"

bitplaneForm::bitplaneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bitplaneForm)
{
    ui->setupUi(this);
}

int bitplaneForm::getPlano() {
    return ui->inputbitplaneFormPlano->value();
}

bitplaneForm::~bitplaneForm()
{
    delete ui;
}


