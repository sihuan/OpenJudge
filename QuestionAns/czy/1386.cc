#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;

class Time
{
private :
    int hh,mm,ss;
public:
    Time()
    {

    }
    int hour(){return hh;}
    int minute(){return mm;}
    int second(){return ss;}
    void hour(int h){hh=h;}
    void minute(int m){mm=m;}
    void second(int s){ss=s;}
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
    }
};


int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        t.hour(hour);
        t.minute(minute);
        t.second(second);
        cout<<setw(2)<<setfill('0')<<t.hour()<<":";
        cout<<setw(2)<<setfill('0')<<t.minute()<<":";
        cout<<setw(2)<<setfill('0')<<t.second()<<endl;
    }
}

/**************************************************************
	Problem: 1386
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:2808 ms
	Memory:1268 kb
****************************************************************/

