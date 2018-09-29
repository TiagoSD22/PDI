#include "halftoneform.h"
#include "ui_halftoneform.h"

halftoneForm::halftoneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::halftoneForm)
{
    ui->setupUi(this);
}

halftoneForm::~halftoneForm()
{
    delete ui;
}

void halftoneForm::on_opcao_clicked(bool checked)
{
    if(ui->opcao->isChecked()){
        modo = 1;
    }
    else{
        modo = 0;
    }
}
