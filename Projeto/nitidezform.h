#ifndef NITIDEZFORM
#define NITIDEZFORM

#include <QWidget>

namespace Ui {
class nitidezForm;
}

class nitidezForm : public QWidget
{
    Q_OBJECT

public:
    explicit nitidezForm(QWidget *parent = 0);
    float getValue();


    ~nitidezForm();

private:
    Ui::nitidezForm *ui;
};

#endif // NITIDEZFORM

