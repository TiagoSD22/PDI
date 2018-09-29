#ifndef HALFTONEFORM
#define HALFTONEFORM

#include <QWidget>

namespace Ui {
class halftoneForm;
}

class halftoneForm : public QWidget
{
    Q_OBJECT

public:
    explicit halftoneForm(QWidget *parent = 0);
    int modo;

    ~halftoneForm();

private slots:
    void on_opcao_clicked(bool checked);

private:
    Ui::halftoneForm *ui;
};

#endif // HALFTONEFORM

