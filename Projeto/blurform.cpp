#include "blurform.h"
#include "ui_blurform.h"

blurForm::blurForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::blurForm)
{
    ui->setupUi(this);
}

int blurForm::getMaskSize() {
    return ui->inputblurFormMaskSize->value();
}

blurForm::~blurForm()
{
    delete ui;
}


