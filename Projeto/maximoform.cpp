#include "maximoform.h"
#include "ui_maximoform.h"

maximoForm::maximoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maximoForm)
{
    ui->setupUi(this);
}

int maximoForm::getMaskSize() {
    return ui->inputmaximoFormMaskSize->value();
}

maximoForm::~maximoForm()
{
    delete ui;
}

