#ifndef WAVEFORM
#define WAVEFORM

#include <QWidget>

namespace Ui {
class waveForm;
}

class waveForm : public QWidget
{
    Q_OBJECT

public:
    explicit waveForm(QWidget *parent = 0);
    short getwave();

    ~waveForm();

private:
    Ui::waveForm *ui;
};

#endif // WAVEFORM

