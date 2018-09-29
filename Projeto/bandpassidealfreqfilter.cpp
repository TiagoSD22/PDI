#include "bandpassidealfreqfilter.h"
#include "ui_bandpassidealfreqfilter.h"

BandPassIdealFreqFilterForm::BandPassIdealFreqFilterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BandPassIdealFreqFilterForm)
{
    ui->setupUi(this);
}

BandPassIdealFreqFilterForm::~BandPassIdealFreqFilterForm()
{
    delete ui;
}

double BandPassIdealFreqFilterForm::getCutOff() {
    return ui->inputCutOffFreq->value();
}

double BandPassIdealFreqFilterForm::getBand() {
    return ui->inputFreqBand->value();
}


bool BandPassIdealFreqFilterForm::isShowSpec() {
    return ui->inputShowSpectrum->isChecked();
}

bool BandPassIdealFreqFilterForm::isReject() {
    return ui->inputReject->isChecked();
}


