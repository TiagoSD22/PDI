#ifndef PIXELATEFORM
#define PIXELATEFORM

#include <QWidget>

namespace Ui {
class pixelateForm;
}

class pixelateForm : public QWidget
{
    Q_OBJECT

public:
    explicit pixelateForm(QWidget *parent = 0);
    ~pixelateForm();
    int getMaskSize();

private:
    Ui::pixelateForm *ui;
};

#endif // PIXELATEFORM

