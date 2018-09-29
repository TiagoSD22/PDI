#ifndef CHANELFORM
#define CHANELFORM

#include <QWidget>

namespace Ui {
class chanelForm;
}

class chanelForm : public QWidget
{
    Q_OBJECT

public:
    explicit chanelForm(QWidget *parent = 0);
    const char *getcanal();
    int getMin();
    int getMax();

    ~chanelForm();

private:
    Ui::chanelForm *ui;
};

#endif // CHANELFORM

