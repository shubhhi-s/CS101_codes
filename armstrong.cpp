#include <simplecpp>
bool check_armstrong (int k)
{
    int k_subs, term = 0, result = 0;
    
    k_subs = k;
    int d = 0;          // d is no. of digits
    for (int i = 1; i <= k ; i *= 10)
       { 
          d += 1;
       }
       
    for(int i = 10; k > 0; )
    {
       term = round(pow( (k % i) , d ));         // n % i gives the last digit
       k = k/10;                                 // removes the last digit each time
       result += term;

    }
    return ( result == k_subs);
}

int armstrong( int n)
{  int i = 1, result , number_of_terms = 1;
    while( number_of_terms <= n)
       { 
           if ( check_armstrong(i) == true)       //starts from i = 1 and checks each no. if it is armstrong or not
                   {result = i;
                    number_of_terms += 1 ;}
           i += 1;
       }

    return result;
  
}