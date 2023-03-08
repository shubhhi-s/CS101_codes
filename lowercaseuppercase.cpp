#include <simplecpp>
main_program{
char c;
cin >> c;
if ( (c >= 97) && (c <= 122) )
   cout << "lowercase" << endl;
else if ( (c >= 65) && (c <= 90) )
   cout << "uppercase"  << endl;
else
   cout << "this is not a alphabet" << endl; //blunder!!!!  ques said "this is not alphabet"
}