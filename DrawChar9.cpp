#include <simplecpp>
main_program{
turtleSim();
   int n;
   cout << "Write length of each side  ";
   cin >> n;
   repeat(4) { left(90);
               forward(n);

   }
   repeat(2){ right(90);
              forward(n);
   }
   right(180);
   penUp();
   forward(n);
   left(90);
   forward(n);
   right(90);

   wait(10);

           
}