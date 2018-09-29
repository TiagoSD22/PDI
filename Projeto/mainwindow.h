#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <image.h>
#include <list>
#include <map>
#include <QFile>
#include <QFileDialog>
#include <string>
#include "facade.h"
#include <vector>
#include <QListWidgetItem>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void showLayers();
    void clearApp();
    void releaseResources();

    void addNewLayer(Image *img);
    void removeLayer(int l);
    void moveLayerUp(int l);
    void moveLayerDown(int l);

    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    bool on_actionSave_triggered();

    void on_inputLayerList_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_actionAddLayer_clicked();

    void on_actionPlayFilter_clicked();

    void on_actionConfirmApplyFilter_clicked();

    void on_actionDelLayer_clicked();

    void on_actionCopyToSource_clicked();

    void on_actionUpLayer_clicked();

    void on_actionDownLayer_clicked();

    void on_zoom_valueChanged(int value);

    void on_pushButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    vector< Image* > layers;
    vector<string> imageOperatorsNames;
    Image *currentTarget;
    vector<string> selectedOperator;
    int selectedLayer;
    QWidget *activeContext;
    map<string, ImageOperator* > operators;
};

#endif // MAINWINDOW_H
