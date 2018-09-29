#ifndef MONOFORM
#define MONOFORM

#include <QWidget>

namespace Ui {
class monoForm;
}

class monoForm : public QWidget
{
    Q_OBJECT

public:
    explicit monoForm(QWidget *parent = 0);
    const char *getcanal();

    ~monoForm();

private:
    Ui::monoForm *ui;
};

#endif // MONOFORM

