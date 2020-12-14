#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int hour_, minute_, second_;

public:
    Time()
        : hour_(0)
        , minute_(0)
        , second_(0)
    {
    }
    Time(int h, int m, int s)
        : hour_(h)
        , minute_(m)
        , second_(s)
    {
    }
    Time(const Time& t)
        : hour_(t.hour_)
        , minute_(t.minute_)
        , second_(t.second_)
    {
    }
    int hour()
    {
        return hour_;
    }
    int minute()
    {
        return minute_;
    }
    int second()
    {
        return second_;
    }
    void hour(int h)
    {
        hour_ = h;
    }
    void minute(int m)
    {
        minute_ = m;
    }
    void second(int s)
    {
        second_ = s;
    }
    Time& operator+=(int t)
    {
        if (hour_ >= 24 || minute_ >= 60 || second_ >= 60 || hour_ < 0 || minute_ < 0 || second_ < 0)
            ;
        else {
            int nt = hour() * 3600 + minute() * 60 + second();
            nt += t;
            nt = nt - ((int)floor(nt / 86400.0) * 86400);
            hour(nt / 3600);
            minute(nt % 3600 / 60);
            second(nt % 3600 % 60);
        }
        return *this;
    }
    Time& operator-=(int t)
    {
        t = -t;
        return (*this += t);
    }
    Time& operator++()
    {
        *this += 1;
        return *this;
    }
    Time operator++(int)
    {
        Time tmp(*this);
        ++(*this);
        return tmp;
    }
    Time& operator--()
    {
        *this += -1;
        return *this;
    }
    Time operator--(int)
    {
        Time tmp(*this);
        --(*this);
        return tmp;
    }
    friend ostream& operator<<(ostream& out, const Time& t)
    {
        if (t.hour_ >= 24 || t.minute_ >= 60 || t.second_ >= 60 || t.hour_ < 0 || t.minute_ < 0 || t.second_ < 0)
            out << "error!!!";
        else
            out << setw(2) << setfill('0') << t.hour_ << ":"
                << setw(2) << setfill('0') << t.minute_ << ":"
                << setw(2) << setfill('0') << t.second_;
        return out;
    }
    friend istream& operator>>(istream& in, Time& t)
    {
        in >> t.hour_ >> t.minute_ >> t.second_;
        return in;
    }
};

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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:1272 kb
****************************************************************/

