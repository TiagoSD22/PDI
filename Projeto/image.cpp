#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstring>
#include "image.h"

using namespace std;

Image* createImage(size_t width, size_t height) {
    Image *img = new Image();
    img->width = width;
    img->height = height;
    img->bits = new pixel[width*height];
    return img;
}

void deleteImage(Image *img) {
    delete [] img->bits;
    img->bits = NULL;
    delete img;
}

QImage getImageFrom(Image *img) {
    QImage qimg(img->width, img->height, QImage::Format_RGB32);

    for (size_t i = 0; i < img->width; i++) {
        for (size_t j = 0; j < img->height; j++) {
            pixel R = get_channel(img, i, j, RED);
            pixel G = get_channel(img, i, j, GREEN);
            pixel B = get_channel(img, i, j, BLUE);
            qimg.setPixel(i, j, qRgb(R, G, B));
        }
    }
    return qimg;
}

Image* loadImage(const char *path) {
    QString tgpath = path;
    QImage tgimg(tgpath);
    Image *img = new Image();
    img->width = tgimg.width();
    img->height = tgimg.height();
    img->bits = new pixel[img->width * img->height];
    for (int i = 0; i < img->width; i++) {
        for (int j = 0; j < img->height; j++) {
            QRgb c = tgimg.pixel(i,j);
            set_pixel(img, i, j, qRed(c), qGreen(c), qBlue(c));
        }
    }
    return img;
}

bool save(Image *img, const char *path){

    QImage qimg(img->width, img->height, QImage::Format_RGB32);

    for (int i = 0; i < img->width; i++) {
        for (int j = 0; j < img->height; j++) {
            pixel R = get_channel(img, i, j, RED);
            pixel G = get_channel(img, i, j, GREEN);
            pixel B = get_channel(img, i, j, BLUE);
            qimg.setPixel(i, j, qRgb(R, G, B));
        }
    }
    QString p = path;
    return qimg.save(p);
}


int get_channel(Image *img, int l, int c, size_t channel){
    size_t idx = img->height * l + c;
    pixel value = img->bits[idx];
    size_t r = value >> (CHANNEL_SIZE * channel);
    r = r & GET_MASK[channel];
    return r;
}


void set_pixel(Image *image, int l, int c, pixel R, pixel G, pixel B) {

    size_t idx = image->height * l + c;

    size_t RC = 0, GC = 1, BC = 2;
    pixel value = image->bits[idx];
    pixel r = value & SET_MASK[RC];
    r = r | R;

    G = G << (CHANNEL_SIZE * GC);

    r = r & SET_MASK[GC];
    r = r | G;

    B = B << (CHANNEL_SIZE * BC);

    r = r & SET_MASK[BC];
    r = r | B;

    image->bits[idx] = r;
}


void draw_line(Image *img, const Point &p1, const Point &p2, pixel R, pixel G, pixel B) {
        int x, y, x1, y1, x2, y2, erro, deltaX, deltaY;
        erro = 0;
        x1 = p1.x;
        y1 = p1.y;
        x = x1;
        y = y1;
        x2 = p2.x;
        y2 = p2.y;

        deltaX = x2 - x1;
        deltaY = y2 - y1;

        if( (abs(deltaY) >= abs(deltaX) && y1 > y2)
            || (abs(deltaY) < abs(deltaX) && deltaY < 0) ){

            x = x2;
            y = y2;
            deltaX = x1 - x2;
            deltaY = y1 - y2;
        }

        set_pixel(img, x1, y1, R, G, B);

        if(deltaX >= 0){
            if(abs(deltaX) >= abs(deltaY)){
                for(int i=1; i < abs(deltaX); i++){
                    if(erro<0){
                        x++;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaY;
                    }else{
                        x++;
                        y++;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaY - deltaX;
                    }
                }
            }else{
                for(int i=1;i<abs(deltaY);i++){
                    if(erro<0){
                        x++;
                        y++;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaY - deltaX;
                    }else{
                        y++;
                        set_pixel(img, x, y, R, G, B);
                        erro -= deltaX;
                    }
                }
            }
        }else{ // deltaX<0
            if(abs(deltaX) >= abs(deltaY)){
                for(int i=1; i < abs(deltaX); i++){
                    if(erro<0){
                        x--;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaY;
                    }else{
                        x--;
                        y++;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaY + deltaX;
                    }
                }
            }else{
                for(int i=1; i < abs(deltaY); i++){
                    if(erro<0){
                        x--;
                        y++;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaY + deltaX;
                    }else{
                        y++;
                        set_pixel(img, x, y, R, G, B);
                        erro += deltaX;
                    }
                }
            }
        }
        set_pixel(img, x2, y2, R, G, B);
}

void draw_rect(Image *img, Bounding *b, pixel R, pixel G, pixel B) {
    Point p1(b->xmin, b->ymin);
    Point p2(b->xmin, b->ymax);
    Point p3(b->xmax, b->ymax);
    Point p4(b->xmax, b->ymin);

    draw_line(img, p1, p2, R, G, B);
    draw_line(img, p2, p3, R, G, B);
    draw_line(img, p3, p4, R, G, B);
    draw_line(img, p4, p1, R, G, B);
}

bool saveSimpleBMP(const char *path, Image *source) {
    size_t w = source->width;
    size_t h = source->height;
    FILE *f;
    unsigned char *img = NULL;
    int filesize = 54 + 3*w*h;  //w is your image width, h is image height, both int
    if( img )
        free( img );
    img = (unsigned char *)malloc(3*w*h);
    memset(img, 0, sizeof(img));

    for(int i=0; i<w; i++)
    {
        for(int j=0; j<h; j++)
            {
                size_t x=i; size_t y=j;
                pixel r = get_channel(source, i, j, RED);
                pixel g = get_channel(source, i, j, GREEN);
                pixel b = get_channel(source, i, j, BLUE);
                if (r > 255) r=255;
                if (g > 255) g=255;
                if (b > 255) b=255;
                img[(x+y*w)*3+2] = (unsigned char)(r);
                img[(x+y*w)*3+1] = (unsigned char)(g);
                img[(x+y*w)*3+0] = (unsigned char)(b);
            }
    }

    unsigned char bmpfileheader[14] = {'B','M', 0,0,0,0, 0,0, 0,0, 54,0,0,0};
    unsigned char bmpinfoheader[40] = {40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0, 24,0};
    unsigned char bmppad[3] = {0,0,0};

    bmpfileheader[ 2] = (unsigned char)(filesize);
    bmpfileheader[ 3] = (unsigned char)(filesize>> 8);
    bmpfileheader[ 4] = (unsigned char)(filesize>>16);
    bmpfileheader[ 5] = (unsigned char)(filesize>>24);

    bmpinfoheader[ 4] = (unsigned char)(       w    );
    bmpinfoheader[ 5] = (unsigned char)(       w>> 8);
    bmpinfoheader[ 6] = (unsigned char)(       w>>16);
    bmpinfoheader[ 7] = (unsigned char)(       w>>24);
    bmpinfoheader[ 8] = (unsigned char)(       h    );
    bmpinfoheader[ 9] = (unsigned char)(       h>> 8);
    bmpinfoheader[10] = (unsigned char)(       h>>16);
    bmpinfoheader[11] = (unsigned char)(       h>>24);

    f = fopen(path,"wb");
    if (f) {
        fwrite(bmpfileheader,1,14,f);
        fwrite(bmpinfoheader,1,40,f);
        for(size_t i=0; i<h; i++)
        {
            fwrite(img+(w*(h-i-1)*3),3,w,f);
            fwrite(bmppad,1,(4-(w*3)%4)%4,f);
        }
        fclose(f);
        return true;
    } else {
        return false;
    }
}

void get_pixel(Image *img, int l, int c, pixel p[3]){
    p[0] = get_channel(img, l, c, RED);
    p[1] = get_channel(img, l, c, GREEN);
    p[2] = get_channel(img, l, c, BLUE);
}

pixel toPixelInt(pixel R, pixel G, pixel B) {
    pixel value = 0;
    pixel r = value & SET_MASK[0];
    r = r | R;

    G = G << (CHANNEL_SIZE * 1);

    r = r & SET_MASK[1];
    r = r | G;

    B = B << (CHANNEL_SIZE * 2);

    r = r & SET_MASK[2];
    r = r | B;
    return r;
}

void clearImage(Image *img, pixel R, pixel G, pixel B) {
    size_t n = img->width * img->height;
    for (size_t i = 0; i < n ; i++) {
        img->bits[i] = toPixelInt(R, G, B);
    }
}

Image* readSimpleBMP(const char *filename) {
    FILE* f = fopen(filename, "rb");

    if(f != NULL) {
        unsigned char info[54];
        fread(info, sizeof(unsigned char), 54, f); // read the 54-byte header

        // extract image height and width from header
        int width = *(int*)&info[18];
        int height = *(int*)&info[22];
        Image *img = createImage(width, height);
        int row_padded = (width*3 + 3) & (~3);
        unsigned char* data = new unsigned char[row_padded];
        unsigned char tmp;

        size_t l = height - 1;
        for(size_t i = 0; i < height; i++)
        {
            size_t c = 0;
            fread(data, sizeof(unsigned char), row_padded, f);
            for(size_t j = 0; j < width*3; j += 3)
            {
                // Convert (B, G, R) to (R, G, B)
                tmp = data[j];
                data[j] = data[j+2];
                data[j+2] = tmp;

                set_pixel(img, c, l, data[j], data[j+1], data[j+2]);
                c++;
                //cout << "R: "<< (int)data[j] << " G: " << (int)data[j+1]<< " B: " << (int)data[j+2]<< endl;
            }
            l--;
        }


        delete [] data;
        fclose(f);

        return img;
    } else {
        return 0;
    }
}

void copyimg(Image *srcImg, Image *dstImg) {
    dstImg->width = srcImg->width;
    dstImg->height = srcImg->height;

    for (size_t i = 0; i < srcImg->width; i++) {
        for (size_t j = 0; j < srcImg->height; j++) {
            pixel R = get_channel(srcImg, i, j, RED);
            pixel G = get_channel(srcImg, i, j, GREEN);
            pixel B = get_channel(srcImg, i, j, BLUE);

            set_pixel(dstImg, i, j, R, G, B);
        }
    }
}

