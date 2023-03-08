#include <iostream>
//given conditions :-
// W(n)= W(n-1)+W(n-2)+W(n-3)
// W(0) = W(1) = W(2) = 1
int W(int n)
{
    int result;
    if (n < 3)
        return 1;                          // for n = 0,1,2
    
    result = W(n-1)+W(n-2)+W(n-3);        //defn of given function for n >= 3
    return result;

}

