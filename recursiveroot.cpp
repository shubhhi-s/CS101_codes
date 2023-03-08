#include <simplecpp>
#include <iomanip>
main_program{
int n;
cin >> n;
double i = pow(2.0 , 0.5);
   repeat(n-1){ i = pow ( 2+ i , 0.5);

   }
   cout << fixed;		
   cout.precision(2);
   cout << i << endl;

}