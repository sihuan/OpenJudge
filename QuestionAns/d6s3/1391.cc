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
    int hour() const
    {
        return h_;
    }
    int minute() const
    {
        return m_;
    }
    int second() const
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
    const Time& getTime() const
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
    void showTime() const
    {
        if (h_ >= 24 || m_ >= 60 || s_ >= 60 || h_ < 0 || m_ < 0 || s_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << h_ << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << endl;
    }
    void showTime12Hour() const
    {
        if (h_ >= 24 || m_ >= 60 || s_ >= 60 || h_ < 0 || m_ < 0 || s_ < 0)
            cout << "Time error" << endl;
        else if (h_ >= 13) {
            cout << setw(2) << setfill('0') << h_ - 12 << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " p.m." << endl;
        } else if (h_ == 0) {
            cout << 12 << ":" << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " a.m." << endl;
        } else if (h_ == 12) {
            cout << 12 << ":" << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " p.m." << endl;
        } else {
            cout << setw(2) << setfill('0') << h_ << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " a.m." << endl;
        }
    }
};

int main()
{
    cout<<"Constant test output :"<<endl;
    const Time c(11, 59, 58);
    const Time cc(12, 0, 1);
    c.showTime12Hour();
    cc.showTime12Hour();
    c.showTime();
    cc.showTime();

    cout<<"\nTest data output :"<<endl;
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
            tt.showTime12Hour();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime12Hour();
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
	Problem: 1391
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2288 ms
	Memory:1272 kb
****************************************************************/

