#ifndef ALTERARRGBFORM
#define ALTERARRGBFORM

#include <QWidget>

namespace Ui {
class alterarRGBForm;
}

class alterarRGBForm : public QWidget
{
    Q_OBJECT

public:
    explicit alterarRGBForm(QWidget *parent = 0);
    int getdeltaR();
    int getdeltaG();
    int getdeltaB();

    ~alterarRGBForm();

private:
    Ui::alterarRGBForm *ui;
};

#endif // ALTERARRGBFORM

