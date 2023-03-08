#include <simplecpp>
int coin_piles(int a, int b)
// (1,2) and (2,1) are solutions so their linear combinations must also be a solution
// (a,b) = x(1,2) + y(2,1)
// solving gives x = (2a -b) / 3 and y = (2b -a)/3
// thus solutions exist iff 2a-b = 3n and 2b-a = 3m  where m & n are natural nos.
{
    if ( (( (2 * a) - b) % 3 == 0 ) && ( ( (2 * b) - a ) % 3 == 0 ) )
        return 1;
    else
        return 0;
}
