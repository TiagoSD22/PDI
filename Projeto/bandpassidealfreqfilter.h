#ifndef BANDPASSIDEALFREQFILTERFORMFORM_H
#define BANDPASSIDEALFREQFILTERFORMFORM_H

#include <QWidget>
#include "ui_bandpassidealfreqfilter.h"

namespace Ui {
class BandPassIdealFreqFilterForm;
}

class BandPassIdealFreqFilterForm : public QWidget
{
    Q_OBJECT

public:
    explicit BandPassIdealFreqFilterForm(QWidget *parent = 0);
    ~BandPassIdealFreqFilterForm();
    double getCutOff();
    double getBand();
    bool isReject();
    bool isShowSpec();


private:
    Ui::BandPassIdealFreqFilterForm *ui;
};

#endif
