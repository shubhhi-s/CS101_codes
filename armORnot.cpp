// need to know number of digits
// user inputs n
// from the series of armstrong numbers, we need to provide the nth arm. no.

#include <simplecpp>
main_program
{   int n, n_subs, term = 0, result = 0;
    cin >> n;
    n_subs = n;
    int d = 0;          // d is no. of digits
    for (int i = 1; i <= n ; i *= 10)
       { 
          d += 1;
       }
       cout << "d is " << d << endl;
    
    for(int i = 10; n > 0; )
    {
       term = round(pow( (n % i) , d ));         // n % i gives the last digit
       cout << "term is " << term << endl;
       n = n/10;                                 // removes the last digit each time
       result += term;

    }
    cout << result << endl;
if (result == n_subs)      // value of n got changed so required a substitute to remember the initial value of n
    {cout << "it's armstrong" << endl;}
else
    {cout << "not armstrong" << endl;}





}