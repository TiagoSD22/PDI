#ifndef FACADE_H
#define FACADE_H

#include "image.h"
#include "filters.h"
#include <string>
#include "operators.h"
#include "colorutils.h"
#include "skinDetection.h"
#include <QWidget>
#include <QMainWindow>
#include  "skindetectionrgbform.h"
#include "erosionform.h"
#include <iostream>
#include "detectface.h"
#include "maximoform.h"
#include "alterarcontrasteform.h"
#include "alterarrgbform.h"
#include "alterarycbcrform.h"
#include "alterarhsiform.h"
#include "alterarcmykform.h"
#include "bitplaneform.h"
#include "blurform.h"
#include "contrasteform.h"
#include "nitidezform.h"
#include "cortarform.h"
#include "redimensionarform.h"
#include "eqhistform.h"
#include "gammaform.h"
#include "limiarform.h"
#include "medianaform.h"
#include "monoform.h"
#include "prewittform.h"
#include "rotacaoform.h"
#include "chanelform.h"
#include "translacaoform.h"
#include "waveform.h"
#include "warpingform.h"
#include "resizebliform.h"
#include "cartoonform.h"
#include "colorfilterform.h"
#include "oilform.h"
#include "sepiaform.h"
#include "glassform.h"
#include "halftoneform.h"
#include "embossform.h"
#include "pixelateform.h"
#include "solarizeform.h"
#include "fouriermath.h"
#include "complex.h"
#include "bandpassidealfreqfilter.h"
#include "rainbowform.h"

using namespace std;

struct ImageOperator {
    Image* (*imageOperator)(Image*, Image*, ImageOperator *op);
    QWidget *widget;
    string name;
    QWidget *parent;


    ImageOperator(string n="", Image* (*imageOperator)(Image*, Image*, ImageOperator *op) = nullptr) {
        this->name = n;
        this->imageOperator = imageOperator;
    }
};

Image* grayScaleFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* Skin_RGBFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* Skin_YCbCrFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* Skin_HSIFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* Skin_ColorModelsFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* faceDetectionFacade(Image *input, Image *output, ImageOperator *op);
Image* alterarcontrasteFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* alterarRGBFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* alterarYCbCrFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* alterarcmykFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* alterarhsiFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* bitplaneFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* blurFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* contrasteFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* nitidezFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* cortarFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* eqhistFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* simplecolorbalanceFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* pencildrawFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* horizontalflipFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* verticalflipFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* rotacionarhorarioFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* rotacionarantihorarioFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* redimensionarFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* negativoFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* medianaFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* monoFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* gammaFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* laplaceFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* limiarFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* sobelFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* prewittFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* rotacaoFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* robertsFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* embossFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* sepiaFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* chanelFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* maximoFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* erosionFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* translacaoFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* waveFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* warpingFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* resizebliFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* cartoonFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* colorfilterFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* oilFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* glassFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* halftoneFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* pixelateFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* solarizeFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* parabolaFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* rainbowFacade(Image *input, Image *output, ImageOperator *op=nullptr);
Image* fourierSpectrum(Image *input, Image *output, ImageOperator *op=nullptr);
Image* rejectbandfreq(Image *input, Image *output, ImageOperator *op=nullptr);
#endif // FACADE_H
