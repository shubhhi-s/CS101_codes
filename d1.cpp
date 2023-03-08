#include <simplecpp>
int find(int* A, int i, int j)
{
    cout << " hello ";
    return A[i][j];

}
main_program{
    int A[3][3];
    for (int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
                cin >> A[i][j];
        }
    find(A, 2, 2);

}