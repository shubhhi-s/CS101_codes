#include <simplecpp>
// const int n holds values of n of initial question
// s_mat is the order of smaller matrix formed
// modulus ensures cyclic behaviours 0 --- 1 --- 2 --- .....  --- n-1 --- 0 --- 1
long int det(int A[][6], const int n, int s_mat, int li, int lj)          // li and lj - i and j values of leftmost element
{
    if(s_mat == 1)
        return A[li % n][lj % n];
    else if ( s_mat == 2)
        return (A[li % n][lj % n] * A[(li+1) % n][(lj+1) % n] - A[(li+1) % n][lj % n] * A[(li) % n][(lj+1) % n]);        // ad - bc for [ a b/ c d]
    else if (s_mat % 2 == 1)                //odd
    {
        long int res = 0;
        for(int j = 0; j < s_mat ; j++)
        {
            res += A[li % n][(lj+ j) % n] * det(A, n , s_mat - 1, (li + 1) % n, (lj + j + 1) % n );
        }
        return res;

    }
    else                                    // even
    {
        long int res = 0;
        for(int j = 0, sign = 1; j < s_mat; j++ , sign *= -1)
        {
            res += sign * A[li % n][(lj + j) % n] * det(A, n, s_mat - 1, (li + 1) % n , (lj + j +1) % n);
        }
        return res;
    }

}

main_program{
int A[6][6];                               //lets have a bigger matrix
int n;
cin >> n;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
        cin >> A[i][j];
}
// now n * n matrix is filled with what we want
cout << det(A, n , n, 0 , 0) << endl;    
}