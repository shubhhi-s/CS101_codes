#include <simplecpp>
main_program{
int a, b, lcm, m, n;
cin >> a >> b;
if (a >= b) m = a, n = b;
else m = b, n = a;
int p = m*n; 
while(m%n != 0){
     int nextm= n;
     int nextn= m % n;
     m = nextm;
     n= nextn;
   }

   lcm = p/n;
cout << lcm << endl;
    
}