#ifndef COLORFILTERFORM
#define COLORFILTERFORM

#include <QWidget>

namespace Ui {
class colorfilterForm;
}

class colorfilterForm : public QWidget
{
    Q_OBJECT

public:
    explicit colorfilterForm(QWidget *parent = 0);

    ~colorfilterForm();

private:
    Ui::colorfilterForm *ui;
};

#endif // COLORFILTERFORM

