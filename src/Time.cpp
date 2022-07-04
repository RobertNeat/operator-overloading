#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(int hours, int minutes)
{
    this->hours=hours;
    this->minutes=minutes;
}

Time::~Time()
{
    //dtor
}

Time Time::operator+(Time time){
    Time counter(0,0);
    int minutes=this->minutes+time.minutes;
    minutes+=((this->hours+time.hours)*60);

    int hours=minutes/60;
    minutes%=60;

    counter.hours=hours;
    counter.minutes=minutes;

    return counter;

}

Time Time::operator-(Time time){
    Time counter(0,0);
    int minutes=this->minutes-time.minutes;
    minutes+=((this->hours-time.hours)*60);

    int hours=minutes/60;
    minutes%=60;

    counter.hours=hours;
    counter.minutes=minutes;

    return counter;
}


int Time::getMinutes(){
    return this->minutes;
}

int Time::getHours(){
    return this->hours;
}

void Time::setHours(int a){
    this->hours+=a;
}

void Time::setMinutes(int b){
        this->minutes+=b;
}
