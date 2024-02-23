#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
public:
    void setTime(int x, int y, int z);
    void putTime(void);
    void sumTime(Time x, Time y);
};

void Time::setTime(int x, int y, int z) {
    hours = x;
    minutes = y;
    seconds = z;
};

void Time::putTime(void) {
    cout << "Time is " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds " << endl;
};

void Time::sumTime(Time x, Time y) {
    seconds = x.seconds + y.seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    minutes = x.minutes + y.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + x.hours + y.hours;
};

int main(void) {
    Time t1, t2, t3;
    t1.setTime(2, 45, 34);
    t2.setTime(3, 24, 55);
    t1.putTime();
    t2.putTime();
    t3.sumTime(t1, t2);
    t3.putTime();
    return (0);
}

