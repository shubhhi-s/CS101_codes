#include <simplecpp>
main_program{
initCanvas("bullseye", 500, 500);
Circle b1(250,250,180), y1(250,250,140), b2(250, 250, 100), y2(250,250,60), r1(250,250,20);
b1.setFill(true);
b2.setFill(true);     // defining setFill first or after setColor does different things 
y1.setFill(true);     // if fill first then it creates all black and then req. color
y2.setFill(true);     // if fill done later it draws shape with outline and then fills
r1.setFill(true);
b1.setColor(COLOR(0,0,0)); //black
y1.setColor(COLOR(255,255,0)); //yellow
b2.setColor(COLOR(0,0,0));   //black
y2.setColor(COLOR(255,255,0));   //yellow
r1.setColor(COLOR(255,0,0));  //red

wait(10);

}
