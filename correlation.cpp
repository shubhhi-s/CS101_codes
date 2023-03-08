#include <simplecpp>
main_program{
int n;
cin >> n;
double marks_x[n], marks_y[n];
for(int i = 0; i < n; i++)
    cin >> marks_x[i];
for(int i = 0; i < n; i++)
    cin >> marks_y[i];
double sum_xy = 0, sum_x = 0, sum_y = 0 ,sum_x2 = 0, sum_y2 = 0; //storing these values
for(int i = 0; i < n; i++)
{
    sum_x += marks_x[i];                            //storing sigma x
    sum_x2 += marks_x[i] * marks_x[i];              // storing sigma x^2

    sum_y += marks_y[i];
    sum_y2 += marks_y[i] * marks_y[i];

    sum_xy += marks_x[i] * marks_y[i];              // storing sigma x * y
}
double deno_sq;
deno_sq =  ( (n * sum_x2) - (sum_x * sum_x) ) * ( (n * sum_y2) - (sum_y * sum_y) );   // the formula
if (deno_sq != 0)
{
    double numr, deno;
    deno = pow(deno_sq, 0.5);
    numr = (n * sum_xy) - (sum_x * sum_y);
    double result = numr/deno;
    cout << fixed;
    cout.precision(2);
    cout << result << endl;
}
else 
    cout << -1 << endl;                     //if denominator = 0

}
