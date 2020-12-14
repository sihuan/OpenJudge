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
    int hh,mm,ss,up,k;
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
    Time operator +=(int t)
    {
        if(hh*3600 + mm*60 + ss >= 24*3600|| mm>59||ss>59||hh<0||ss<0||mm<0)
            return *this;
        k = (hh*3600 + mm*60 + ss+t)%(24*3600);
            hh = k/3600;
            mm = (k -hh*3600)/60;
            ss = k-hh*3600-mm*60;
            return *this;
    }
    Time operator -=(int t)
    {
        if(hh*3600 + mm*60 + ss >= 24*3600|| mm>59||ss>59||hh<0||ss<0||mm<0)
            return *this;
            k = (hh*3600 + mm*60 + ss-t)%(24*3600);
            if(k<0) k=24*3600+k;
            hh = k/3600;
            mm = (k -hh*3600)/60;
            ss = k-hh*3600-mm*60;
            return *this;
    }
};


int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        Time t;
        t.inputTime();
        Time tt(t);
        int num;
        cin>>num;
        t += num;
        t.showTime();
        tt -= num;
        tt.showTime();
    }
}

/**************************************************************
	Problem: 1395
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:116 ms
	Memory:1268 kb
****************************************************************/

