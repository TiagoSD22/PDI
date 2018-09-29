#ifndef BITPLANEFORM
#define BITPLANEFORM

#include <QWidget>

namespace Ui {
class bitplaneForm;
}

class bitplaneForm : public QWidget
{
    Q_OBJECT

public:
    explicit bitplaneForm(QWidget *parent = 0);
    int getPlano();


    ~bitplaneForm();

private:
    Ui::bitplaneForm *ui;
};

#endif // BITPLANEFORM

