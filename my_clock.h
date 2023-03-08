#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// 0 am  && 1 pm stored in value
class MyClock
{
    private:
    int hours;          // 24 hr clock
    int hours_12;       // 12 hr clock
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
    {  if(hours != 0 && hours != 12) 
        {
            hours_12 = hours % 12;
            value = hours/12;           //  0 if less than 12 i.e am and 1 if greater than 12 i.e pm
        }
        else if(hours == 0)
        {
            hours_12 = 12;
            value = 0;                  // am
        }
        else                            // hours = 12
        {
            hours_12 = 12;
            value = 1;                  // pm
        }
    }
    void currentTime()
    {
        am_pm();
        cout << setw(2) << setfill('0') << hours_12;
        cout << ":" ;
        cout << setw(2) << setfill('0') << minutes;
        cout << ":";
        cout << setw(2) << setfill('0') << seconds;
        if (value == 1)
            cout << " PM" << endl;
        else 
            cout << " AM" << endl;

    }

    int operator<(MyClock &myClock1)
    {
        am_pm();
        myClock1.am_pm();
        if(hours_12 < myClock1.hours_12)
            return 1;
        else if(hours_12 > myClock1.hours_12)
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
