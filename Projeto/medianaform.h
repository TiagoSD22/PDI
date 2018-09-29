#ifndef MEDIANAFORM
#define MEDIANAFORM

#include <QWidget>

namespace Ui {
class medianaForm;
}

class medianaForm : public QWidget
{
    Q_OBJECT

public:
    explicit medianaForm(QWidget *parent = 0);
    int getMaskSize();


    ~medianaForm();

private:
    Ui::medianaForm *ui;
};

#endif // MEDIANAFORM

