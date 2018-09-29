#ifndef SEPIAFORM
#define SEPIAFORM

#include <QWidget>

namespace Ui {
class sepiaForm;
}

class sepiaForm : public QWidget
{
    Q_OBJECT

public:
    explicit sepiaForm(QWidget *parent = 0);
    int getVLimiar();


    ~sepiaForm();

private:
    Ui::sepiaForm *ui;
};

#endif // SEPIAFORM

