#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int h_, m_, s_;

public:
    Time()
        : h_(0)
        , m_(0)
        , s_(0)
    {
    }
    Time(int h, int m, int s)
        : h_(h)
        , m_(m)
        , s_(s)
    {
    }
    Time(const Time& t)
        : h_(t.h_)
        , m_(t.m_)
        , s_(t.s_)
    {
    }
    int hour()
    {
        return h_;
    }
    int minute()
    {
        return m_;
    }
    int second()
    {
        return s_;
    }
    void hour(int h)
    {
        h_ = h;
    }
    void minute(int m)
    {
        m_ = m;
    }
    void second(int s)
    {
        s_ = s;
    }
    Time& setTime(int h, int m, int s)
    {
        h_ = h;
        m_ = m;
        s_ = s;
        return *this;
    }
    Time& setTime(const Time& t)
    {
        h_ = t.h_;
        m_ = t.m_;
        s_ = t.s_;
        return *this;
    }
    Time& getTime()
    {
        return *this;
    }
    Time& inputTime()
    {
        int h, m, s;
        cin >> h >> m >> s;
        h_ = h;
        m_ = m;
        s_ = s;
        return *this;
    }
    void showTime()
    {
        if (h_ >= 24 || m_ >= 60 || s_ >= 60 || h_ < 0 || m_ < 0 || s_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << h_ << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2200 ms
	Memory:1268 kb
****************************************************************/

