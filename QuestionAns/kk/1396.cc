#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <functional>

using namespace std;

class Time
{
public:
    Time(){}
    void inputTime()
    {
        cin>>hh>>mm>>ss;
        if(hh>=0&&hh<=23&&mm>=0&&mm<=59&&ss>=0&&ss<=59)
            if_right=true;
        else
            if_right=false;
    }
    void showTime()
    {
        if(if_right)
            printf("%02d:%02d:%02d\n",hh,mm,ss);
        else
            printf("Time error\n");
    }
    friend istream& operator>>(istream&,Time&);
    friend ostream& operator<<(ostream&,const Time&);
    Time& operator +=(int n);
    Time& operator -=(int n);
    Time& operator ++();
    Time operator ++(int);
    Time& operator --();
    Time operator --(int);
private:
    int hh,mm,ss;
    bool if_right;
};
istream& operator>>(istream& is,Time& t)
{
    is>>t.hh>>t.mm>>t.ss;
    if(t.hh>=0&&t.hh<=23&&t.mm>=0&&t.mm<=59&&t.ss>=0&&t.ss<=59)
        t.if_right=true;
    else
        t.if_right=false;
    return is;
}
ostream& operator<<(ostream& os,const Time& t)
{
    if(t.if_right)
        printf("%02d:%02d:%02d",t.hh,t.mm,t.ss);
    else
        printf("error!!!");
    return os;
}
Time& Time::operator+=(int n)
{
    ss+=n;
    while(ss>59)
    {
        ss-=60;
        mm++;
    }
    while(mm>59)
    {
        mm-=60;
        hh++;
    }
    while(hh>23)
        hh-=24;
    return *this;
}
Time& Time::operator-=(int n)
{
    ss-=n;
    while(ss<0)
    {
        ss+=60;
        mm--;
    }
    while(mm<0)
    {
        mm+=60;
        hh--;
    }
    while(hh<0)
        hh+=24;
    return *this;
}
Time& Time::operator ++()
{
    ss++;
    while(ss>59)
    {
        ss-=60;
        mm++;
    }
    while(mm>59)
    {
        mm-=60;
        hh++;
    }
    while(hh>23)
        hh-=24;
    return  *this;
}
Time Time::operator ++(int)
{
    Time tt(*this);
    ss++;
    while(ss>59)
    {
        ss-=60;
        mm++;
    }
    while(mm>59)
    {
        mm-=60;
        hh++;
    }
    while(hh>23)
        hh-=24;
    return  tt;
}
Time& Time::operator --()
{
    ss--;
    while(ss<0)
    {
        ss+=60;
        mm--;
    }
    while(mm<0)
    {
        mm+=60;
        hh--;
    }
    while(hh<0)
        hh+=24;
    return *this;
}
Time Time::operator --(int)
{
    Time tt(*this);
    ss--;
    while(ss<0)
    {
        ss+=60;
        mm--;
    }
    while(mm<0)
    {
        mm+=60;
        hh--;
    }
    while(hh<0)
        hh+=24;
    return tt;
}

int main()
{
    Time t;
    int cases;
    cin>>cases;
    cout<<setw(8)<<left<<"++t"<<" ";
    cout<<setw(8)<<left<<"--t"<<" ";
    cout<<setw(8)<<left<<"t"<<" ";
    cout<<setw(8)<<left<<"t--"<<" ";
    cout<<setw(8)<<left<<"t++"<<" ";
    cout<<setw(8)<<left<<"t"<<right<<endl;
    for(int i = 1; i <= cases; ++i)
    {
        cin>>t;
        cout<<(++t)<<" ";
        cout<<(--t)<<" ";
        cout<<t<<" ";
        cout<<t--<<" ";
        cout<<t++<<" ";
        cout<<t<<endl;
    }
}

/**************************************************************
	Problem: 1396
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:64 ms
	Memory:1272 kb
****************************************************************/

