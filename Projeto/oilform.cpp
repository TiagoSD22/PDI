#include "oilform.h"
#include "ui_oilform.h"

oilForm::oilForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oilForm)
{
    ui->setupUi(this);
}

int oilForm::getlevel() {
    return ui->inputoilFormlevel->value();
}

int oilForm::getmascara() {
    return ui->inputoilFormmascara->value();
}

oilForm::~oilForm()
{
    delete ui;
}





