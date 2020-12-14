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
    Time(const Time& t)
        : sec_(t.sec_)
    {
        cout << "There was a call to the copy constructor : " << hour() << "," << minute() << "," << second() << endl;
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
    Time& setTime(int h, int m, int s)
    {
        sec_ = h * 3600 + m * 60 + s;
        while (sec_ >= 86400)
            sec_ -= 86400;
        return *this;
    }
    Time& setTime(const Time& t)
    {
        sec_ = t.sec_;
        return *this;
    }
    Time& getTime()
    {
        return *this;
    }
    void showTime()
    {
        cout << setw(2) << setfill('0');
        cout << sec_ / 3600 << ":";
        cout << setw(2) << setfill('0');
        cout << sec_ % 3600 / 60 << ":";
        cout << setw(2) << setfill('0');
        cout << sec_ % 3600 % 60 << endl;
    }
};

int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

/**************************************************************
	Problem: 1388
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2188 ms
	Memory:1268 kb
****************************************************************/

