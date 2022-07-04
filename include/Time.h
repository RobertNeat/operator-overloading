#ifndef TIME_H
#define TIME_H


#include <iostream>

using namespace std;

class Time
{
    public:
        Time(int hours=1, int minutes=1);
        ~Time();

        Time operator+(Time time);
        Time operator-(Time time);

        int getHours();
        int getMinutes();

        void setHours(int a);
        void setMinutes(int b);

        friend ostream & operator<<(ostream & os, const Time & z);



    private:
        int hours,minutes;
};

#endif // TIME_H

