#include <simplecpp>
int min_tiles(int w, int h)
// if both sides are even then halving them would half the dimensions of all tiles but no. of tiles would remain same
// this is our basis of recursion.
// when w/2 and h/2 give 0, no tile is needed, BASE CASE
{  
    int result = 0;
    if ((w == 0) || (h == 0))          // rectangle no longer exists.
        return 0;
    else
    {   
        // we have modified cases so that we are able to calculate min_tiles only when w and h are both even
        // added tiles are 1*1 dimensions-- cant be filled by even sided tiles.
        if ((w % 2 == 1) && ( h % 2 == 0))           
            result = h + min_tiles(w/2,h/2);

        else if ((w % 2 == 0) && (h % 2 == 1))
            result = w + min_tiles( w/2, h/2);

        else if (( w % 2 == 1) && ( h % 2 == 1))
            result = w + h - 1 + min_tiles( w/2, h/2);

        else
            result = min_tiles(w/2 , h/2);
    
    }
    return result;
}
