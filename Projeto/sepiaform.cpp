#include "sepiaform.h"
#include "ui_sepiaform.h"

sepiaForm::sepiaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sepiaForm)
{
    ui->setupUi(this);
}

int sepiaForm::getVLimiar() {
    return ui->inputsepiaFormVLimiar->value();
}

sepiaForm::~sepiaForm()
{
    delete ui;
}





