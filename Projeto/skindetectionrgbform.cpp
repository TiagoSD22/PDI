#include "skindetectionrgbform.h"
#include "ui_skindetectionrgbform.h"

SkinDetectionRGBForm::SkinDetectionRGBForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SkinDetectionRGBForm)
{
    ui->setupUi(this);
}

SkinDetectionRGBForm::~SkinDetectionRGBForm()
{
    delete ui;
}
