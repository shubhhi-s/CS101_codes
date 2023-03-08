#include <iostream>
#include <cmath>
using namespace std;
struct Complex
{
    // a + bi
    double real;
    double imag;
    Complex conjugate()
    {
        // a - bi
        Complex conj;                           // a variable of data type(struct) complex
        conj.real = real;
        conj.imag = -1 * imag;
        return conj;
    }
   
    double modulus()
    {
        return sqrt( (real * real) + (imag *imag) );
    }
    double argument()
    {
        double value;
        value =  atan2(imag, real);            // arctan(y/x)
        return value;
    }
    Complex add(Complex c)
    {
        Complex sum;
        sum.real = real + c.real;
        sum.imag = imag + c.imag;
        return sum;
    }
    Complex multiply(Complex c)
    {
        Complex product;
        product.real = ((real * c.real) - (imag * c.imag));         // ac - bd
        product.imag = ((imag * c.real) + (real * c.imag));         // (ad + bc)i
        return product;
    }
    void print()
    {
        if (imag >= 0)
            cout << real << " + " <<  imag << "i" << endl;
        else
             cout << real << " - " <<  -1 * imag << "i" << endl;
    }
    double abs_angle_between(Complex C)
    {
        double cos_value;
        cos_value = ((real * C.real) + (imag * C.imag)) / (modulus() * C.modulus()) ;       // (u . v)/ |u| * |v|
        return acos(cos_value);

    }

};