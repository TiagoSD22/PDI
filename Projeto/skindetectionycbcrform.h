#ifndef SKINDETECTIONYCBCRFORM_H
#define SKINDETECTIONYCBCRFORM_H

#include <QWidget>

namespace Ui {
class SkinDetectionYCbCrForm;
}

class SkinDetectionYCbCrForm : public QWidget
{
    Q_OBJECT

public:
    explicit SkinDetectionYCbCrForm(QWidget *parent = 0);
    ~SkinDetectionYCbCrForm();

private:
    Ui::SkinDetectionYCbCrForm *ui;
};

#endif // SKINDETECTIONYCBCRFORM_H
