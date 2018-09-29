#ifndef BLURFORM
#define BLURFORM

#include <QWidget>

namespace Ui {
class blurForm;
}

class blurForm : public QWidget
{
    Q_OBJECT

public:
    explicit blurForm(QWidget *parent = 0);
    int getMaskSize();


    ~blurForm();

private:
    Ui::blurForm *ui;
};

#endif // BLURFORM

