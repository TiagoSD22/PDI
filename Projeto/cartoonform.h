#ifndef CARTOONFORM
#define CARTOONFORM

#include <QWidget>

namespace Ui {
class cartoonForm;
}

class cartoonForm : public QWidget
{
    Q_OBJECT

public:
    explicit cartoonForm(QWidget *parent = 0);
    int getVLimiar();


    ~cartoonForm();

private:
    Ui::cartoonForm *ui;
};

#endif // CARTOONFORM

