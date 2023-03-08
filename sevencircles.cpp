#include <simplecpp>
main_program{
    turtleSim();
    repeat(6){ 
               repeat(360){ forward(PI/ 180*20.0); 
                            right(360.0/360);

               }
               repeat(60){ forward (PI/ 180*20.0); 
                           left(360.0/360);

               }
    }
  
    wait(5);
}