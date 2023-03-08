#include <simplecpp>
bool consec(int a0, int a1, int a2)                    // if max-min-max or min-max-min occurs consecutively
{
    if (((a0 == 1) && (a1 == -1) && (a2 == 1)) || ((a0 == -1) && (a1 == 1) && (a2 == -1)))
        return true;
    else
        return false;

}
main_program{
int n, diff = 0, ridge= 0;
cin >> n;
int number[n], maxmin[n];
for(int i = 0; i < n; i++)
    maxmin[i] = 0;
for(int i = 0; i < n ; i++)
    cin >> number[i];
for(int i = 1; i < n-1; i++)
{
    if ( (number[i-1] < number[i]) && (number[i+1] < number[i]) )               // maxima condition
        {
            maxmin[i] = 1;
            ridge += 1;
        }

    else if( (number[i-1] > number[i]) && (number[i+1] > number[i]) )           // minima condition
        {
            maxmin[i] = -1;
            ridge += 1;
        }
    else
        continue;

}
// now we will consider only maxmin array
// 1: maxima     -1: minima     0: nothing
bool found = false;
if (ridge == 0)                   // already min case
    found = true;
if(found == false)
{
    for(int i = 1; i < n-1; i++)
    {
        found = consec(maxmin[i-1], maxmin[i], maxmin[i+1]);
        if (found == true)
        {
            cout << " loop1 " << i << endl;
            diff = 3;
            break;
        }
        else
            continue;
    }

    if (found == false)                        // no condition of consecutive max-min-max or min-max-min
    {
        for(int i = 1; i < n-1 ; i++)
        {  
            if(((maxmin[i-1] == 1) && (maxmin[i] == -1)) || ((maxmin[i-1] == -1) && (maxmin[i] == 1)) )         //consecutive maxima and minima
            {
                cout << " loop2 " << i << endl;
                found = true;
                if(number[i-1] == number[i+1])
                    diff = 2;
                else
                    diff = 1;
                break;
            }

        }
    }
    if (found == false)                             // max/min is isolated
        diff = 1;
}
cout << ridge - diff << endl;

}