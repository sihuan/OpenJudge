#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
public:
    void hour(int h)
    {
        hh=h;
    }
    void minute(int m)
    {
        mm=m;
    }
    void second(int s)
    {
        ss=s;
    }
    int hour()
    {
        return hh;
    }
    int minute()
    {
        return mm;
    }
    int second()
    {
        return ss;
    }
private:
    int hh,mm,ss;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:2528 ms
	Memory:1268 kb
****************************************************************/

