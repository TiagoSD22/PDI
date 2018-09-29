#include "cartoonform.h"
#include "ui_cartoonform.h"

cartoonForm::cartoonForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cartoonForm)
{
    ui->setupUi(this);
}

int cartoonForm::getVLimiar() {
    return ui->inputcartoonFormVLimiar->value();
}

cartoonForm::~cartoonForm()
{
    delete ui;
}




