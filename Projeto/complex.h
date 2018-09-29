#ifndef COMPLEX_H
#define COMPLEX_H
#include <istream>
#include <ostream>
#include <cmath>

#define REAL double


using namespace std;

class complex
{
public:
    REAL r;
    REAL i;


    static complex zero() {
        return complex(0,0);
    }

    static complex one() {
        return complex(1,0);
    }

    static complex j() {
        return complex(0, 1);
    }

    static complex getfrompolar(REAL m, REAL p) {
        REAL r = m * cos(p);
        REAL i = m * sin(p);
        return complex(r, i);
    }

    static complex pot(complex base, complex ex) {
        REAL a  = base.r;
        REAL b = base.i;
        REAL c = ex.r;
        REAL d = ex.i;

        REAL arctan = base.getphase();

        REAL x  = a * a + b * b;
        REAL u = c * arctan + 0.5 * d * log(x);
        REAL r = cos(u);
        REAL i = sin(u);
        return complex(r, i);
    }

    complex(REAL r=0.0f, REAL i=0.0f);
    complex(const complex &c);

    complex operator -(const complex &c) const;
    complex operator +(const complex &c) const;
    complex operator *(const complex &c) const;
    complex operator /(const complex &c) const;
    complex conj(const complex &c) const;
    REAL module() const;
    REAL real() const;
    REAL img() const;
    complex& operator =(const complex &c);
    bool operator ==(const complex &c) const;

    REAL getphase() const;
    REAL getpot() const;

    friend istream& operator>> (istream& ci, complex& f);
    friend ostream& operator<< (ostream& co, const complex& f);
};

#endif // COMPLEX_H
