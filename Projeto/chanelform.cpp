#include "chanelform.h"
#include "ui_chanelform.h"

chanelForm::chanelForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chanelForm)
{
    ui->setupUi(this);
}

const char *chanelForm::getcanal() {
    const char *c = ui->inputchanelFormcanal->currentText().toStdString().c_str();
    return c;
}

int chanelForm::getMin() {
    return ui->inputchanelFormMin->value();
}

int chanelForm::getMax() {
    return ui->inputchanelFormMax->value();
}

chanelForm::~chanelForm()
{
    delete ui;
}


