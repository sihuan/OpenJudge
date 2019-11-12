#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
int sum=0;

class Time
{
private :
    int hh,mm,ss;
public:
    Time():hh(0),mm(0),ss(0)
    {
        ++sum;
    }
     Time(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;
        ++sum;

    }
    Time(const Time &t)
    {
        hh=t.hh;
        mm=t.mm;
        ss=t.ss;
        ++sum;
        cout<<"There was a call to the copy constructor : "<<t.hh<<","<<t.mm<<","<<t.ss<<endl;
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
    static int getNumber()
    {
        return sum;
    }
    static int displayNumber()
    {
        cout<<"Now, There is "<<sum<<" object of Time."<<endl;
    }
};


int main()
{
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}

/**************************************************************
	Problem: 1392
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:2504 ms
	Memory:1268 kb
****************************************************************/

