#include <simplecpp>
main_program{
int base1, number1;
cin >> base1 >> number1;
int value1 = 0;
int rem1, i=0;
while (number1 > 0) { 
                      rem1 = number1 % 10;
                      value1 = value1 + (rem1 * pow(base1,i));
                      number1 = number1/10;
                      i += 1;
    }
cout << value1;


}