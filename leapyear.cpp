#include <simplecpp>
main_program{
int n;
cin >> n;
if ( (n % 400 == 0) ||  ( ( n % 4 == 0) && ( n % 100 != 0) ) )
   cout << "Yes" << endl;
else
   cout << "No" << endl;

}