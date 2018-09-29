#include "fourierdiscrettransformform.h"
#include "ui_fourierdiscrettransformform.h"

FourierDiscretTransformForm::FourierDiscretTransformForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourierDiscretTransformForm)
{
    ui->setupUi(this);
}

FourierDiscretTransformForm::~FourierDiscretTransformForm()
{
    delete ui;
}
