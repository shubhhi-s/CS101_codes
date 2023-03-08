#include <simplecpp>
main_program{
unsigned int n;    
cin >> n;
int rem, value = 0, i=0;
    while (n > 0){
    rem = n % 10;
    value = value + (rem * pow(2,i));
    n = n/10;
    i += 1;
    }
cout << value << endl;
}