#include<simplecpp>
main_program{
  int n, i=0 ;
  cin >> n;
  repeat(n){ cout << "*";}
             cout << "\n";
            
  repeat (n-2){ i += 1;
                repeat (n-i-1) {cout << " " ; }
                cout << "*" << "\n" ;
  }
   repeat(n){ cout << "*";}
             cout << "\n";

}