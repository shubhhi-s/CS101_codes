#include <simplecpp>
main_program{
int n;
cin >> n;
int number[n], first[n], last[n];
for(int i = 0; i < n; i++)                      //storing the index of first time say 2 occurs in first[2] and the last time in last[2]
{                                               
    first[i] = -1;
    last[i] = -1;
}
for(int i = 0; i < n ; i++)
    cin >> number[i]; 
for(int i = 1; i < n ; i++)                    // storing value in first[n] only after the no. occurs atleast twice
{   
    for(int j = 0; j < i; j++)
        if (number[j] == number[i])
        {
            first[number[j]] = j;
            last[number[j]] = i;
            break;
        }
        else
            continue;
    
}
// now first[i] stores the first time i occurs and last[i] strores the last time i occurs.. if i occurs only once both first[i] and last[i] will be -1
int max = 0;                        // if i does not repeat then first[i] - last[i] = 0
for(int i = 0; i < n; i++)
{
    if((last[i] - first[i]) > max)
        max = last[i] - first[i];

}
cout << max << endl;
    
}