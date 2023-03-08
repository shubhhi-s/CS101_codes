#include <simplecpp>
// li leftmost element i value
// lj leftmost element j value
int det(int A[][4], int li, int lj, int n)
{ 
    int ans = 0;
    if (n == 2)
        {
           res =  ((A[li/n][lj/n] * A[(li+1)/n][(lj+1)/n]) - (A[(li+1)/n][lj/n] *A[li/n][(lj+1)/n]));
           return res;
        }
    
    for (int j = 0; j < n ; i++)
    {
        int term;
        term = det(A, 0 , j, n - 1);
        if (j % 2 == 0)
            


    }
    
    
    
    
    
    
    
    
    /*int res;
    res = ((arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]));
    return res;
    */

}

main_program{
int A[3][3] = {{5, 2, 5} , {4, 3, 4}, {2, 9, 8} };
cout << det(A, 2) << endl;

   
}