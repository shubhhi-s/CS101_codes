#include <simplecpp>
main_program{
   // min marks
   int min = 10;
   int marks;
repeat(7)
{
   cin >> marks;
   if (marks < min)
             min = marks;
             cout << min;

}
cout << min << endl;

}