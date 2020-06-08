#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
public:
    int h,m,s;
    Time() {};
    Time(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
    Time(const Time &t)
    {
        h=t.h;
        m=t.m;
        s=t.s;
    }
    int hour()
    {
        return h;
    }
    int minute()
    {
        return m;
    }
    int second()
    {
        return s;
    }
    void hour(int a)
    {
        h=a;
    }
    void minute(int b)
    {
        m=b;
    }
    void second(int c)
    {
        s=c;
    }
Time& setTime(int a,int b,int c)
{
    h=a;
    m=b;
    s=c;
    return *this;
}
Time& setTime(const Time& t)
{
    h=t.h;
    m=t.m;
    s=t.s;
    return *this;
}
Time& getTime()
{
    return *this;
}
Time& inputTime()
{
    int a,b,c;
    cin>>a>>b>>c;
    h=a;
    m=b;
    s=c;
    return *this;
}
void showTime()
{
    if((h>=0&&h<=23)&&(m>=0&&m<=59)&&(s>=0&&s<=59))
    {
        cout<<setfill('0')<<setw(2)<<h;
        cout<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
    }
    else
        cout<<"Time error"<<endl;
}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:2160 ms
	Memory:1268 kb
****************************************************************/

