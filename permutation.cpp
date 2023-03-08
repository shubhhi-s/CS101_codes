#include <simplecpp>
void permutation(int &a, int &b, int &c, int n)
{ // abc changes to
  int a1 = a;
  int b1 = b;
  int c1 = c;
    if (n == 1)        //abc
       {
          a = a1;
          b = b1;
          c = c1;
       }
    else if (n == 2)   //acb
        {
            a = a1;
            b = c1;
            c = b1;
        }
    else if (n == 3)   //bac
        {
            a = b1;
            b = a1;
            c = c1;
        }
    else if (n == 4)   //bca
        {
            a = b1;
            b = c1;
            c = a1;
        }
    else if (n == 5)   //cab
        {
            a = c1;
            b = a1;
            c = b1;
        }
    else               //cba
       {
          a = c1;
          b = b1;
          c = a1;

       }
    return;

}