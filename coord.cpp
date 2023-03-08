#include <simplecpp>
void print_coordinates(int n)
{
int x = 0;  // 1D only two cases forward and backward
char a;
   repeat(n)
   {
      cin >> a;
      if (a == 'f')
         x += 1;
      if ( a == 'b')
         x -= 1;

   }
cout << x << endl;
return;   
}
main_program{
    int n;
    cin >> n;
    print_coordinates(n);
}
