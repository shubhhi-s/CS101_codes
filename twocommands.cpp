#include <simplecpp>
main_program       // let us take 2 chars at a time
                               // even n only
{   
    int x = 0;
    
         char a;
       // FF or FL
         cin >> a;   
         if (a == 'F')    // first char is F
         {  x += 1;
            cin >> a;
            if (a == 'F')
            x += 1;
         }
       // LF or LL
         if (a == 'F')
         {   cin >> a;
             if (a == 'F')
             x += 1;
         }
         cout << x << endl;
    
}
