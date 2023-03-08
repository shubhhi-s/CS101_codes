#include <simplecpp>
int even_tiles(int w, int h)
// this calculates all the tiles except 1*1
{   
    int number = 0;
    int x = min(w,h);
    int y = max(w,h);
    int i = 1;
    for(i = 1; i <= x; i *= 2){}
    i = i/2;
// biggest square tile which cover has area i*i
   int y1 = y % i;
   int x1 = x - i;
// area covered by biggest tile = i * (y/i)
   number += y/i;
    if (y1 > 1)
       number += even_tiles(y1,x);
    if ( x1 > 1)
       number += even_tiles(x1,y);
    return number;
}

// to add no. of 1*1 tiles into even_tiles
int min_tiles(int w, int h)
{
    int even = even_tiles(w,h);
    int result = even;
    if (h % 2 == 1)
        result += w;
    if ( w % 2 == 1)
        result += h;
    if ((w % 2 == 1) && (h % 2 == 1))    //common tile counted twice
       result -= 1;
    return result;
}