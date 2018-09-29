#include "facade.h"
#include "filters.h"

Image* grayScaleFacade(Image *input, Image *output, ImageOperator *op) {
    Image *tmp = Escala_de_cinza(input);
    copyimg(tmp, output);
    deleteImage(tmp);
    return output;
}

Image* Skin_RGBFacade(Image *input, Image *output, ImageOperator *op) {
    Skin_RGB(input, output);
    return output;
}

Image* Skin_HSIFacade(Image *input, Image *output, ImageOperator *op) {
    Skin_HSI(input, output);
    return output;
}

Image* Skin_YCbCrFacade(Image *input, Image *output, ImageOperator *op) {
    Skin_YCbCr(input, output);
    return output;
}


Image* Skin_ColorModelsFacade(Image *input, Image *output, ImageOperator *op) {
    Skin_ColorModels(input, output);
    return output;
}

Image* faceDetectionFacade(Image *input, Image *output, ImageOperator *op) {
    copyimg(input, output);
    vector< Bounding* > faces = detectFaces(input, 0.04f, 0.4f, 0.1f, 0.1);

    for (int i = 0; i < faces.size(); i++) {
        Bounding *b = faces.at(i);
        draw_rect(output, b, 255, 0, 0);
    }
    return output;
}

Image* simplecolorbalanceFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Simple_Color_balance(input);
    return output;
}

Image* pencildrawFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Pencil_draw(input);
    return output;
}

Image* horizontalflipFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Horizontal_flip(input);
    return output;
}

Image* verticalflipFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Vertical_flip(input);
    return output;
}

Image* rotacionarhorarioFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Rotacionar_Horario(input);
    return output;
}

Image* rotacionarantihorarioFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Rotacionar_AntiHorario(input);
    return output;
}

Image* negativoFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Negativo(input);
    return output;
}

Image* laplaceFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Laplaciana(input);
    return output;
}

Image* sobelFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Sobel(input);
    return output;
}

Image* robertsFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Roberts(input);
    return output;
}

Image *embossFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    embossForm *form = (embossForm*) op->widget;
    if(form->modo == 1){
        output = Alterar_RGB(Soma(Emboss(input),input),20,20,20);
    }
    else{
        output = Emboss(input);
    }
    return output;
}

Image* sepiaFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    sepiaForm *form = (sepiaForm*) op->widget;
    output = Sepia(input,form->getVLimiar());
    return output;
}

Image* maximoFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    maximoForm *form = (maximoForm*) op->widget;
    output = Maximo(input,form->getMaskSize());
    return output;
}

Image* pixelateFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    pixelateForm *form = (pixelateForm*) op->widget;
    output = Pixelate(input, form->getMaskSize());
    return output;
}

Image* alterarcontrasteFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    alterarcontrasteForm *form = (alterarcontrasteForm*) op->widget;
    output = Alterar_contraste(input,form->getValue());
    return output;
}

Image* alterarRGBFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    alterarRGBForm *form = (alterarRGBForm*) op->widget;
    output = Alterar_RGB(input,form->getdeltaR(),form->getdeltaG(),form->getdeltaB());
    return output;
}

Image* alterarYCbCrFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    alterarYCbCrForm *form = (alterarYCbCrForm*) op->widget;
    output = Alterar_YCbCr(input,form->getdeltaY(),form->getdeltaCb(),form->getdeltaCr());
    return output;
}

Image* alterarhsiFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    alterarhsiForm *form = (alterarhsiForm*) op->widget;
    float delta_s = (float)form->getdeltaS()/255;
    float delta_i = (float)form->getdeltaI()/255;
    output = Alterar_HSI(input,form->getdeltaH(),delta_s,delta_i);
    return output;
}

Image* alterarcmykFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    alterarcmykForm *form = (alterarcmykForm*) op->widget;
    float delta_c,delta_m,delta_y,delta_k;
    delta_c = (float)form->getdeltaC()/255;
    delta_m = (float)form->getdeltaM()/255;
    delta_y = (float)form->getdeltaY()/255;
    delta_k = (float)form->getdeltaK()/255;
    output = Alterar_CMYK(input,delta_c,delta_m,delta_y,delta_k);
    return output;
}

Image* bitplaneFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    bitplaneForm *form = (bitplaneForm*) op->widget;
    output = Extrair_Plano_de_Bit(input,form->getPlano());
    return output;
}

Image* blurFacade(Image *input, Image *output, ImageOperator *op) { 
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    blurForm *form = (blurForm*) op->widget;
    output = Blur(input,form->getMaskSize());
    return output;
}

Image* contrasteFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    contrasteForm *form = (contrasteForm*) op->widget;
    output = Contrast_Stretching(input,form->getMin(),form->getMax());
    return output;
}

Image* translacaoFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    translacaoForm *form = (translacaoForm*) op->widget;
    output = Translacao(input,form->getdeltai(),form->getdeltaj());
    return output;
}

Image* nitidezFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    nitidezForm *form = (nitidezForm*) op->widget;
    output = Nitidez(input,form->getValue());
    return output;
}

Image* oilFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    oilForm *form = (oilForm*) op->widget;
    output = oil_painting(input,form->getlevel(),form->getmascara());
    return output;
}

Image* erosionFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    ErosionForm *form = (ErosionForm*) op->widget;
    output = Minimo(input,form->getMaskSize());
    return output;
}

Image* cortarFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    cortarForm *form = (cortarForm*) op->widget;
    output = Cortar(input,form->getii(),form->getifi(),form->getji(),form->getjf());
    return output;
}

Image* redimensionarFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }

    redimensionarForm *form = (redimensionarForm*) op->widget;

    Image *img = Redimensionar(input, form->getl(), form->geth());
    return img;
}

Image* eqhistFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    eqhistForm *form = (eqhistForm*) op->widget;
    output = Equalizar_local_histograma(input,form->getMin(),form->getMax());
    return output;
}

Image* gammaFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    gammaForm *form = (gammaForm*) op->widget;
    output = Gamma(input,form->getVGamma());
    return output;
}

Image* resizebliFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }

    ResizeBLIForm *form = (ResizeBLIForm*) op->widget;

    Image *img = BLIScale(input, form->getScaleX(), form->getScaleY());
    return img;
}

Image* limiarFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    limiarForm *form = (limiarForm*) op->widget;
    output = Limiar(input,form->getVLimiar());
    return output;
}

Image *halftoneFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    halftoneForm *form = (halftoneForm*) op->widget;
    if(form->modo == 1){
        output = halftone(input);
    }
    else{
        output = halftone2(input);
    }
    return output;
}

Image* glassFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    glassForm *form = (glassForm*) op->widget;
    output = Glass_style(input,form->getdelta());
    return output;
}

Image* medianaFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    medianaForm *form = (medianaForm*) op->widget;
    output = Mediana(input,form->getMaskSize());
    return output;
}

Image* monoFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    monoForm *form = (monoForm*) op->widget;
    output = Mono_canal(input,form->getcanal());
    return output;
}

Image* prewittFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Prewitt(input);
    return output;
}

Image* colorfilterFacade(Image *input, Image *output, ImageOperator *op){
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Color_Filter1(input);
    return output;
}

Image* rotacaoFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    rotacaoForm *form = (rotacaoForm*) op->widget;
    output = Rotacao(input,form->getangulo());
    return output;
}

Image* chanelFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    chanelForm *form = (chanelForm*) op->widget;
    output = Simple_Channel_equalization(input,form->getcanal(),form->getMin(),form->getMax());
    return output;
}

Image* waveFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    waveForm *form = (waveForm*) op->widget;
    output = Wave(input,form->getwave());
    return output;
}

Image* warpingFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    warpingForm *form = (warpingForm*) op->widget;
    output = Warping(input,form->geta(),form->getb(),form->getc(),form->getd(),form->gete(),form->getf(),form->getg(),form->geth());
    return output;
}

Image* cartoonFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    cartoonForm *form = (cartoonForm*) op->widget;
    output = Cartoon(input,form->getVLimiar());
    return output;
}

Image* solarizeFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    solarizeForm *form = (solarizeForm*) op->widget;
    output = Solarize(input,form->getLimiarR(),form->getLimiarG(),form->getLimiarB());
    return output;
}

Image* parabolaFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Parabola(input);
    return output;
}

Image* rainbowFacade(Image *input, Image *output, ImageOperator *op) {
    if (output != nullptr) {
        deleteImage(output);
        output = nullptr;
    }
    output = Rainbow(input);
    return output;
}

Image* fourierSpectrum(Image *input, Image *output, ImageOperator *op) {
    fouriermath f(input);
    complex ***sp =  f.dft(false);
    for (size_t i = 0; i < f.M; i++) {
        for (size_t j = 0; j < f.N; j++) {
            pixel r = fouriermath::getfourierspectrum(i,j,sp);
            set_pixel(output, i, j, r, r, r);
        }
    }
    return output;
}

Image* rejectbandfreq(Image *input, Image *output, ImageOperator *op) {
    BandPassIdealFreqFilterForm *form = (BandPassIdealFreqFilterForm*)op->widget;
    fouriermath f(input);
    f.dft(false);
    fouriermath::rbandideal(f.target, f.M, f.N,
                            form->getCutOff(),
                            form->getBand(), form->isReject());

    complex ***img;

    if (!form->isShowSpec()) {
        img = f.dft(true);
    } else {
        img = f.target;
    }

    for (size_t i = 0; i < f.M; i++) {
        for (size_t j = 0; j < f.N; j++) {
            pixel r;
            if (!form->isShowSpec()) {
                r = (pixel) round(img[i][j]->module());
            } else {
                r = fouriermath::getfourierspectrum(i, j, img);
            }
            set_pixel(output, i, j, r, r, r);
        }
    }
    return output;
}

