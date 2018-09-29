#ifndef SOLARIZEFORM
#define SOLARIZEFORM

#include <QWidget>

namespace Ui {
class solarizeForm;
}

class solarizeForm : public QWidget
{
    Q_OBJECT

public:
    explicit solarizeForm(QWidget *parent = 0);
    int getLimiarR();
    int getLimiarG();
    int getLimiarB();

    ~solarizeForm();

private:
    Ui::solarizeForm *ui;
};

#endif // SOLARIZEFORM

