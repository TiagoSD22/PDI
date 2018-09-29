#include "waveform.h"
#include "ui_waveform.h"

waveForm::waveForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::waveForm)
{
    ui->setupUi(this);
}

short waveForm::getwave() {
    return ui->inputwaveFormwave->value();
}

waveForm::~waveForm()
{
    delete ui;
}




