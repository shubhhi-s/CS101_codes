#include <simplecpp>
main_program{
int n,p;
double minkD=0,result;
cin >> n >> p;
    repeat(n){ double ui, vi;
             cin >> ui >> vi;
             minkD = minkD + pow (abs(ui -vi), p*1.0);

    }
result = pow(minkD, 1.0/p);
cout << fixed;		
cout.precision(2);
cout << result << endl;


}