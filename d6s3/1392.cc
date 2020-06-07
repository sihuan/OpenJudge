#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int h_, m_, s_;
    static int sum_;

public:
    Time()
        : h_(0)
        , m_(0)
        , s_(0)
    {
        sum_++;
    }
    Time(int h, int m, int s)
        : h_(h)
        , m_(m)
        , s_(s)
    {
        sum_++;
    }
    Time(const Time& t)
        : h_(t.h_)
        , m_(t.m_)
        , s_(t.s_)
    {
        cout << "There was a call to the copy constructor : " << hour() << "," << minute() << "," << second() << endl;
        sum_++;
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
    void showTime() const
    {
        if (h_ >= 24 || m_ >= 60 || s_ >= 60 || h_ < 0 || m_ < 0 || s_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << h_ << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << endl;
    }
    static int getNumber()
    {
        return sum_;
    }
    static void displayNumber()
    {
        cout << "Now, There is " << sum_ << " object of Time." << endl;
    }
};
int Time::sum_ = 0;

int main()
{
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}

/**************************************************************
	Problem: 1392
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2184 ms
	Memory:1268 kb
****************************************************************/

