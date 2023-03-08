#include <simplecpp>
void movement(char n)
{
    if (n == 'F')           // always use single quotes ' ' for char
       { forward(50); }
    if (n == 'L')
       { left(90) ;}

}
main_program{
turtleSim();
repeat(10) {char n;
            cin >> n;
            movement(n);

           }
}