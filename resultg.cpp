#include <simplecpp>
main_program{
int n, answer, sum = 0, n2 = 0, n1 = 0, n0 = 0;
repeat(7)
    {
       cin >> n;
       if (n == 2) n2 += 1;
       else if (n == 1) n1 += 1;
       else n0 += 1;
       sum += n;

    }

if ( n0 >= 2)
   answer = sum;
else if  ( ( n0 == 1) && (n1 >= 1) ) // one zero and atleast one 1
    answer = sum - 1;
else if ( (n0 == 1) && (n1 == 0))    // six 2s are added
    answer = sum - 2;
else if ( (n0 == 0) && (n1 >= 2))    // no 0s and atleast two 1s
    answer = sum - 2;
else if ( (n0 == 0) && (n1 == 1))    // only one 1 there
    answer = sum - 3;
else
    answer = sum - 4;

cout << answer;
}
