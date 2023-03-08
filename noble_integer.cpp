#include <simplecpp>
main_program{
int n, result = 0;
cin >> n;
int array[n];
for(int i = 0; i < n; i++)
    cin >> array[i];
for(int i = 0; i < n; i++)
{
    int larger_nos = 0;                     // new variable for each i
    for(int j = 0; j < n; j++)
        {
            if (array[j] > array[i])
                larger_nos += 1;
                
        }
    if (larger_nos == array[i])
        {
            result = 1;
            break;
        }
}
cout << result << endl;                     // 0 if no such no. found 
                                            // 1 if such a no. has been found

}