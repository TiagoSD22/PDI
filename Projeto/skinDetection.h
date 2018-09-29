#ifndef SKINDETECTION_H
#define SKINDETECTION_H
#include "image.h"

pixel minRGB(pixel r, pixel g, pixel b);
pixel maxRGB(pixel r, pixel g, pixel b);
pixel modRGB(pixel r, pixel g);

void Skin_RGB(const char *input, const char *output);
void Skin_RGB(Image *input, Image *output);
void Skin_YCbCr(const char *input, const char *output);
void Skin_HSI(Image *input, Image *output);
void Skin_YCbCr(Image *input, Image *output);

void Skin_ColorModels(Image *input, Image *output);


#endif // SKINDETECTION_H
