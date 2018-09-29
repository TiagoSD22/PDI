#include "rotacaoform.h"
#include "ui_rotacaoform.h"

rotacaoForm::rotacaoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rotacaoForm)
{
    ui->setupUi(this);
}

float rotacaoForm::getangulo() {
    return ui->inputrotacaoFormangulo->value();
}

rotacaoForm::~rotacaoForm()
{
    delete ui;
}



