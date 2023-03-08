#include <simplecpp>
int min_tiles(int w, int h)
{
    int x = min(w,h);
    int y = max(w,h);
    int i = 1;
    while(true){
        if (i < x)   i *= 2;
        else break;
        
    }
    cout << "i; " << i  << endl;
    return 0;
}
main_program{
    int w, h;
    cin >> w >> h;
    cout << min_tiles(w,h);
    
}


