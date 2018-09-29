#ifndef EQHISTFORM
#define EQHISTFORM

#include <QWidget>

namespace Ui {
class eqhistForm;
}

class eqhistForm : public QWidget
{
    Q_OBJECT

public:
    explicit eqhistForm(QWidget *parent = 0);
    int getMin();
    int getMax();

    ~eqhistForm();

private:
    Ui::eqhistForm *ui;
};

#endif // EQHISTFORM

