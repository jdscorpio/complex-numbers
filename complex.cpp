#include <iostream>
#include "complex.h"

using namespace std;

void print_complex(complex c)
{
    if (c.im >= 0)
        cout << c.re << "+" << c.im << "i" << endl;
    else
        cout << c.re << c.im << "i" << endl;
}

complex add_complex(complex a, complex b)
{
    complex c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}