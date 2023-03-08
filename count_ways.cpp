#include <iostream>
// We can write F(n)as F(n-1)+F(n-2)+F(n-3) .... only till F(n-6)
// only 1 to 6 can be used to write sum
// below n-6, we would be taken digits greater than 6 to form the required sum
// say n = 4, F(4) = 1+ 3    no. of ways to write 3 is F(3)
// F(4) = 2 + 2              no. of ways to wrie 2 is F(2)
// F(4) = 3 + 1              no. of ways to write 1 is F(1)
// F(4) = 4 + 0              0 can be written only in 1 way... from this the value starts returning in recurrsion
int count_ways(int n)
{
    int result = 0;
    if (n == 0)
        return 1;   
    for( int i=1; i <= 6; i++)           // only 6 iterations max will happen till we have 6 as one of the die throw
    {
        if (n-i >= 0)                    //we don't want it to become negative.
        result += count_ways(n-i);
    }
    return result;

}