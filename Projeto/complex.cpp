#include "complex.h"

complex::complex(REAL r, REAL i)
{
    this->r = r;
    this->i = i;
}

complex::complex(const complex &c) {
    this->r = c.r;
    this->i = c.i;
}

complex complex::operator -(const complex &c) const {
    complex nc;
    nc.r = r - c.r;
    nc.i = i - c.i;
    return nc;
}

complex complex::operator +(const complex &c) const {
    complex nc;
    nc.r = r + c.r;
    nc.i = i + c.i;
    return nc;
}

complex complex::operator *(const complex &c) const {
    complex nc;
    nc.r = r * c.r - i * c.i;
    nc.i = r * c.i + i * c.r;
    return nc;
}

complex complex::operator /(const complex &c) const {
    complex nc;
    double d = c.r * c.r + c.i * c.i;
    nc.r = (r * c.r + i * c.i)/d;
    nc.i = (c.r * i - r * c.i)/d;
    return nc;
}

complex complex::conj(const complex &c) const {
    complex nc;
    nc.r = c.r;
    nc.i = -c.i;
    return nc;
}

REAL complex::module() const {
    return sqrt(r * r + i * i);
}

REAL complex::real() const {
    return r;
}

REAL complex::img() const {
    return i;
}

complex& complex::operator =(const complex &c) {
    if (this != &c) {
        this->r = c.r;
        this->i = c.i;
    }
    return *this;
}

bool complex::operator ==(const complex &c) const {
    return r == c.r && i == c.i;
}

REAL complex::getphase() const {
    if (r != 0.0) {
        double f = atan2(i, r);
        if ( i < 0 && r < 0) {
            f -= M_PI;
        } else if ( i > 0 && r < 0) {
            f += M_PI;
        }
        return f;
    } else {
        if (i > 0) {
            return M_PI/2.0;
        } else if (i < 0) {
            return -M_PI/2.0;
        } else {
            return 2*M_PI;
        }
    }
}

REAL complex::getpot() const {
    return r*r + i*i;
}

ostream& operator<< (ostream& co, const complex& f)
{
    co << "(" << f.r << ", " << f.i << ")";
    return co;
}

istream& operator>> (istream& ci, complex& f)
{
    ci >> f.r >> f.i;
    return ci;
}
