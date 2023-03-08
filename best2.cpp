#include <simplecpp>
main_program{
int n, sum, n2 = 0, n1 = 0, n0 = 0;
    repeat(7)
    {
       cin >> n;
       if (n == 2) n2 += 1;
       else if (n == 1) n1 += 1;
       else n0 += 1;

    }
  if (n2 >= 5)        // altleat five 2s are there
     sum = 10;
  else if (n2 == 4)   // 4 values taken
    { 
      if (n1 >= 1)    // altleast one 1
         sum = 9;
      else
         sum = 8;
    }
  else if (n2 == 3)    // 3 values taken
     {
        if (n1 >= 2)   // two 1s
           sum = 8;
        else if ( n1 == 1)
           sum = 7;
        else
           sum = 6;
     }
  else if (n2 == 2)    // 2 values taken
  {
        if (n1 >= 3)
           sum = 7;
        else if (n1 == 2)
           sum = 6;
        else if ( n1 == 1)
           sum = 5;
        else  
            sum = 4;
 }
  else if (n1 == 1)     // 1 value taken
         if ( n1 >= 4)
             sum = 6;
          
}