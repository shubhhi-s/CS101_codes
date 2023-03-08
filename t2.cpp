#include <simplecpp>
/* #include <iomanip>
    main_program{
    int num;
    cin >> num;
    cout << setw(5) << setfill('0') << num << endl;
    
} */
#include <cmath>
using namespace std;
// 0 am  && 1 pm
class MyClock
{
    private:
    int hours;
    int minutes;
    int seconds;
    int value;
    public:
    MyClock(int seconds)
    {
        this->seconds = seconds;
        minutes = 11;
        hours = 10;
    }
    MyClock(int minutes, int seconds)
    {
        this->minutes = minutes;
        this->seconds = seconds;
        hours = 22;
    }
    MyClock(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    void am_pm()
    {   
        if(hours == 0)
            {
                hours = 12;
                value = 0;
            }
        else if((hours < 12) && (hours > 0) )
            {
                value = 0;
            }
        else if(hours == 12)
            {
                value = 1;
            }
        else
            {
                hours -= 12;
                value = 1;
            }
    }
    void currentTime()
    {
        am_pm();
        cout << hours << ":" << minutes << ":" << seconds;
        if (value == 1)
            cout << " PM" << endl;
        else 
            cout << " AM" << endl;

    }

    int operator<(MyClock myClock1)
    {
        // already am_pm called by main program
        if(hours < myClock1.hours)
            return 1;
        else if(hours > myClock1.hours)
            return 0;
        else                                            // both hours are equal. need to see minutes and seconds
        {
            if(minutes < myClock1.minutes)
                return 1;
            else if(minutes > myClock1.minutes)         // hours and minutes same .. still need to see seconds
                return 0;
            else
            {
                if(seconds < myClock1.minutes)
                    return 1;
                else 
                    return 0;
            }
        }
    }
    ~MyClock()
    {
        currentTime();
    }
       
};
int main()
{
    int hours, minutes, seconds;
    cin >> seconds;
    MyClock clock1(seconds);

    cin >> minutes >> seconds;
    MyClock clock2(minutes, seconds);

    cin >> hours >> minutes >> seconds;
    MyClock clock3(hours, minutes, seconds);
    
    cin >> hours >> minutes >> seconds;
    MyClock clock4(hours, minutes, seconds);

    int compare1 = clock1 < clock2;
    int compare2 = clock3 < clock4;


    clock1.currentTime();
    clock2.currentTime();
    clock3.currentTime();
    clock4.currentTime();

    cout << compare1 << endl;
    cout << compare2 << endl;

    cout << "Calling Destructor:" << endl;
    return 0;
}
