#ifndef REDIMENSIONARFORM
#define REDIMENSIONARFORM

#include <QWidget>

namespace Ui {
class redimensionarForm;
}

class redimensionarForm : public QWidget
{
    Q_OBJECT

public:
    explicit redimensionarForm(QWidget *parent = 0);
    int getl();
    int geth();

    ~redimensionarForm();

private:
    Ui::redimensionarForm *ui;
};

#endif // REDIMENSIONARFORM

