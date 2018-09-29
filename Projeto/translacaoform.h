#ifndef TRANSLACAOFORM
#define TRANSLACAOFORM

#include <QWidget>

namespace Ui {
class translacaoForm;
}

class translacaoForm : public QWidget
{
    Q_OBJECT

public:
    explicit translacaoForm(QWidget *parent = 0);
    double getdeltai();
    double getdeltaj();

    ~translacaoForm();

private:
    Ui::translacaoForm *ui;
};

#endif // TRANSLACAOFORM

