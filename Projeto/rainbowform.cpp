#include "rainbowform.h"
#include "ui_rainbowform.h"

rainbowForm::rainbowForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rainbowForm)
{
    ui->setupUi(this);
}

rainbowForm::~rainbowForm()
{
    delete ui;
}




