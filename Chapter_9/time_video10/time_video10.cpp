#include <iostream>
using namespace std;

class Time
{
    public:
        Time();
        Time(int, int, int);
        Time(Time &);
        void setTime(int, int, int);
        int getHours();
        int getMin();
        int getSec();
        void universalTime();
        void standardTime();
    private:
        int hours;
        int min;
        int sec;
};

Time::Time()
{
    hours = 0;
    min = 0;
    sec = 0;
}

Time::Time(int h, int m, int s)
{
    hours = h;
    min = m;
    sec = s;
    hours = (hours >= 0 && hours < 24) ? hours: 0;
    min = (min >= 0 && min < 60) ? min: 0;
    sec = (sec >= 0 && sec < 60) ? sec: 0;
}

Time::Time(Time &t)
{
    hours = t.hours;
    min = t.min;
    sec = t.sec;
}

void Time::setTime(int h, int m, int s)
{
    hours = h;
    min = m;
    sec = s;
    hours = (hours >= 0 && hours < 24) ? hours: 0;
    min = (min >= 0 && min < 60) ? min: 0;
    sec = (sec >= 0 && sec < 60) ? sec: 0;
}

int Time::getHours()
{
    return hours;
}

int Time::getMin()
{
    return min;
}

int Time::getSec()
{
    return sec;
}

void Time::universalTime()
{
    cout << "UNIVERSAL TIME\n";
    cout << ((hours < 10) ? "0":"") << hours;
    cout << ":" << ((min < 10) ? "0":"") << min;
    cout << ":" << ((sec < 10) ? "0":"") << sec;
    cout << endl;
}

void Time::standardTime()
{
    cout << "STANDARD TIME\n";
    cout << ((hours == 0 || hours == 12) ? 12:hours % 12) << ":";
    cout << ((min < 10) ? "0":"") << min;
    cout << ":" << ((sec < 10) ? "0":"") << sec;
    cout << ((hours < 12) ?"AM":"PM");
    cout << endl;
}


int main()
{
    Time t1;
    Time t3(t1);
    t3.setTime(4, 10, 30);
    cout << "U HAVE ENTERED THE TIME AS:\n";
    cout << t3.getHours() << ":" << t3.getMin() << ":" << t3.getSec() << endl;
    t3.universalTime();
    t3.standardTime();

    return 0;
}