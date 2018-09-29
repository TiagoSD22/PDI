#include "skindetectionycbcrform.h"
#include "ui_skindetectionycbcrform.h"

SkinDetectionYCbCrForm::SkinDetectionYCbCrForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SkinDetectionYCbCrForm)
{
    ui->setupUi(this);
}

SkinDetectionYCbCrForm::~SkinDetectionYCbCrForm()
{
    delete ui;
}
