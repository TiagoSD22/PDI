#ifndef ALTERARHSIFORM
#define ALTERARHSIFORM

#include <QWidget>
#include <QSpinBox>
#include <QDial>

namespace Ui {
class alterarhsiForm;
}

class alterarhsiForm : public QWidget
{
    Q_OBJECT

public:
    explicit alterarhsiForm(QWidget *parent = 0);
    float getdeltaH();
    int getdeltaS();
    int getdeltaI();

    ~alterarhsiForm();

private:
    Ui::alterarhsiForm *ui;
};

#endif // ALTERARHSIFORM
