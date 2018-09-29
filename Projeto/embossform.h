#ifndef EMBOSSFORM
#define EMBOSSFORM

#include <QWidget>

namespace Ui {
class embossForm;
}

class embossForm : public QWidget
{
    Q_OBJECT

public:
    explicit embossForm(QWidget *parent = 0);
    int modo;

    ~embossForm();

private slots:
    void on_opcao_clicked(bool checked);

private:
    Ui::embossForm *ui;
};

#endif // EMBOSSFORM

