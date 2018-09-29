#include "erosionform.h"
#include "ui_erosionform.h"

ErosionForm::ErosionForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ErosionForm)
{
    ui->setupUi(this);
}

int ErosionForm::getMaskSize() {
    return ui->inputErosionFormMaskSize->value();
}

ErosionForm::~ErosionForm()
{
    delete ui;
}
