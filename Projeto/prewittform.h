#ifndef PREWITTFORM
#define PREWITTFORM

#include <QWidget>

namespace Ui {
class prewittForm;
}

class prewittForm : public QWidget
{
    Q_OBJECT

public:
    explicit prewittForm(QWidget *parent = 0);

    ~prewittForm();

private:
    Ui::prewittForm *ui;
};

#endif // PREWITTFORM

