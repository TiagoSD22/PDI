#include "glassform.h"
#include "ui_glassform.h"

glassForm::glassForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::glassForm)
{
    ui->setupUi(this);
}

int glassForm::getdelta() {
    return ui->inputglassFormdelta->value();
}

glassForm::~glassForm()
{
    delete ui;
}




