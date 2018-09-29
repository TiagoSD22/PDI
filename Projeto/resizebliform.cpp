#include "resizebliform.h"
#include "ui_resizebliform.h"

ResizeBLIForm::ResizeBLIForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResizeBLIForm)
{
    ui->setupUi(this);
}

float ResizeBLIForm::getScaleX() {
    return ui->inputScaleXResizeBLIForm->value();
}

float ResizeBLIForm::getScaleY() {
    return ui->inputScaleYResizeBLIForm->value();
}

ResizeBLIForm::~ResizeBLIForm()
{
    delete ui;
}

void ResizeBLIForm::on_opcao_clicked(bool checked)
{
    if(ui->opcao->isChecked()){
        QObject::connect(ui->inputScaleXResizeBLIForm,SIGNAL(valueChanged(double)),ui->inputScaleYResizeBLIForm,SLOT(setValue(double)));
        QObject::connect(ui->inputScaleYResizeBLIForm,SIGNAL(valueChanged(double)),ui->inputScaleXResizeBLIForm,SLOT(setValue(double)));
    }
    else{
        QObject::disconnect(ui->inputScaleXResizeBLIForm,SIGNAL(valueChanged(double)),ui->inputScaleYResizeBLIForm,SLOT(setValue(double)));
        QObject::disconnect(ui->inputScaleYResizeBLIForm,SIGNAL(valueChanged(double)),ui->inputScaleXResizeBLIForm,SLOT(setValue(double)));
    }
}
