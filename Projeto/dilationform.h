#ifndef DILATIONFORM_H
#define DILATIONFORM_H

#include <QWidget>

namespace Ui {
class DilationForm;
}

class DilationForm : public QWidget
{
    Q_OBJECT

public:
    explicit DilationForm(QWidget *parent = 0);
    ~DilationForm();

private:
    Ui::DilationForm *ui;
};

#endif // DILATIONFORM_H
