#include "monoform.h"
#include "ui_monoform.h"

monoForm::monoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::monoForm)
{
    ui->setupUi(this);
}

const char *monoForm::getcanal() {
    const char *c = ui->inputmonoFormcanal->currentText().toStdString().c_str();
    return c;
}

monoForm::~monoForm()
{
    delete ui;
}

