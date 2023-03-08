#include <iostream>
#include <cmath>
using namespace std;
struct Complex
{
    double real;
    double imag;
    void print()
    {
        if (imag >= 0)
            cout << real << " + " <<  imag << "i" << endl;
        else
             cout << real << " - " <<  abs(imag) << "i" << endl;
    }
    double modulus()
    {
        return sqrt( (real * real) + (imag *imag) );
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
        product.real = ((real * c.real) - (imag * c.imag));
        product.imag = ((imag * c.real) + (real * c.imag));
        return product;
    }
    double abs_angle_between(Complex C)
    {
        double cos_value;
        cos_value = ((real * C.real) + (imag * C.imag)) / (modulus() * C.modulus()) ;
        return acos(cos_value);

    }
    Complex conjugate()
    {
        Complex conj;                           // a variable of data type complex
        conj.real = real;
        conj.imag = -1 * imag;
        return conj;
    }
    double argument()
    {
        double value;
        value = atan2(imag, real);
        return value;
    }
};
#include<iostream>

int main(){
    double real, imag;
    double real2, imag2;
    std::cin >> real >> imag;
    std::cin >> real2 >> imag2;

    Complex c;
    c.real = real;
    c.imag = imag;

    Complex c2;
    c2.real = real2;
    c2.imag = imag2;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << "C1:\t\t";
    c.print();

    std::cout << "Modulus:\t" << c.modulus() << std::endl;
    std::cout << "Argument:\t" << c.argument() << std::endl;
    std::cout << "Angle b/w:\t" << c.abs_angle_between(c2) << std::endl;

    std::cout << "Conjugate:\t";
    c.conjugate().print();

    std::cout << "C1+C2:\t\t";
    c.add(c2).print();

    std::cout << "C1*C2:\t\t";
    c.multiply(c2).print();
}