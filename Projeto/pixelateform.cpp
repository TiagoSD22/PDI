#include "pixelateform.h"
#include "ui_pixelateform.h"

pixelateForm::pixelateForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pixelateForm)
{
    ui->setupUi(this);
}

int pixelateForm::getMaskSize() {
    return ui->inputpixelateFormMaskSize->value();
}

pixelateForm::~pixelateForm()
{
    delete ui;
}


