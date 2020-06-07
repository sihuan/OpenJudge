#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int sec_;

public:
    Time()
        : sec_(0)
    {
    }
    Time(int h, int m, int s)
    {
        sec_ = h * 3600 + m * 60 + s;
        while (sec_ >= 86400)
            sec_ -= 86400;
    }
    int hour()
    {
        return sec_ / 3600;
    }
    int minute()
    {
        return sec_ % 3600 / 60;
    }
    int second()
    {
        return sec_ % 3600 % 60;
    }
    void hour(int h)
    {
        int nh = sec_ / 3600;
        sec_ += (h - nh) * 3600;
    }
    void minute(int m)
    {
        int nm = sec_ % 3600 / 60;
        sec_ += (m - nm) * 60;
    }
    void second(int s)
    {
        int ns = sec_ % 3600 % 60;
        sec_ += (s - ns);
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2184 ms
	Memory:1268 kb
****************************************************************/

