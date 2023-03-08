#include <simplecpp>
// due to problem in cyclicity -- forming a new matrix for the smaller ones instead of continuing with orginal 
long int det(int matrix[10][10], int n)          // formed a bigger matrix.. n is order of matrix
{   int res = 0;
    if (n == 1)
        return matrix[0][0];
    else if(n == 2)                                            // det of 2 * 2 matrix
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else
    {
       
        int small_i, small_j;
        for(int column = 0; column < n ; column += 1)
        {
            int small_matrix[10][10];                           // new small_matrix for each column
            int sign = 1;                                       // alternate + and -
            small_i = 0;                                        // starts from 0 for each new column
            for(int i = 1; i < n ; i += 1)                      // same row already skipped
            {
                small_j = 0;
                for(int j = 0; j < n; j += 1)
                {
                    if (j == column)                            // skipping the same column
                        continue;
                    else 
                    {
                        small_matrix[small_i][small_j] = matrix[i][j];       // should not be done if j == column
                        small_j += 1;    
                    }        
                }
                small_i += 1;
            }
            res += sign * matrix[0][column] * det(small_matrix, n-1 );  
            sign *= -1;     
        }
        return res;
    }
    
}
main_program{
int A[10][10];                               //lets have a bigger matrix
int n;
cin >> n;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
        cin >> A[i][j];
}
// now n * n matrix is filled with what we want
cout << det(A, n) << endl;    
}