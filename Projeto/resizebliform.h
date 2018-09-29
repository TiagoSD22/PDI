#ifndef RESIZEBLIFORM_H
#define RESIZEBLIFORM_H

#include <QWidget>

namespace Ui {
class ResizeBLIForm;
}

class ResizeBLIForm : public QWidget
{
    Q_OBJECT

public:
    explicit ResizeBLIForm(QWidget *parent = 0);
    ~ResizeBLIForm();
    float getScaleX();
    float getScaleY();

private slots:

    void on_opcao_clicked(bool checked);

private:
    Ui::ResizeBLIForm *ui;
};

#endif // RESIZEBLIFORM_H
