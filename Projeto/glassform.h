#ifndef GLASSFORM
#define GLASSFORM

#include <QWidget>

namespace Ui {
class glassForm;
}

class glassForm : public QWidget
{
    Q_OBJECT

public:
    explicit glassForm(QWidget *parent = 0);
    int getdelta();


    ~glassForm();

private:
    Ui::glassForm *ui;
};

#endif // GLASSFORM

