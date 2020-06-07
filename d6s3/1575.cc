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
    void showTime()
    {
        if (hour_ >= 24 || minute_ >= 60 || second_ >= 60 || hour_ < 0 || minute_ < 0 || second_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << hour_ << ":"
                 << setw(2) << setfill('0') << minute_ << ":"
                 << setw(2) << setfill('0') << second_;
    }
    void setTime(int h, int m, int s)
    {
        hour_ = h;
        minute_ = m;
        second_ = s;
    }
};

class Date {
private:
    int year_, month_, day_;

public:
    Date()
        : year_(1)
        , month_(1)
        , day_(1)
    {
    }
    Date(int y, int m, int d)
        : year_(y)
        , month_(m)
        , day_(d)
    {
    }
    void showDate()
    {
        cout << setw(4) << setfill('0') << year_ << "-"
             << setw(2) << setfill('0') << month_ << "-"
             << setw(2) << setfill('0') << day_;
    }
    void setDate(int y, int m, int d)
    {
        year_ = y;
        month_ = m;
        day_ = d;
    }
};

class DateTime {
private:
    Date date_;
    Time time_;

public:
    DateTime()
        : date_()
        , time_()
    {
    }
    DateTime(const Date& d, const Time& t)
        : date_(d)
        , time_(t)
    {
    }
    DateTime(int y, int m1, int d, int h, int m2, int s)
        : date_(y, m1, d)
        , time_(h, m2, s)
    {
    }
    void showDateTime()
    {
        date_.showDate();
        cout << " ";
        time_.showTime();
    }
    DateTime& setDateTime(int y, int m1, int d, int h, int m2, int s)
    {
        date_.setDate(y, m1, d);
        time_.setTime(h, m2, s);
        return *this;
    }
};
int main()
{
    Date date(1000, 10, 10);
    Time time(1, 1, 1);
    DateTime date_time(date, time);
    date_time.showDateTime();
    cout << endl;
    int cases, flag = 0;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        if(flag == 0)
        {
            flag = 1;
            DateTime dt(year, month, day, hour, minute, second);
            dt.showDateTime();
        }
        else if(flag == 1)
        {
            flag == 0;
            date_time.setDateTime(year, month, day, hour, minute, second).showDateTime();
        }
        cout << endl;
    }
}

/**************************************************************
	Problem: 1575
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:1240 ms
	Memory:1268 kb
****************************************************************/

