#ifndef OPERATORS_H
#define OPERATORS_H

#include "image.h"

void erosion(Image *input, Image *output, int maskSize);
Image* dilation(Image *input, Image *output, int maskSize);


#endif // OPERATORS_H


