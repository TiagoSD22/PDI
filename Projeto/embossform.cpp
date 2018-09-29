#include "embossform.h"
#include "ui_embossform.h"

embossForm::embossForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::embossForm)
{
    ui->setupUi(this);
}

embossForm::~embossForm()
{
    delete ui;
}

void embossForm::on_opcao_clicked(bool checked)
{
    if(ui->opcao->isChecked()){
        modo = 1;
    }
    else{
        modo = 0;
    }
}

