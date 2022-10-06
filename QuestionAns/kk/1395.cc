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
    Time& operator +=(int n);
    Time& operator -=(int n);
private:
    int hh,mm,ss;
    bool if_right;
};
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:1268 kb
****************************************************************/

