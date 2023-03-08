#include <simplecpp>
main_program{
unsigned int base1, number1, base2, number2;
cin >> base1 >> number1;
cin >> base2 >> number2;
double value1 = 0, value2 = 0, sum;
int rem1, rem2;
double i=0.0 , j=0.0;
    while (number1 > 0) { 
                          rem1 = number1 % 10;
                          value1 = value1 + (rem1 * pow(base1,i));
                          number1 = number1/10;
                          i += 1.0;
    }
    while (number2 > 0) {
                          rem2 = number2 % 10;
                          value2 = value2 + (rem2 * pow(base2,j));
                          number2 = number2/10;
                          j += 1.0;
   }
sum = value1 + value2;
cout << sum << endl;
   
}