#ifndef FOURIERDISCRETTRANSFORMFORM_H
#define FOURIERDISCRETTRANSFORMFORM_H

#include <QWidget>

namespace Ui {
class FourierDiscretTransformForm;
}

class FourierDiscretTransformForm : public QWidget
{
    Q_OBJECT

public:
    explicit FourierDiscretTransformForm(QWidget *parent = 0);
    ~FourierDiscretTransformForm();

private:
    Ui::FourierDiscretTransformForm *ui;
};

#endif // FOURIERDISCRETTRANSFORMFORM_H
