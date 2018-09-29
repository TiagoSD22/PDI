#ifndef WARPINGFORM
#define WARPINGFORM

#include <QWidget>

namespace Ui {
class warpingForm;
}

class warpingForm : public QWidget
{
    Q_OBJECT

public:
    explicit warpingForm(QWidget *parent = 0);
    float geta();
    float getb();
    float getc();
    float getd();
    float gete();
    float getf();
    float getg();
    float geth();

    ~warpingForm();

private:
    Ui::warpingForm *ui;
};

#endif // WARPINGFORM

