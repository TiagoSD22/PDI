#ifndef ALTERARCONTRASTEFORM
#define ALTERARCONTRASTEFORM

#include <QWidget>

namespace Ui {
class alterarcontrasteForm;
}

class alterarcontrasteForm : public QWidget
{
    Q_OBJECT

public:
    explicit alterarcontrasteForm(QWidget *parent = 0);
    int getValue();


    ~alterarcontrasteForm();

private:
    Ui::alterarcontrasteForm *ui;
};

#endif // ALTERARCONTRASTEFORM

