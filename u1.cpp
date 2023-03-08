#include <simplecpp>
main_program{
int n, m;
cin >> n >> m;                              // A B are sorted so same element occurs consecutively
char A[n], B[m], A1[n], B1[m];              // U just has all the unique elements of A and B
int k = 0;                  
for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] != A[i-1])                 // only adding in U if it is unique
            {
                A1[k] = A[i];
                k++;
            }
    }
int r = 0;
for(int i = 0; i < m; i++)
    {
        cin >> B[i];
        if (B[i] != B[i-1])        // only adding in U if it is unique
            {
                B1[r] = B[i];
                r++;
            }
    }
cout << A << endl;
cout << A1 << k << endl;
cout << B << endl;
cout << B1 << r << endl;
}
