#include "alterarcontrasteform.h"
#include "ui_alterarcontrasteform.h"

alterarcontrasteForm::alterarcontrasteForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarcontrasteForm)
{
    ui->setupUi(this);
}

int alterarcontrasteForm::getValue() {
    return ui->inputalterarcontrasteFormValue->value();
}

alterarcontrasteForm::~alterarcontrasteForm()
{
    delete ui;
}


