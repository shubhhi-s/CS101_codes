#include <simplecpp>
main_program{
initCanvas("bullseye", 500, 500);
Circle b1(250,250,180), y1(250,250,140), b2(250, 250, 100), y2(250,250,60), r1(250,250,20);
b1.setColor(COLOR("black")); //black
y1.setColor(COLOR("yellow")); //yellow
b2.setColor(COLOR("black"));   //black
y2.setColor(COLOR("yellow"));   //yellow
r1.setColor(COLOR("red"));  //red
b1.setFill(true);
b2.setFill(true);
y1.setFill(true);
y2.setFill(true);
r1.setFill(true);
wait(10);

}