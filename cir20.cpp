#include <simplecpp>
main_program{
    float pi=3.14;
    float r;
    cout << "what is radius?  ";
    cin >> r;
    turtleSim();
    repeat(360){ forward(pi/ 180*r); right(360.0/360);
    }
    right(90);
    forward(2*r);
    wait(8);

}