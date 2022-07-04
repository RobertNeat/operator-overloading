#include <iostream>
#include "Time.h"

using namespace std;

//global functions overloading operators: * and ==
ostream & operator<<(ostream & os, const Time &t);
Time operator*(Time a, int nTimes);
Time operator*(int nTimes,Time a);
bool operator==(Time a, Time b);


int main()
{
     //4 objects
    Time flight1(9,10);
    Time flight2(2,15);
    Time waiting(0,55);

    cout<<"Timetable:"<<endl;
    cout <<"Flight1 (Chicago - Paris):"<<flight1<<endl;
    cout <<"Flight2 (Paris - Warsaw):"<<flight2<<endl;
    cout <<"waiting (time spent waiting in Paris):"<<waiting<<endl<<endl;

    cout<<"Total travelling time [Chicago - PAris (+plus waiting on airport) - Warsaw]:"<<flight1+waiting+flight2<<endl<<endl;

    flight2=(flight2*2)*2;    //flight in both ways
    cout<<"If flight Paris-Warsaw would be 2 times longer, that flight in both ways would last:"<<flight2<<endl;
    Time flight3(2,15);
    flight3=flight3*2;    //flight in both ways
    cout<<"Time of flight London-Warsaw:"<<flight3<<endl;

    if(flight2==flight3){
        cout<<"Flight 2 times longer Paris-Warsaw is the same length that London-Warsaw";
    }
    else{
        cout<<"Flights are different time length"<<endl;
    }


}


Time operator*( int nTimes,Time a){
Time multip(0,0);
multip.setMinutes(a.getMinutes()*nTimes);
multip.setHours(a.getHours()*nTimes);
return multip;
}


Time operator*(Time a, int nTimes){
Time multip(0,0);
multip.setMinutes(a.getMinutes()*nTimes);
multip.setHours(a.getHours()*nTimes);
return multip;
}

bool operator==(Time a, Time b){
if((a.getMinutes()==b.getMinutes()) && (a.getHours()==b.getHours())){
    return true;
}
else{
return false;}
}

ostream & operator<<(ostream & os, const Time &z){
    os<<z.hours<<" hours "<<z.minutes<<" min.";
    return os;
}
