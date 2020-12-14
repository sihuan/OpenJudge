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
        hh=t.hh;
        mm=t.mm;
        ss=t.ss;
    }
    int hour()const {return hh;}
    int minute()const {return mm;}
    int second()const {return ss;}
    void hour(int h){hh=h;}
    void minute(int m){mm=m;}
    void second(int s){ss=s;}
    const Time &getTime()
    const {
       return *this;
    }
     Time &setTime(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;
        return *this;
    }
    const Time &setTime(const Time& t)
    {
        hh=t.hh;
        mm=t.mm;
        ss=t.ss;
        return *this;
    }
    Time inputTime()
    {
        cin>>hh>>mm>>ss;
        return *this;
    }
const void showTime()
    const {
        if(hh>=24 || mm>=60 || ss>=60 ||hh<0 ||mm<0 ||ss<0 ) cout<<"Time error"<<endl;
        else cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
    }
};


int main()
{
    cout<<"Constant test output :"<<endl;
    const Time c;
    const Time cc(1, 2, 3);
    const Time ccc(23, 60, 60);
    cout<<setw(2)<<setfill('0')<<c.hour()<<":";
    cout<<setw(2)<<setfill('0')<<c.minute()<<":";
    cout<<setw(2)<<setfill('0')<<c.second()<<endl;
    cc.getTime().showTime();
    ccc.showTime();

    cout<<"\nTest data output :"<<endl;
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 4 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            tt.showTime();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime();
        if(i % 4 == 3)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}

/**************************************************************
	Problem: 1390
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:3092 ms
	Memory:1272 kb
****************************************************************/

