#include <simplecpp>
int sier(double s, int t)
{
    if (t == 1)                     //base case
        { 
            repeat(3)
            {   
                forward(s);    
                left(120);
            }
        }
// at the end turtle facing right (initial dir)
F(2) = F(1) +
repeat(3){ 
     forward(s/2);
     left(60);
}
// at the end turtle facing right (initial dir) at mid point of t = 1 triangle
F(3) = F(1) + F(2) +
repeat






}