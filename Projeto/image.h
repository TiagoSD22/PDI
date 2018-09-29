#ifndef IMAGE_H
#define IMAGE_H
#include <cstdlib>
#include <QImage>
#include <QString>
#include <cmath>

#define RED 0
#define GREEN 1
#define BLUE 2
#define NUMBER_OF_CHANNELS 4
#define CHANNEL_SIZE 8
#define nullptr 0

using namespace std;

typedef unsigned int pixel;

static pixel GET_MASK[4] = {255, 255, 255, 255};
static pixel SET_MASK[4] = {4294967040, 4294902015, 4278255615, 16777215};



struct Pointf {

    float x;
    float y;


    Pointf(float x, float y) {
        this->x = x;
        this->y = y;
    }

    Pointf(const Pointf &p) {
        x = p.x;
        y = p.y;
    }

    bool operator ==(const Pointf &p) {
        return (x == p.x && y == p.y);
    }

    Pointf& operator = (const Pointf &p) {
        if (this != &p) {
            this->x = p.x;
            this->y = p.y;
        }
        return *this;
    }

    float dist(const Pointf &p) {
        return sqrt((x - p.x)*(x - p.x) + (y - p.y) * (y - p.y));
    }
};

struct Point {

    int x;
    int y;


    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    bool operator ==(const Point &p) {
        return (x == p.x && y == p.y);
    }

    Point& operator = (const Point &p) {
        if (this != &p) {
            this->x = p.x;
            this->y = p.y;
        }
        return *this;
    }
};

struct Bounding {
    int xmin, ymin;
    int xmax, ymax;

    Bounding(int xmi, int ymi, int xma, int yma) {
        xmin = xmi;
        ymin = ymi;
        xmax = xma;
        ymax = yma;
    }

    bool in(int px, int py) {
        if ( px >= xmin && px <= xmax && py >= ymin && py <= ymax) {
            return true;
        } else {
            return false;
        }
    }

    float xCenter() {
        return (xmin+xmax)/2.0f;
    }

    float yCenter() {
        return (ymin+ymax)/2.0f;
    }

    int width() {
        return xmax - xmin + 1;
    }

    int height() {
        return ymax - ymin + 1;
    }
};


struct Image {
    pixel *bits;
    size_t width;
    size_t height;
};

Image* createImage(size_t width, size_t height);
void deleteImage(Image *img);
int get_channel(Image *img, int l, int c, size_t channel);
void set_pixel(Image *image, int l, int c, pixel R, pixel G, pixel B);
Image* readSimpleBMP(const char *filename);
bool saveSimpleBMP(const char *path, Image *source);
Image* loadImage(const char *path);
bool save(Image *img, const char *path);
QImage getImageFrom(Image *img);
void get_pixel(Image *img, int l, int c, pixel p[3]);
void clearImage(Image *img, pixel R, pixel G, pixel B);
pixel toPixelInt(pixel R, pixel G, pixel B);
void copyimg(Image *srcImg, Image *dstImg);
void draw_line(Image *img, const Point &p1, const Point &p2, pixel R=255, pixel G=255, pixel B=255);
void draw_rect(Image *img, Bounding *b, pixel R=255, pixel G=255, pixel B=255);
#endif // IMAGE_H
