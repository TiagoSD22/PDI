#ifndef GAMMAFORM_H
#define GAMMAFORM_H

#include <QWidget>

namespace Ui {
class gammaForm;
}

class gammaForm : public QWidget
{
    Q_OBJECT

public:
    explicit gammaForm(QWidget *parent = 0);
    float getVGamma();


    ~gammaForm();

private:
    Ui::gammaForm *ui;
};

#endif // GAMMAFORM_H

