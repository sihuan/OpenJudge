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
    void showTime12Hour()
    const {
        if(hh>=24 || mm>=60 || ss>=60 ||hh<0 ||mm<0 ||ss<0 ) cout<<"Time error"<<endl;
        else
        {
            if(hh==00)
            cout<<setw(2)<<setfill('0')<<12<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<" a.m."<<endl;
            else if(hh>=1 && hh<=11)
              cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<" a.m."<<endl;
            else if(hh==12)
                cout<<setw(2)<<setfill('0')<<12<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<" p.m."<<endl;
            else if(hh>=13 && hh<=23)
                cout<<setw(2)<<setfill('0')<<hh-12<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<" p.m."<<endl;
        }
    }
};


int main()
{
    cout<<"Constant test output :"<<endl;
    const Time c(11, 59, 58);
    const Time cc(12, 0, 1);
    c.showTime12Hour();
    cc.showTime12Hour();
    c.showTime();
    cc.showTime();

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
            tt.showTime12Hour();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime12Hour();
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
	Problem: 1391
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:3268 ms
	Memory:1272 kb
****************************************************************/

