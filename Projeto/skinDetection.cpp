#include <QImage>
#include "skinDetection.h"
#include "colorutils.h"
#include <iostream>
#include <cmath>
#include "filters.h"

using namespace std;

pixel minRGB(pixel r, pixel g, pixel b){
    pixel min1;
    if(r>g && r>b){
        if(g>b)
            min1 = b;
        else
            min1 = g;
    }
    if(g>r && g>b){
        if(r>b)
            min1 = b;
        else
            min1 = r;
    }
    if(b>r && b>g){
        if(r>g)
            min1 = g;
        else
            min1 = r;
    }

   return min1;
}

pixel maxRGB(pixel r, pixel g, pixel b){
    pixel max1;
    if(r>g && r>b)
        max1 = r;
    if(g>r && g>b)
        max1 = g;
    if(b>r && b>g)
        max1 = b;
    return max1;
}

pixel modRGB(pixel r, pixel g){
    pixel mod;
    if(r>g)
        mod = r-g;
    else
        mod = g-r;
    return mod;
}

void Skin_RGB(Image *input, Image *output) {
    copyimg(input, output);
    Image *img = output;
    pixel r, g, b, p;
    pixel minimo, maximo, modulo;
    int i, j;

    for(i = 0; i < img->width; i++){
        for(j = 0; j< img->height; j++){
            r = get_channel(img, i, j, RED);
            g = get_channel(img, i, j, GREEN);
            b = get_channel(img, i, j, BLUE);

            minimo = minRGB(r,g,b);
            maximo = maxRGB(r,g,b);
            modulo = modRGB(r,g);

            //Condições para tom de pele em RGB
            if(r< 95 || g < 40 || b < 20 || ((maximo-minimo)<15) || modulo<15 || r<g || r<b)
                p = 0;
            else
                p = 255;

            set_pixel(img, i, j, p, p, p);
        }
    }
    //deleteImage(img);
}

void Skin_RGB(const char *input, const char *output){
    Image *img = loadImage(input);
    pixel r, g, b, p;
    pixel minimo, maximo, modulo;
    int i, j;

    for(i = 0; i < img->width; i++){
        for(j = 0; j< img->height; j++){

            r = get_channel(img, i, j, RED);
            g = get_channel(img, i, j, GREEN);
            b = get_channel(img, i, j, BLUE);

            minimo = minRGB(r,g,b);
            maximo = maxRGB(r,g,b);
            modulo = modRGB(r,g);

            //Condições para tom de pele em RGB
            if(r< 95 || g < 40 || b < 20 || ((maximo-minimo)<15) || modulo<15 || r<g || r<b)
                p = 0;
            else
                p = 255;

            set_pixel(img, i, j, p, p, p);
        }
    }
    save(img, output);
    deleteImage(img);
}

void Skin_HSI(Image *input, Image *output) {
    copyimg(input, output);
    Image *img = output;
    pixel r, g, b, p;
    size_t i, j;
    float H, S, I;

    for(i = 0; i < img->width; i++){
        for(j = 0; j< img->height; j++){
            r = get_channel(img, i, j, RED);
            g = get_channel(img, i, j, GREEN);
            b = get_channel(img, i, j, BLUE);
            H = 0, S = 0, I = 0;
            RGB2HSI(r, g, b, H, S, I);


            I = I * 255;
            S = S * 255;

            if (I > 40) {
                if (
                        ( (S > 13 && S < 110) && ((H > 0 && H < 28) || (H > 332 && H < 360))) ||
                        ((S > 13 && S < 75) && (H > 309 && H < 331))

                    )
                {
                    p = 255;
                } else {
                    p = 0;
                }
            }


            set_pixel(img, i, j, p, p, p);
        }
    }
}

void Skin_YCbCr(Image *input, Image *output){
    copyimg(input, output);
    Image *img = output;
    pixel r, g, b, p;
    size_t i, j;
    int Y, Cb, Cr;

    for(i = 0; i < img->width; i++){
        for(j = 0; j< img->height; j++){
            r = get_channel(img, i, j, RED);
            g = get_channel(img, i, j, GREEN);
            b = get_channel(img, i, j, BLUE);

            RGB2YCbCr(r, g, b, Y, Cb, Cr);

            //Condições para tom de pele em YCbCr
            if((Cb >= 77 && Cb <= 127) && (Cr >= 133 && Cr <= 173))
                p = 255;
            else
                p = 0;

            set_pixel(img, i, j, p, p, p);
        }
    }
}

void Skin_YCbCr(const char *input, const char *output){
    Image *img = loadImage(input);
    pixel r, g, b, p;
    size_t i, j;
    int Y, Cb, Cr;

    for(i = 0; i < img->width; i++){
        for(j = 0; j< img->height; j++){
            r = get_channel(img, i, j, RED);
            g = get_channel(img, i, j, GREEN);
            b = get_channel(img, i, j, BLUE);

            RGB2YCbCr(r, g, b, Y, Cb, Cr);

            //Condições para tom de pele em YCbCr
            if((Cb>80 && Cb < 120) && (Cr > 133 && Cr < 173))
                p = 255;
            else
                p = 0;

            set_pixel(img, i, j, p, p, p);
        }
    }
    save(img, output);
    deleteImage(img);

}


void Skin_ColorModels(Image *input, Image *output) {

    Image *o1 = createImage(input->width, input->height);
    Image *o2 = createImage(input->width, input->height);
    Image *o3 = createImage(input->width, input->height);

    Skin_RGB(input, o1);
    Skin_YCbCr(input, o2);
    Skin_HSI(input, o3);

    Image *out1 = createImage(input->width, input->height);
    OR(o1, o2, out1);
    OR(out1, o3, output);

    deleteImage(o1);
    deleteImage(o2);
    deleteImage(o3);
    deleteImage(out1);
}

