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
        if (B[i] != B[i-1])                 // only adding in U if it is unique
            {
                B1[r] = B[i];
                r++;
            }
    }
// Now we have two sorted arrays which have no repetitions and we need to find union
char U[30]; 
int u = 0;                                  // a to z + '/0'
int a = 0, b = 0;
// k, r = np. of unique letter max index = k-1
while ((a < k) && (b < r))
{
    if (A1[a] < B1[b])
    {
        U[u] = A1[a];
        a++;
        u++;
    }
    else if (B1[b] < A1[a])
    {
        U[u] = B1[b];
        b++;
        u++;
    }
    else 
    {
        U[u] = A1[a];
        a++;
        b++;
        u++;
    }

}
if ((a == k) && (b != r))
{   
    while( b < r)
    {
        U[u] = B1[b];
        b++;
        u++;
    }
}
if ((a != k) && (b == r))
{   
    while( a < k)
    {
        U[u] = A1[a];
        a++;
        u++;
    }
}
// right now value of u is no. of distinct elements
// max index is u-1
for(int i = 0; i <= u-2; i++)
    cout << U[i] << " ";
cout << U[u-1];
   
}