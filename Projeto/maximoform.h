#ifndef MAXIMOFORM_H
#define MAXIMOFORM_H

#include <QWidget>

namespace Ui {
class maximoForm;
}

class maximoForm : public QWidget
{
    Q_OBJECT

public:
    explicit maximoForm(QWidget *parent = 0);
    ~maximoForm();
    int getMaskSize();

private:
    Ui::maximoForm *ui;
};

#endif // MAXIMOFORM_H

