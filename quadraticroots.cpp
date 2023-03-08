#include <simplecpp>
main_program{
int a,b,c ;
double D;
cin >> a >> b >> c;
D = b*b - 4*a*c;
if (D > 0)
   cout << "real and distinct" << endl;
else if (D < 0)
   cout << "complex" << endl;
else 
   cout << "real and same" << endl;
}