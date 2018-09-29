#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filters.h"
#include "facade.h"
#include <iostream>
#include "skindetectionrgbform.h"
#include "erosionform.h"
#include <sstream>
#include "skindetectionycbcrform.h"
#include "resizebliform.h"
#include "gammaform.h"
#include "halftoneform.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /** BEGIN: Configure App Initial State */
    currentTarget = nullptr;
    activeContext = nullptr;
    /** END: Configure App Initial State */

    /** BEGIN: Configure Operators **/
    ImageOperator *grayScaleOp = new ImageOperator("Escala de Cinza", grayScaleFacade); //cria um novo operador de imagens
    grayScaleOp->parent = this; //define o parent do widget
    grayScaleOp->widget = new QWidget(); //define o widget que mostra opcoes especificas do operador

    ImageOperator *skinDetectRGBOp = new ImageOperator("(Detectar pele (pelo modelo RGB)", Skin_RGBFacade);
    skinDetectRGBOp->parent = this;
    skinDetectRGBOp->widget = new SkinDetectionRGBForm();

    ImageOperator *skinDetectYCbCrOp = new ImageOperator("Detectar pele (pelo modelo YCbCr)", Skin_YCbCrFacade);
    skinDetectYCbCrOp->parent = this;
    skinDetectYCbCrOp->widget = new SkinDetectionYCbCrForm();

    ImageOperator *skinDetectHSIOp = new ImageOperator("Detectar pele (pelo modelo HSI)", Skin_HSIFacade);
    skinDetectHSIOp->parent = this;
    skinDetectHSIOp->widget = new QWidget();

    ImageOperator *skinDetectColorModels = new ImageOperator("Detectar pele (combinação de modelos de cores)", Skin_ColorModelsFacade);
    skinDetectColorModels->parent = this;
    skinDetectColorModels->widget = new QWidget();

    ImageOperator *faceDetectionOp = new ImageOperator("Detectar rostos", faceDetectionFacade);
    faceDetectionOp->parent = this;
    faceDetectionOp->widget = new QWidget();

    ImageOperator *alterarcontrasteOp = new ImageOperator("Alterar Contraste", alterarcontrasteFacade);
    alterarcontrasteOp->parent = this;
    alterarcontrasteOp->widget = new alterarcontrasteForm();

    ImageOperator *alterarRGBOp = new ImageOperator("Alterar RGB", alterarRGBFacade);
    alterarRGBOp->parent = this;
    alterarRGBOp->widget = new alterarRGBForm();

    ImageOperator *alterarYCbCrOp = new ImageOperator("Alterar YCbCr", alterarYCbCrFacade);
    alterarYCbCrOp->parent = this;
    alterarYCbCrOp->widget = new alterarYCbCrForm();

    ImageOperator *alterarcmykOp = new ImageOperator("Alterar CMYK", alterarcmykFacade);
    alterarcmykOp->parent = this;
    alterarcmykOp->widget = new alterarcmykForm();

    ImageOperator *colorfilterOp = new ImageOperator("Filtro de Cor 1", colorfilterFacade);
    colorfilterOp->parent = this;
    colorfilterOp->widget = new colorfilterForm();

    ImageOperator *alterarhsiOp = new ImageOperator("Alterar HSI", alterarhsiFacade);
    alterarhsiOp->parent = this;
    alterarhsiOp->widget = new alterarhsiForm();

    ImageOperator *bitplaneOp = new ImageOperator("Extrair Plano de Bits", bitplaneFacade);
    bitplaneOp->parent = this;
    bitplaneOp->widget = new bitplaneForm();

    ImageOperator *blurOp = new ImageOperator("Blur", blurFacade);
    blurOp->parent = this;
    blurOp->widget = new blurForm();

    ImageOperator *simplecolorbalanceOp = new ImageOperator("Balanço Simples de Cor",simplecolorbalanceFacade);
    simplecolorbalanceOp->parent = this;
    simplecolorbalanceOp->widget = new QWidget();

    ImageOperator *contrasteOp = new ImageOperator("Normalizar Contraste", contrasteFacade);
    contrasteOp->parent = this;
    contrasteOp->widget = new contrasteForm();

    ImageOperator *cortarOp = new ImageOperator("Cortar", cortarFacade);
    cortarOp->parent = this;
    cortarOp->widget = new cortarForm();

    ImageOperator *pencildrawOp = new ImageOperator("Desenho a lápis",pencildrawFacade);
    pencildrawOp->parent = this;
    pencildrawOp->widget = new QWidget();

    ImageOperator *parabolaOp = new ImageOperator("Parabola",parabolaFacade);
    parabolaOp->parent = this;
    parabolaOp->widget = new QWidget();

    ImageOperator *horizontalflipOp = new ImageOperator("Espelho Horizontal",horizontalflipFacade);
    horizontalflipOp->parent = this;
    horizontalflipOp->widget = new QWidget();

    ImageOperator *verticalflipOp = new ImageOperator("Espelho Vertical",verticalflipFacade);
    verticalflipOp->parent = this;
    verticalflipOp->widget = new QWidget();

    ImageOperator *rotacionarhorarioOp = new ImageOperator("Rotacionar 90º Horário",rotacionarhorarioFacade);
    rotacionarhorarioOp->parent = this;
    rotacionarhorarioOp->widget = new QWidget();

    ImageOperator *rotacionarantihorarioOp = new ImageOperator("Rotacionar 90º Anti-Horário",rotacionarantihorarioFacade);
    rotacionarantihorarioOp->parent = this;
    rotacionarantihorarioOp->widget = new QWidget();

    ImageOperator *negativoOp = new ImageOperator("Negativo",negativoFacade);
    negativoOp->parent = this;
    negativoOp->widget = new QWidget();

    ImageOperator *medianaOp = new ImageOperator("Mediana",medianaFacade);
    medianaOp->parent = this;
    medianaOp->widget = new medianaForm();

    ImageOperator *nitidezOp = new ImageOperator("Nitidez",nitidezFacade);
    nitidezOp->parent = this;
    nitidezOp->widget = new nitidezForm();

    ImageOperator *laplaceOp = new ImageOperator("Laplaciana",laplaceFacade);
    laplaceOp->parent = this;
    laplaceOp->widget = new QWidget();

    ImageOperator *limiarOp = new ImageOperator("Binarizar(Limiar)",limiarFacade);
    limiarOp->parent = this;
    limiarOp->widget = new limiarForm();

    ImageOperator *glassOp = new ImageOperator("Instabilidade",glassFacade);
    glassOp->parent = this;
    glassOp->widget = new glassForm();

    ImageOperator *sobelOp = new ImageOperator("Sobel",sobelFacade);
    sobelOp->parent = this;
    sobelOp->widget = new QWidget();

    ImageOperator *prewittOp = new ImageOperator("Prewitt",prewittFacade);
    prewittOp->parent = this;
    prewittOp->widget = new prewittForm();

    ImageOperator *redimensionarOp = new ImageOperator("Redimensionar",redimensionarFacade);
    redimensionarOp->parent = this;
    redimensionarOp->widget = new redimensionarForm();

    ImageOperator *robertsOp = new ImageOperator("Roberts",robertsFacade);
    robertsOp->parent = this;
    robertsOp->widget = new QWidget();

    ImageOperator *translacaoOp = new ImageOperator("Translação",translacaoFacade);
    translacaoOp->parent = this;
    translacaoOp->widget = new translacaoForm();

    ImageOperator *embossOp = new ImageOperator("Emboss",embossFacade);
    embossOp->parent = this;
    embossOp->widget = new embossForm();

    ImageOperator *sepiaOp = new ImageOperator("Sepia",sepiaFacade);
    sepiaOp->parent = this;
    sepiaOp->widget = new sepiaForm();

    ImageOperator *erosionOp = new ImageOperator("Erosão(Mínimo)", erosionFacade);
    erosionOp->parent = this;
    erosionOp->widget = new ErosionForm();

    ImageOperator *maximoOp = new ImageOperator("Dilatação(Máximo)", maximoFacade);
    maximoOp->parent = this;
    maximoOp->widget = new maximoForm();

    ImageOperator *pixelateOp = new ImageOperator("Pixelate", pixelateFacade);
    pixelateOp->parent = this;
    pixelateOp->widget = new pixelateForm();

    ImageOperator *eqhistOp = new ImageOperator("Equalizar Histograma", eqhistFacade);
    eqhistOp->parent = this;
    eqhistOp->widget = new eqhistForm();

    ImageOperator *gammaOp = new ImageOperator("Correção Gamma", gammaFacade);
    gammaOp->parent = this;
    gammaOp->widget = new gammaForm();

    ImageOperator *monoOp = new ImageOperator("Mono Canal", monoFacade);
    monoOp->parent = this;
    monoOp->widget = new monoForm();

    ImageOperator *rotacaoOp = new ImageOperator("Rotação", rotacaoFacade);
    rotacaoOp->parent = this;
    rotacaoOp->widget = new rotacaoForm();

    ImageOperator *waveOp = new ImageOperator("Distorção Onda", waveFacade);
    waveOp->parent = this;
    waveOp->widget = new waveForm();

    ImageOperator *chanelOp = new ImageOperator("Equalização de Canal",chanelFacade);
    chanelOp->parent = this;
    chanelOp->widget = new chanelForm();

    ImageOperator *warpingOp = new ImageOperator("Warping",warpingFacade);
    warpingOp->parent = this;
    warpingOp->widget = new warpingForm();

    ImageOperator *resizeBLIOp = new ImageOperator("Reescalar", resizebliFacade);
    resizeBLIOp->parent = this;
    resizeBLIOp->widget = new ResizeBLIForm();

    ImageOperator *cartoonOp = new ImageOperator("Cartoon", cartoonFacade);
    cartoonOp->parent = this;
    cartoonOp->widget = new cartoonForm();

    ImageOperator *oilOp = new ImageOperator("Pintura a Óleo", oilFacade);
    oilOp->parent = this;
    oilOp->widget = new oilForm();

    ImageOperator *halftoneOp = new ImageOperator("Halftone", halftoneFacade);
    halftoneOp->parent = this;
    halftoneOp->widget = new halftoneForm();

    ImageOperator *solarizeOp = new ImageOperator("Solarize", solarizeFacade);
    solarizeOp->parent = this;
    solarizeOp->widget = new solarizeForm();

    ImageOperator *rainbowOp = new ImageOperator("Rainbow", rainbowFacade);
    rainbowOp->parent = this;
    rainbowOp->widget = new rainbowForm();

    ImageOperator *fourierSlowSpecOp = new ImageOperator("Transformada Discreta de Fourier (Lento)", fourierSpectrum);
    fourierSlowSpecOp->parent = this;
    fourierSlowSpecOp->widget = new QWidget();

    ImageOperator *filterPassBand = new ImageOperator("Rejeita/Passa Banda no Domínio de Fourier", rejectbandfreq);
    filterPassBand->parent = this;
    filterPassBand->widget = new BandPassIdealFreqFilterForm();

    /** END: Configure Operators **/

    /** BEGIN: ADD OPERATORS DO GUI **/
    vector<ImageOperator*> listOps; //agenda de futuros registros de operadores
    listOps.push_back(alterarcontrasteOp);
    imageOperatorsNames.push_back(alterarcontrasteOp->name);

    listOps.push_back(alterarRGBOp);
    imageOperatorsNames.push_back(alterarRGBOp->name);

    listOps.push_back(alterarYCbCrOp);
    imageOperatorsNames.push_back(alterarYCbCrOp->name);

    listOps.push_back(alterarhsiOp);
    imageOperatorsNames.push_back(alterarhsiOp->name);

    listOps.push_back(alterarcmykOp);
    imageOperatorsNames.push_back(alterarcmykOp->name);

    listOps.push_back(simplecolorbalanceOp);
    imageOperatorsNames.push_back(simplecolorbalanceOp->name);

    listOps.push_back(limiarOp);
    imageOperatorsNames.push_back(limiarOp->name);

    listOps.push_back(blurOp);
    imageOperatorsNames.push_back(blurOp->name);

    listOps.push_back(cartoonOp);
    imageOperatorsNames.push_back(cartoonOp->name);

    listOps.push_back(gammaOp);
    imageOperatorsNames.push_back(gammaOp->name);

    listOps.push_back(cortarOp);
    imageOperatorsNames.push_back(cortarOp->name);

    listOps.push_back(pencildrawOp);
    imageOperatorsNames.push_back(pencildrawOp->name);

    listOps.push_back(skinDetectRGBOp);
    imageOperatorsNames.push_back(skinDetectRGBOp->name);

    listOps.push_back(maximoOp);
    imageOperatorsNames.push_back(maximoOp->name);

    listOps.push_back(waveOp);
    imageOperatorsNames.push_back(waveOp->name);

    listOps.push_back(embossOp);
    imageOperatorsNames.push_back(embossOp->name);

    listOps.push_back(chanelOp);
    imageOperatorsNames.push_back(chanelOp->name);

    listOps.push_back(eqhistOp);
    imageOperatorsNames.push_back(eqhistOp->name);

    listOps.push_back(erosionOp);
    imageOperatorsNames.push_back(erosionOp->name);

    listOps.push_back(grayScaleOp);
    imageOperatorsNames.push_back(grayScaleOp->name);

    listOps.push_back(horizontalflipOp);
    imageOperatorsNames.push_back(horizontalflipOp->name);

    listOps.push_back(verticalflipOp);
    imageOperatorsNames.push_back(verticalflipOp->name);

    listOps.push_back(bitplaneOp);
    imageOperatorsNames.push_back(bitplaneOp->name);

    listOps.push_back(colorfilterOp);
    imageOperatorsNames.push_back(colorfilterOp->name);

    listOps.push_back(halftoneOp);
    imageOperatorsNames.push_back(halftoneOp->name);

    listOps.push_back(glassOp);
    imageOperatorsNames.push_back(glassOp->name);

    listOps.push_back(laplaceOp);
    imageOperatorsNames.push_back(laplaceOp->name);

    listOps.push_back(medianaOp);
    imageOperatorsNames.push_back(medianaOp->name);

    listOps.push_back(monoOp);
    imageOperatorsNames.push_back(monoOp->name);

    listOps.push_back(negativoOp);
    imageOperatorsNames.push_back(negativoOp->name);

    listOps.push_back(nitidezOp);
    imageOperatorsNames.push_back(nitidezOp->name);

    listOps.push_back(contrasteOp);
    imageOperatorsNames.push_back(contrasteOp->name);

    listOps.push_back(oilOp);
    imageOperatorsNames.push_back(oilOp->name);

    listOps.push_back(parabolaOp);
    imageOperatorsNames.push_back(parabolaOp->name);

    listOps.push_back(pixelateOp);
    imageOperatorsNames.push_back(pixelateOp->name);

    listOps.push_back(prewittOp);
    imageOperatorsNames.push_back(prewittOp->name);

    listOps.push_back(rainbowOp);
    imageOperatorsNames.push_back(rainbowOp->name);

    listOps.push_back(redimensionarOp);
    imageOperatorsNames.push_back(redimensionarOp->name);

    listOps.push_back(resizeBLIOp);
    imageOperatorsNames.push_back(resizeBLIOp->name);

    listOps.push_back(robertsOp);
    imageOperatorsNames.push_back(robertsOp->name);

    listOps.push_back(rotacaoOp);
    imageOperatorsNames.push_back(rotacaoOp->name);

    listOps.push_back(rotacionarantihorarioOp);
    imageOperatorsNames.push_back(rotacionarantihorarioOp->name);

    listOps.push_back(rotacionarhorarioOp);
    imageOperatorsNames.push_back(rotacionarhorarioOp->name);

    listOps.push_back(sepiaOp);
    imageOperatorsNames.push_back(sepiaOp->name);

    listOps.push_back(sobelOp);
    imageOperatorsNames.push_back(sobelOp->name);

    listOps.push_back(solarizeOp);
    imageOperatorsNames.push_back(solarizeOp->name);

    listOps.push_back(translacaoOp);
    imageOperatorsNames.push_back(translacaoOp->name);

    listOps.push_back(warpingOp);
    imageOperatorsNames.push_back(warpingOp->name);

    listOps.push_back(skinDetectRGBOp);
    imageOperatorsNames.push_back(skinDetectRGBOp->name);

    listOps.push_back(skinDetectYCbCrOp);
    imageOperatorsNames.push_back(skinDetectYCbCrOp->name);

    listOps.push_back(skinDetectHSIOp);
    imageOperatorsNames.push_back(skinDetectHSIOp->name);

    listOps.push_back(skinDetectColorModels);
    imageOperatorsNames.push_back(skinDetectColorModels->name);

    listOps.push_back(faceDetectionOp);
    imageOperatorsNames.push_back(faceDetectionOp->name);

    listOps.push_back(fourierSlowSpecOp);
    imageOperatorsNames.push_back(fourierSlowSpecOp->name);

    listOps.push_back(filterPassBand);
    imageOperatorsNames.push_back(filterPassBand->name);

    for (size_t i = 0; i < imageOperatorsNames.size(); i++) {
        operators[imageOperatorsNames[i]] = listOps[i]; //efetua registro de agendado
        ui->inputFilter->addItem(QString().fromStdString(imageOperatorsNames[i])); //adiciona nome do filtro na lista de filtros da GUI
    }
    /** END: ADD OPERATORS DO GUI **/

    /** BEGIN: CONFIGURE INITIAL STATE OF GUI */
    Image *img = createImage(800,600); //cria imagem padrao
    ui->inputLayerList->addItem("Original"); //camada inicial para trabalho

    selectedLayer = 0; //camada selecionada
    this->ui->inputLayerList->setItemSelected(ui->inputLayerList->item(0), true); //atualiza selecao da lista de camadas

    layers.push_back(img); //registra camada
    showLayers(); //mostra camadas
    img = nullptr;
    /** END: CONFIGURE INITIAL STATE OF GUI */
}

void MainWindow::addNewLayer(Image *img) {
    layers.push_back(img);

    int i = layers.size();
    stringstream oo;
    oo<<"Imagem"<<" "<<i;

    ui->inputLayerList->addItem(QString().fromStdString(oo.str()));
}

void MainWindow::removeLayer(int l) {
    if (selectedLayer >=  0) {
        vector< Image* > tmp;

        for (int i = 0; i < layers.size(); i++) {
            if (i != l) {
                tmp.push_back(layers.at(i));
            }
        }

        layers.clear();
        layers.insert( layers.begin(), tmp.begin(), tmp.end());


        if (l == selectedLayer) {
            if (layers.size() > 0) {
                selectedLayer--;
            } else {
                selectedLayer = -1;
            }
        } else if (l < selectedLayer) {
            selectedLayer--;
        }
    }
}

void MainWindow::moveLayerUp(int l) {
    if (l > 0) {
        int b = l - 1;

        Image *tmp = layers[b];
        layers[b] = layers[l];
        layers[l] = tmp;
        showLayers();
    }
}

void MainWindow::moveLayerDown(int l) {
    if (l < layers.size()-1) {
        int b = layers.size()-1;
        Image *tmp = layers[b];
        layers[b] = layers[l];
        layers[l] = tmp;
        showLayers();
    }
}

void MainWindow::releaseResources() {
    while (!layers.empty()) {
        Image * img = layers.back();
        layers.pop_back();
        delete img;
        img = nullptr;
    }
    operators.clear();
    /*
    for (map<string, ImageOperator* >::iterator it; it != operators.end(); it++) {
        pair<string, ImageOperator* > p = *it;
        ImageOperator *op = p.second;
        delete op;
    }*/
}

void MainWindow::clearApp() {
    releaseResources();
    ui->sourceImageViewer->scene()->clear();
}

void MainWindow::showLayers() {
    if (layers.size() > 0 && selectedLayer >= 0) {
        Image *selImg = layers.at(selectedLayer);
        float zoom = (float)ui->zoom->value()/100;
        selImg = Redimensionar(selImg,selImg->width * zoom,selImg->height * zoom);

        QImage myImg = getImageFrom(selImg);

        QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height()); // ui->graphicsView->scene();

        scene->addPixmap(QPixmap::fromImage(myImg));

        ui->sourceImageViewer->setScene(scene);
        //if (!noresize) {
        ui->sourceImageViewer->adjustSize();
        //}
        ui->sourceImageViewer->repaint();
    } else {
        Image *black = createImage(800, 600);
        QImage myImg = getImageFrom(black);
        QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height()); // ui->graphicsView->scene();

        scene->addPixmap(QPixmap::fromImage(myImg));

        ui->sourceImageViewer->setScene(scene);
        //if (!noresize) {
        ui->sourceImageViewer->adjustSize();
        //}
        ui->sourceImageViewer->repaint();
    }
    ui->inputLayerList->setFocus();
}

MainWindow::~MainWindow()
{

    releaseResources();
    if (currentTarget != nullptr) {
        delete currentTarget;
    }
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QFileDialog dia(this);
    dia.setFileMode(QFileDialog::AnyFile);
    dia.setNameFilter(tr("Todos os Arquivos(*);;BMP (*.bmp);;JPG (*.jpg);;PNG (*.png)"));
    dia.setViewMode(QFileDialog::Detail);
    QStringList fileNames;
    if (dia.exec())
        fileNames = dia.selectedFiles();
    if (fileNames.size() > 0) {
        QString path = fileNames.at(0);
        Image *newimg = loadImage(path.toStdString().data());
        /*if(newimg->width > 800 && newimg->height > 600){
            newimg = BLIScale(loadImage(path.toStdString().data()),0.52,0.52);
        }*/
        cout<<": "<<selectedLayer<<endl;
        if (layers.size() > 0) {
            if (selectedLayer >= 0) {
                Image *img = layers.at(selectedLayer);
                layers[selectedLayer] = newimg;
                delete img;
                img = nullptr;
            } else {
                Image *img = layers.front();
                layers[0] = newimg;
                delete img;
                img = nullptr;
            }
        } else {
            layers.push_back(newimg);
        }

    }
    showLayers();
}

void MainWindow::on_inputLayerList_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{

    int idx = ui->inputLayerList->currentRow();

    selectedLayer = idx;

    if (ui->inputLayerList->count() > 0 && idx < layers.size()) {

        selectedLayer = idx;
        Image *img = layers.at(idx);
        float zoom = (float)ui->zoom->value()/100;
        img = Redimensionar(img,img->width * zoom,img->height * zoom);

        QImage myImg = getImageFrom(img);

        QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height()); // ui->graphicsView->scene();
        scene->addPixmap(QPixmap::fromImage(myImg));
        ui->sourceImageViewer->setScene(scene);
        ui->sourceImageViewer->setScene(scene);
        //if (!noresize) {
        ui->sourceImageViewer->adjustSize();
        //}
        ui->sourceImageViewer->repaint();
    }
}

void MainWindow::on_actionAddLayer_clicked()
{
    Image *master;
    if (layers.size() > 0) {
        master = layers.front();
    } else {
        master = createImage(800, 600);
    }
    selectedLayer = layers.size();

    Image *img = createImage(master->width, master->height);
    addNewLayer(img);
    ui->inputLayerList->item(selectedLayer)->setSelected(true);
}

void MainWindow::on_actionPlayFilter_clicked()
{
    if (!selectedOperator.empty()) {
        selectedOperator.pop_back();
    }

    if (ui->inputFilter->currentIndex() >= 0) {
        QString str = ui->inputFilter->currentText();
        selectedOperator.push_back(str.toStdString());
        QWidget *contextWid = operators[str.toStdString()]->widget;


        ui->tabWidget->setCurrentIndex(1);

        if (activeContext != nullptr) {
            activeContext->setVisible(false);
            activeContext->setParent(nullptr);
        }
        activeContext = contextWid;
        contextWid->setParent(ui->contextualFilterWidget);

        ui->contextualFilterWidget->update();
        ui->contextualFilterWidget->repaint();

        contextWid->show();
    }
}

void MainWindow::on_actionConfirmApplyFilter_clicked()
{
    if (selectedOperator.size() > 0) {
        string sel = selectedOperator.back();
        //cout<<sel<<endl;
        Image *input = layers.at(selectedLayer);

        ImageOperator *op = this->operators[sel];

        Image *out = createImage(input->width, input->height);

        out = op->imageOperator(input, out, op);

        currentTarget = out;

        QImage myImg = getImageFrom(out);
        ui->tabWidget->setCurrentIndex(2);
        QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height()); // ui->graphicsView->scene();

        scene->addPixmap(QPixmap::fromImage(myImg));

        ui->targetImageViewer->setScene(scene);
        //if (!noresize) {
        ui->targetImageViewer->adjustSize();
        //}
        ui->targetImageViewer->repaint();
        selectedOperator.pop_back();
    }
}

void MainWindow::on_actionCopyToSource_clicked()
{
    addNewLayer(currentTarget);
}

bool MainWindow::on_actionSave_triggered(){
    QString fn = QFileDialog::getSaveFileName(this, tr("Salvar"),
                                                 QString(), tr("JPG (*.jpg);;PNG (*.png);;BMP (*.bmp)"));
       if (fn.isEmpty())
           return false;
       if (! (fn.endsWith(".jpg", Qt::CaseInsensitive) || fn.endsWith(".png", Qt::CaseInsensitive)) )
           fn += ".jpg"; // default
       const char *local = fn.toStdString().c_str();
       save(layers.at(selectedLayer),local);
}

void MainWindow::on_actionDelLayer_clicked()
{
    int sel = selectedLayer;

    if (sel >= 0) {
        removeLayer(selectedLayer);
        ui->inputLayerList->clearSelection();
        ui->inputLayerList->clearFocus();
        delete this->ui->inputLayerList->takeItem(sel);
        this->ui->inputLayerList->update();
        this->ui->inputLayerList->repaint();
        if (selectedLayer >= 0) {
            this->ui->inputLayerList->item(selectedLayer)->setSelected(true);
            this->ui->inputLayerList->setFocus();
        }
        //showLayers();
    }
}

void MainWindow::on_actionUpLayer_clicked()
{
    if (selectedLayer > 0){
        moveLayerUp(selectedLayer);
        int currentIndex = selectedLayer;
        QListWidgetItem *currentItem = ui->inputLayerList->takeItem(currentIndex);
        ui->inputLayerList->insertItem(currentIndex-1, currentItem);
        ui->inputLayerList->setCurrentRow(currentIndex-1);
    }
}

void MainWindow::on_actionDownLayer_clicked()
{
    if (selectedLayer >= 0 && selectedLayer < ui->inputLayerList->count()-1){
        moveLayerDown(selectedLayer);
        int currentIndex = selectedLayer;
        QListWidgetItem *currentItem = ui->inputLayerList->takeItem(currentIndex);
        ui->inputLayerList->insertItem(currentIndex+1, currentItem);
        ui->inputLayerList->setCurrentRow(currentIndex+1);
    }
}

void MainWindow::on_zoom_valueChanged(int value)
{
   float zoom = (float)value/100;
   Image *img = layers.at(selectedLayer);
   img = Redimensionar(img,img->width * zoom,img->height * zoom);
   QImage myImg = getImageFrom(img);
   QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height());
   scene->addPixmap(QPixmap::fromImage(myImg));
   ui->sourceImageViewer->setScene(scene);
   ui->sourceImageViewer->repaint();
}

void MainWindow::on_pushButton_clicked(bool checked)
{
    string sel = selectedOperator.back();
    if(sel.compare("Translação") == 0 || sel.compare("Cortar") == 0){
        Image *input = layers.at(selectedLayer);
        ImageOperator *op = this->operators[sel];
        Image *out = createImage(input->width, input->height);
        out = op->imageOperator(input, out, op);
        out = Redimensionar(out,out->width/4.3,out->height/3.3);
        QImage myImg = getImageFrom(out);
        QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height()); // ui->graphicsView->scene();
        scene->addPixmap(QPixmap::fromImage(myImg));
        ui->previa->setScene(scene);
        ui->previa->update();
        ui->previa->repaint();
    }
    else{
        Image *input = layers.at(selectedLayer);
        if(input->width <= 800 && input->height <= 600){
            input = Redimensionar(input,input->width/2,input->height/2);
        }
        else{
            input = Redimensionar(input,input->width/4.3,input->height/3.3);
        }
        ImageOperator *op = this->operators[sel];
        Image *out = createImage(input->width, input->height);
        out = op->imageOperator(input, out, op);
        QImage myImg = getImageFrom(out);
        QGraphicsScene* scene = new QGraphicsScene(0,0, myImg.width(), myImg.height()); // ui->graphicsView->scene();
        scene->addPixmap(QPixmap::fromImage(myImg));
        ui->previa->setScene(scene);
        ui->previa->update();
        ui->previa->repaint();
    }
}
