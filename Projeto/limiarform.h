#ifndef LIMIARFORM
#define LIMIARFORM

#include <QWidget>

namespace Ui {
class limiarForm;
}

class limiarForm : public QWidget
{
    Q_OBJECT

public:
    explicit limiarForm(QWidget *parent = 0);
    int getVLimiar();


    ~limiarForm();

private:
    Ui::limiarForm *ui;
};

#endif // LIMIARFORM

