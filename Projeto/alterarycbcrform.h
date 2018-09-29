#ifndef ALTERARYCBCRFORM
#define ALTERARYCBCRFORM

#include <QWidget>

namespace Ui {
class alterarYCbCrForm;
}

class alterarYCbCrForm : public QWidget
{
    Q_OBJECT

public:
    explicit alterarYCbCrForm(QWidget *parent = 0);
    int getdeltaY();
    int getdeltaCb();
    int getdeltaCr();

    ~alterarYCbCrForm();

private:
    Ui::alterarYCbCrForm *ui;
};

#endif // ALTERARYCBCRFORM

