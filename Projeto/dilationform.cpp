#include "dilationform.h"
#include "ui_dilationform.h"

DilationForm::DilationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DilationForm)
{
    ui->setupUi(this);
}

DilationForm::~DilationForm()
{
    delete ui;
}
