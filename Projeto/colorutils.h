#ifndef COLORUTILS
#define COLORUTILS
#include"image.h"

void RGB2YCbCr(pixel R, pixel G, pixel B, int &Y, int &Cb, int &Cr);
void YCbCr2RGB(int y, int cb, int cr, pixel &R, pixel &G, pixel &B);
void RGB2HSI(pixel R, pixel G, pixel B, float &H, float &S, float &I);
void HSI2RGB(float H, float S, float I, pixel &R, pixel &G, pixel &B);

#endif // COLORUTILS
