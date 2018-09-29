#ifndef FOURIERMATH_H
#define FOURIERMATH_H

#include "complex.h"
#include <cmath>
#include "image.h"

struct fouriermath
{


    static complex*** makebuffer(size_t M, size_t N) {
        complex ***b = new complex**[M];
        for (size_t i = 0; i < M; i++) {
            b[i] = new complex*[N];
            for (size_t j = 0; j < N; j++) {
                b[i][j] = new complex(0,0);
            }
        }
        return b;
    }

    static void setband(complex ***img, size_t M, size_t N, REAL MIN, REAL MAX, REAL h) {
        REAL xc = floor(M/2);
        REAL yc = floor(N/2);
        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                REAL a = (i - xc);
                REAL b = (j - yc);

                REAL D = sqrt(a * a + b * b);

                if ( D >= MIN && D <= MAX) {
                   // if (img[i][j]->i == 0 && img[i][j]->r == 0) {
                        img[i][j]->i = h;
                        img[i][j]->r = h;
                    //}
                }
            }
        }
    }

    static void rbandgaus(complex*** img, size_t M, size_t N, REAL D0, REAL W, bool reject=true) {
        REAL xc = floor(M/2);
        REAL yc = floor(N/2);

        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                REAL a = (i - xc);
                REAL b = (j - yc);

                REAL D = sqrt(a * a + b * b) + 0.0000000000001;

                REAL c = (D * D - D0 * D0)/(D*W);


                REAL h = 1 - exp(-c*c);

                if (!reject) {
                    h = 1-h;
                }

                img[i][j]->i *= h;
                img[i][j]->r *= h;
            }
        }
    }


    static void rbandbutter(complex*** img, size_t M, size_t N, REAL D0, REAL W, int order, bool reject=true) {
        REAL xc = floor(M/2);
        REAL yc = floor(N/2);
        REAL twtorder = 2 * order;
        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                REAL a = (i - xc);
                REAL b = (j - yc);

                REAL D = sqrt(a * a + b * b) + 0.0000000000001;

                REAL c = (D * W)/(D*D - D0 * D0);

                REAL h = (1.0/(1+pow(c, twtorder)) );

                if (!reject) {
                    h = 1-h;
                }

                img[i][j]->i *= h;
                img[i][j]->r *= h;
            }
        }
    }



    static void rbandideal(complex*** img, size_t M, size_t N, REAL D0, REAL W, bool reject=true) {
        REAL xc = floor(M/2);
        REAL yc = floor(N/2);

        for (size_t i = 0; i < M; i++) {
            REAL a = (i - xc);
            for (size_t j = 0; j < N; j++) {
                REAL b = (j - yc);

                REAL D = sqrt(a * a + b * b);
                //printf("(%d, %d) = %f\n", i, j, D);
                REAL h = 1;
                if (D >= (D0 - W) && D <= (D0 + W)) {
                    h = 0;
                }

                if (!reject) {
                    h = 1-h;
                }

                img[i][j]->i *= h;
                img[i][j]->r *= h;
            }
        }
    }

    static void applymask(complex ***img, complex ***mask, size_t M, size_t N) {
        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                img[i][j]->r *= mask[i][j]->r;
                img[i][j]->i *= mask[i][j]->r;
            }
        }
    }


    static void deletebuffer(complex ***c, int M, int N) {

        for (int i = 0; i < M; i++) {

            for (int j = 0; j < N; j++) {
                delete c[i][j];
            }

            delete [] c[i];
        }

        delete [] c;
        c = 0;
    }


    static pixel getfourierspectrum(size_t x, size_t y, complex ***img) {
        REAL mo = img[x][y]->module();
        mo = 15 * log(1+mo);
        return pixel( round(mo) );
    }

    size_t M, N;
    size_t numberOfSamples;
    complex ***target;
    complex ***source;
    const REAL sqrtsamples;
    const REAL twotimespi;

    fouriermath(Image *s);
    fouriermath(complex ***s, size_t m, size_t n);
    ~fouriermath();

    complex toFreqDomain2D(int x, int y, bool invert=false);
    complex ***dftslow(bool invert=false);
    complex ***dft(bool invert=false, bool shift=true);

    REAL deltaDirac(REAL t);
};

#endif // FOURIERMATH_H
