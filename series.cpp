#include <simplecpp>
main_program{
double x;
int n;
cin >> x >> n;
double t=x, s=x;
for (int k=1; k<=n; k++ ){ 
     t = (-1 * t * x * x)/( ((2*k)-1)*2*k);
     s= s + t;
}
   
cout << fixed;
cout.precision(2);
cout << s << endl;
    
}