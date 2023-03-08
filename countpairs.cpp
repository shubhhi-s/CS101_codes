#include <simplecpp>
// compares the sum of jth element with all j-1 elements before it
main_program{
int n, l, r, pair = 0;
cin >> n >> l >> r;
int A[n];
cin >> A[0];
for(int j = 1; j < n ; j++)                         // i < j
{
    cin >> A[j];
    for(int i = 0; i < j ; i++)
    {
        if ((A[i] + A[j] >= l) && (A[i] + A[j] <= r))
            pair += 1;

    }

}
cout << pair << endl;    
}