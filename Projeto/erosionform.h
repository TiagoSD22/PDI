#ifndef EROTIONFORM_H
#define EROTIONFORM_H

#include <QWidget>

namespace Ui {
class ErosionForm;
}

class ErosionForm : public QWidget
{
    Q_OBJECT

public:
    explicit ErosionForm(QWidget *parent = 0);
    int getMaskSize();


    ~ErosionForm();

private:
    Ui::ErosionForm *ui;
};

#endif // EROTIONFORM_H
