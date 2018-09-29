#include "fouriermath.h"

#include <iostream>

using namespace std;


fouriermath::fouriermath(Image *s) : sqrtsamples(sqrt(s->width*s->height)), twotimespi(2 * M_PI)
{

    this->numberOfSamples = s->width * s->height;
    this->source = new complex**[s->width];
    this->target = new complex**[s->width];
    M = s->width;
    N = s->height;

    for (size_t i = 0; i < M; i++) {
        this->target[i] = new complex*[s->height];
        this->source[i] = new complex*[s->height];
        for (size_t j = 0; j < N; j++) {
            pixel p[3];
            get_pixel(s, i, j, p);
            this->source[i][j] = new complex(p[0],0);
            this->target[i][j] = new complex(0,0);
        }
    }
}

fouriermath::fouriermath(complex ***s, size_t m, size_t n) : sqrtsamples(sqrt(m*n)), twotimespi(2 * M_PI)
{
    this->numberOfSamples = m * n;
    this->source = new complex**[m];
    this->target = new complex**[m];
    M = m;
    N = n;

    for (size_t i = 0; i < M; i++) {
        this->target[i] = new complex*[n];
        this->source[i] = new complex*[n];
        for (size_t j = 0; j < N; j++) {
            this->source[i][j] = new complex(*s[i][j]);
            this->target[i][j] = new complex(0,0);
        }
    }
}


complex fouriermath::toFreqDomain2D(int x, int y, bool invert) {
    complex res(0,0);
    complex ***origin = source;
    if (invert) {
        origin = target;
    }

    REAL xM = x/(REAL)M;
    REAL yN = y/(REAL)N;

    //complex E(M_E,0.0);
    for (size_t m = 0; m < M; m++) {
        for (size_t n = 0; n < N; n++) {
            REAL j = xM * m  + yN * n;
            REAL u = twotimespi * j;

            //e^(ix) = cos(x) + isen(x)
            //e^[-iu] = cos(-u) + isen(-u) = cos(u) - isen(u)

            REAL csu = cos(u);
            REAL snu = sin(u);

            if (!invert) {
                  //res = res + ( (*origin[m][n]) * complex::pot(E, complex(0,-u)) );
                complex g(csu, -snu);
                res = res + ( (*origin[m][n]) * g);
            } else {
                 //res = res + ( (*origin[m][n]) * complex::pot(E, complex(0,u)) );
                 complex g(csu, snu);
                 res = res + ( (*origin[m][n]) * g);
            }
        }
    }

    res.r = res.r/sqrtsamples;
    res.i = res.i/sqrtsamples;
    return res;
}


complex ***fouriermath:: dftslow(bool invert) {

    size_t shiftx = M/2+1;
    size_t shifty = N/2+1;

    complex ***dest = target;

    if (invert) {
        dest = source;
        shiftx = 0;
        shifty = 0;
    }

    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            complex r = toFreqDomain2D(i+shiftx, j+shifty, invert);
            dest[i][j]->i = r.i;
            dest[i][j]->r = r.r;
        }
    }
    return dest;
}

complex ***fouriermath::dft(bool invert, bool shift) {
    size_t shiftx = 0;
    size_t shifty = 0;

    if (shift) {
        shiftx = floor(M/2);
        shifty = floor(N/2);
    }

    complex ***dest = target;
    complex ***origin = source;

    if (invert) {
        dest = source;
        origin = target;
    }

    REAL twopiunderN = this->twotimespi/N;
    REAL twopiunderM = twotimespi/M;

    complex*** lines = fouriermath::makebuffer(M, N);

    for (size_t x = 0; x < M; x++) {
        for (size_t v = 0; v < N; v++) {
            complex col(0,0);
            for (size_t y = 0; y < N; y++) {
                REAL theta = twopiunderN * ((v+shifty)) * ( (y+shifty));
                REAL ca = cos(theta);
                REAL sa = sin(theta);
                if (!invert) {
                    complex number(ca, -sa);
                    col = col + ((*origin[x][y]) * number);
                } else {
                    complex number(ca, sa);
                    col = col + ((*origin[x][y]) * number);
                }
            }
            lines[x][v]->i = col.i;
            lines[x][v]->r = col.r;
        }
    }

    for (size_t v = 0; v < N; v++) {
        for (size_t u = 0; u < M; u++) {
            complex col(0,0);
            for (size_t x = 0; x < M; x++) {
                REAL theta = twopiunderM * ((u+shiftx)) * ((x+shiftx));
                REAL ca = cos(theta);
                REAL sa = sin(theta);
                if (!invert) {
                    complex number(ca, -sa);
                    col = col + ((*lines[x][v]) * number);
                } else {
                    complex number(ca, sa);
                    col = col + ((*lines[x][v]) * number);
                }
            }

            if (!invert) {
                dest[u][v]->i = col.i;
                dest[u][v]->r = col.r;
            } else {
                dest[u][v]->i = col.i/numberOfSamples;
                dest[u][v]->r = col.r/numberOfSamples;
            }
        }
    }

    fouriermath::deletebuffer(lines, M, N);
    return dest;
}

/**
 *  This computes an in-place complex-to-complex FFT
 *  x and y are the real and imaginary arrays of 2^power points.
 *  if inverse is true, reverse transform is given.
 */
/*
bool fouriermath::fastTransform(bool inverse, int power) {

    long n,i,i1,j,k,i2,l,l1,l2;
    double c1,c2,tx,ty,t1,t2,u1,u2,z;

    // Calculate the number of points
    n = 1;
    for (i=0;i<power;i++)
        n *= 2;

    // Do the bit reversal
    i2 = n >> 1;
    j = 0;
    for (i=0;i<n-1;i++) {
        if (i < j) {
            tx = x[i];
            ty = y[i];
            x[i] = x[j];
            y[i] = y[j];
            x[j] = tx;
            y[j] = ty;
        }
        k = i2;
        while (k <= j) {
            j -= k;
            k >>= 1;
        }
        j += k;
    }

    // Compute the FFT
    c1 = -1.0;
    c2 = 0.0;
    l2 = 1;
    for (l=0;l<power;l++) {
        l1 = l2;
        l2 <<= 1;
        u1 = 1.0;
        u2 = 0.0;
        for (j=0;j<l1;j++) {
            for (i=j;i<n;i+=l2) {
                i1 = i + l1;
                t1 = u1 * x[i1] - u2 * y[i1];
                t2 = u1 * y[i1] + u2 * x[i1];
                x[i1] = x[i] - t1;
                y[i1] = y[i] - t2;
                x[i] += t1;
                y[i] += t2;
            }
            z =  u1 * c1 - u2 * c2;
            u2 = u1 * c2 + u2 * c1;
            u1 = z;
        }
        c2 = sqrt((1.0 - c1) / 2.0);
        if (inverse == false)
            c2 = -c2;
        c1 = sqrt((1.0 + c1) / 2.0);
    }

    // Scaling for forward transform
    if (inverse == false) {
        for (i=0;i<n;i++) {
            x[i] /= n;
            y[i] /= n;
        }
    }

    return true;
}*/



fouriermath::~fouriermath(){
    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            delete source[i][j];
            delete target[i][j];
        }
        delete [] source[i];
        delete [] target[i];
    }
    delete [] source;
    delete [] target;
    source = 0;
    target = 0;
}


