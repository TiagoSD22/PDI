#ifndef RAINBOWFORM
#define RAINBOWFORM

#include <QWidget>

namespace Ui {
class rainbowForm;
}

class rainbowForm : public QWidget
{
    Q_OBJECT

public:
    explicit rainbowForm(QWidget *parent = 0);

    ~rainbowForm();

private:
    Ui::rainbowForm *ui;
};

#endif // RAINBOWFORM

