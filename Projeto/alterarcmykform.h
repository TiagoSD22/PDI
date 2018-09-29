#ifndef ALTERARCMYKFORM
#define ALTERARCMYKFORM

#include <QWidget>

namespace Ui {
class alterarcmykForm;
}

class alterarcmykForm : public QWidget
{
    Q_OBJECT

public:
    explicit alterarcmykForm(QWidget *parent = 0);
    int getdeltaC();
    int getdeltaM();
    int getdeltaY();
    int getdeltaK();

    ~alterarcmykForm();

private:
    Ui::alterarcmykForm *ui;
};

#endif // ALTERARCMYKFORM

