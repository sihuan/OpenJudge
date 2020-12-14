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
    Time():hh(0),mm(0),ss(0)
    {
    }
     Time(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;

    }
    Time(const Time &t)
    {
         cout<<"There was a call to the copy constructor : "<<t.hh<<","<<t.mm<<","<<t.ss<<endl;
    }
    int hour(){return hh;}
    int minute(){return mm;}
    int second(){return ss;}
    void hour(int h){hh=h;}
    void minute(int m){mm=m;}
    void second(int s){ss=s;}
    Time &getTime()
    {
       return *this;
    }
    Time &setTime(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;
        return *this;
    }
    Time &setTime(const Time& t)
    {
        hh=t.hh;
        mm=t.mm;
        ss=t.ss;
        return *this;
    }
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
    }
};


int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

/**************************************************************
	Problem: 1388
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:3236 ms
	Memory:1268 kb
****************************************************************/

