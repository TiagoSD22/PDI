#ifndef DETECTFACE_H
#define DETECTFACE_H

#include <vector>
#include "image.h"
#include <limits>
#include <deque>
#include "skinDetection.h"

using namespace std;


Bounding* nextNoBlackRegion(Image *input, int &x, int &y, int **schedule);
vector< Bounding* > getSkinRegions(Image *in, int wp=10, int hp=10);
vector< Bounding* > getPixelColorRegion(Image *img, Bounding *b, pixel R=0, pixel G=0, pixel B=0);
bool testEyeMouthFeature(Pointf lefty, Pointf righty, Pointf mouth);
vector< Bounding* > detectFaces(Image *input, float eyeMinArea, float eyeMaxArea, float minFaceWidth, float minFaceHeight);

#endif // DETECTFACE_H
