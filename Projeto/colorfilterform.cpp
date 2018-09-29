#include "colorfilterform.h"
#include "ui_colorfilterform.h"

colorfilterForm::colorfilterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::colorfilterForm)
{
    ui->setupUi(this);
}

colorfilterForm::~colorfilterForm()
{
    delete ui;
}




