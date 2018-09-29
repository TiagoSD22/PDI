#ifndef CONTRASTEFORM
#define CONTRASTEFORM

#include <QWidget>

namespace Ui {
class contrasteForm;
}

class contrasteForm : public QWidget
{
    Q_OBJECT

public:
    explicit contrasteForm(QWidget *parent = 0);
    int getMin();
    int getMax();

    ~contrasteForm();

private:
    Ui::contrasteForm *ui;
};

#endif // CONTRASTEFORM

