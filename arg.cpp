#include <iostream>
#include <cmath>
using namespace std;
// argument
 struct Complex
{
    double real;
    double imag;
    double argument()
    {
        double value;
        value = atan2(imag,real);
        return value;

    }
    void print()
    {
        if (imag >= 0)
            cout << real << " + " <<  imag << "i" << endl;
        else
             cout << real << " - " <<  abs(imag) << "i" << endl;
    }
    
};
int main(){
    Complex c;
    double real, imag;
    std::cin >> real >> imag;
    c.real = real;
    c.imag = imag;
    std::cout << "C1:\t\t";
    c.print();
    std::cout << "Argument:\t" << c.argument() << std::endl;
}
/*
int main()
{
    double a = 3, b =4;
    cout << atan2(b,a) << endl;
}
*/