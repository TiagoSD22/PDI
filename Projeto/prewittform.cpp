#include "prewittform.h"
#include "ui_prewittform.h"

prewittForm::prewittForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prewittForm)
{
    ui->setupUi(this);
}

prewittForm::~prewittForm()
{
    delete ui;
}



