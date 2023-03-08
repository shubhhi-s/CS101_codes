#include <simplecpp>
void print_coordinates(int n)
{
    char a;                  // input character
    int x = 0 , y = 0;
    int nl = 0 ;            // no. of L used     

    // its to note that what really matters ? for any F only the no. of Ls used before it matters. F movement is decided by no. of Ls used before it

    repeat(n)
       {  
            cin >> a;
            if ( a == 'L'){
                             nl += 1;
                             continue;
            }

            
            if ( a == 'F')
              {
                 if (nl % 4 == 0)             // 0,4,8,12.... 4n            +x
                     x += 1;
                 else if ( nl % 4 == 1)        // 1,5,9,13..... 4n + 1       +y
                    y += 1;
                 else if (nl % 4 == 2 )         // 2,6,10....    4n + 2      -x
                     x -= 1;
                 else                         // 3,11,15......  4n + 3      -y
                     y -= 1;
                     
              }


       }
    
     cout << x << " " << y << endl ;
     return;

}
