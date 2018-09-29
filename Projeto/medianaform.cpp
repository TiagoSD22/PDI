#include "medianaform.h"
#include "ui_medianaform.h"

medianaForm::medianaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::medianaForm)
{
    ui->setupUi(this);
}

int medianaForm::getMaskSize() {
    return ui->inputmedianaFormMaskSize->value();
}

medianaForm::~medianaForm()
{
    delete ui;
}


