#include <QCoreApplication>
#include <QApplication>
#include <mainwindow.h>
#include "skinDetection.h"
#include "detectface.h"
#include <iostream>
#include <complex.h>
#include <fouriermath.h>
#include <unistd.h>
using namespace std;

int initgui(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow mainapp;
    mainapp.show();

    return a.exec();
}


int learnfourier() {
    const size_t M = 4, N = 4;
    complex ***input = fouriermath::makebuffer(M, N);
    //make a function
    REAL output[M][N] = {
        {
            1, 1, 2, 3
        },
        {
            12, 1, 1, 23
        },
        {
            0, 0, 1, 1
        },
        {
            0, 10, 1, 10
        }
    };


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            input[i][j] = new complex(output[i][j], 0);
        }
    }
    //end make a function

    //apply fourier discret transform
    fouriermath f(input, M, N);

    complex ***img = f.dft(false);
    //end apply fourier discret transform


    //print fourier spectrum
    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            cout<< fouriermath::getfourierspectrum(i, j, img) <<" ";
        }
        cout<<endl;
    }
    //end print fourier spectrum

    //remove low frequency
    REAL cutoff = 2;
    REAL cx = floor(M/2);
    REAL cy = floor(N/2);
    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            REAL d = sqrt((i - cx) * (i-cx) + (j - cy) * (j-cy));
            if (d < cutoff) {
                img[i][j]->i = 0;
                img[i][j]->r = 0;
            }
        }
    }
    //end remove low frequency

    img = f.dft(true);

    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
           cout<< ( pixel)( round(img[i][j]->module() ) ) <<" ";
           // cout<< fouriermath::getfourierspectrum(i, j, img) <<" ";
        }
        cout<<endl;
    }

    fouriermath::deletebuffer(input, M, N);
}

int test(int argc, char *argv[]) {
    Image *img = loadImage("/home/gilzamir/halftone.png");
    Image *out = createImage(img->width, img->height);

    copyimg(img, out);

    vector< Bounding* > res = detectFaces(img, 0.04f, 0.4f, 0.1f, 0.1);

    for (int i = 0; i < res.size(); i++) {
        Bounding *b = res.at(i);
        draw_rect(out, b, 255, 0, 0);
        delete b;
        b = nullptr;
    }

    save(out, "/home/gil/out.jpg");

    return 0;
}



int fourier() {
    Image *source = loadImage("/Users/gilzamir/noiseball.png");
    Image *target = createImage(source->width, source->height);
    Image *spectrum = createImage(source->width, source->height);

    fouriermath f(source);

    complex ***img = f.dft(false);

    //begin::filtragem passa banda
     fouriermath::rbandgaus(img, f.M, f.N, 52, 20);
     //fouriermath::idealband(img, f.M, f.N, 130, 14);
    //end::filtragem pass banda
    //fouriermath::setband(img, f.M, f.N, 0, 1, 1);
     for (size_t i = 0; i < f.M; i++) {
         for (size_t j = 0; j < f.N; j++) {
             pixel sr = fouriermath::getfourierspectrum(i, j, img);
             set_pixel(spectrum, i, j, sr, sr, sr);
         }
     }


    img =  f.dft(true);

    for (size_t i = 0; i < f.M; i++) {
        for (size_t j = 0; j < f.N; j++) {
            pixel ir = pixel( round(img[i][j]->module()) );
            set_pixel(target, i, j, ir, ir, ir);
        }
    }

    save(target, "/Users/gilzamir/target.jpg");
    save(spectrum, "/Users/gilzamir/spec.jpg");

    deleteImage(source);
    deleteImage(target);
    deleteImage(spectrum);

    return 0;
}

int main(int argc, char *argv[])
{

    //return fourier();
    //return learnfourier();
    return initgui(argc, argv);
    //return test(argc, argv);
}
