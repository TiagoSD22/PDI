#include "translacaoform.h"
#include "ui_translacaoform.h"

translacaoForm::translacaoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::translacaoForm)
{
    ui->setupUi(this);
}

double translacaoForm::getdeltai() {
    return ui->inputtranslacaoFormdeltai->value();
}

double translacaoForm::getdeltaj() {
    return ui->inputtranslacaoFormdeltaj->value();
}

translacaoForm::~translacaoForm()
{
    delete ui;
}




