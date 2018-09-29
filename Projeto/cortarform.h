#ifndef CORTARFORM
#define CORTARFORM

#include <QWidget>

namespace Ui {
class cortarForm;
}

class cortarForm : public QWidget
{
    Q_OBJECT

public:
    explicit cortarForm(QWidget *parent = 0);
    int getii();
    int getifi();
    int getji();
    int getjf();

    ~cortarForm();

private:
    Ui::cortarForm *ui;
};

#endif // CORTARFORM

