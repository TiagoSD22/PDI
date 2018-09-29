#ifndef SKINDETECTIONRGBFORM_H
#define SKINDETECTIONRGBFORM_H

#include <QWidget>

namespace Ui {
class SkinDetectionRGBForm;
}

class SkinDetectionRGBForm : public QWidget
{
    Q_OBJECT

public:
    explicit SkinDetectionRGBForm(QWidget *parent = 0);
    ~SkinDetectionRGBForm();

private:
    Ui::SkinDetectionRGBForm *ui;
};

#endif // SKINDETECTIONRGBFORM_H
