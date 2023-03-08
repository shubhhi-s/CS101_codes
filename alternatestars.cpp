#include <simplecpp>
main_program{
  int n;
  
  cin >> n;
  repeat(n){ repeat(n) { cout << "* " ;}
             cout << "\n";
             
             repeat(n-1) { cout << " *" ;}
             cout << "\n";
             
  }

}