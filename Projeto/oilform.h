#ifndef OILFORM
#define OILFORM

#include <QWidget>

namespace Ui {
class oilForm;
}

class oilForm : public QWidget
{
    Q_OBJECT

public:
    explicit oilForm(QWidget *parent = 0);
    int getlevel();
    int getmascara();

    ~oilForm();

private:
    Ui::oilForm *ui;
};

#endif // OILFORM

