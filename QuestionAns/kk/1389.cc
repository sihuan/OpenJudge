#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

class Time
{
public:
    Time(){}
    Time(int h,int m,int s)
    {
        _hour=h;
        _minute=m;
        _second=s;
    }
    Time(const Time &another)
    {
        _hour=another._hour;
        _minute=another._minute;
        _second=another._second;
    }
    void hour(int h)
    {
        _hour=h;
    }
    int hour() const
    {
        return _hour;
    }
    void minute(int m)
    {
        _minute=m;
    }
    int minute() const
    {
        return _minute;
    }
    void second(int s)
    {
        _second=s;
    }
    int second() const
    {
        return _second;
    }
    Time setTime(int h,int m,int s)
    {
        _hour=h;
        _minute=m;
        _second=s;
        return *this;
    }
    Time inputTime()
    {
        cin>>_hour>>_minute>>_second;
        return *this;
    }
    void showTime()
    {
        if(_hour>=0&&_hour<=23&&_minute>=0&&_minute<=59&&_second>=0&&_second<=59)
            printf("%02d:%02d:%02d\n",_hour,_minute,_second);
        else
            printf("Time error\n");
    }
private:
    int _hour,_minute,_second;
};

int main()
{
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
	Problem: 1389
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:2476 ms
	Memory:1268 kb
****************************************************************/

