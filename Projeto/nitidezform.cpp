#include "nitidezform.h"
#include "ui_nitidezform.h"

nitidezForm::nitidezForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nitidezForm)
{
    ui->setupUi(this);
}

float nitidezForm::getValue() {
    return ui->inputnitidezFormValue->value();
}

nitidezForm::~nitidezForm()
{
    delete ui;
}



