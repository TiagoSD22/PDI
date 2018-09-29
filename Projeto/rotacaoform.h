#ifndef ROTACAOFORM
#define ROTACAOFORM

#include <QWidget>

namespace Ui {
class rotacaoForm;
}

class rotacaoForm : public QWidget
{
    Q_OBJECT

public:
    explicit rotacaoForm(QWidget *parent = 0);
    float getangulo();

    ~rotacaoForm();

private:
    Ui::rotacaoForm *ui;
};

#endif // ROTACAOFORM

