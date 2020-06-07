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
        cout << "CREATE Time : (0, 0, 0)" << endl;
    }
    Time(const Time& t)
        : hour_(t.hour_)
        , minute_(t.minute_)
        , second_(t.second_)
    {
        cout << "COPY   Time : ";
        khs();
        cout << endl;
    }
    Time(int h, int m, int s)
        : hour_(h)
        , minute_(m)
        , second_(s)
    {
        cout << "CREATE Time : ";
        khs();
        cout << endl;
    }
    int hour() const
    {
        return hour_;
    }
    int minute() const
    {
        return minute_;
    }
    int second() const
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
    void showTime()
    {
        if (hour_ >= 24 || minute_ >= 60 || second_ >= 60 || hour_ < 0 || minute_ < 0 || second_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << hour_ << ":"
                 << setw(2) << setfill('0') << minute_ << ":"
                 << setw(2) << setfill('0') << second_;
    }
    void khs() const
    {
        cout << "(" << hour_ << ", " << minute_ << ", " << second_ << ")";
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
        cout << "CREATE Date : (1, 1, 1)" << endl;
    }
    Date(const Date& d)
        : year_(d.year_)
        , month_(d.month_)
        , day_(d.day_)
    {
        cout << "COPY   Date : ";
        khs();
        cout << endl;
    }
    Date(int y, int m, int d)
        : year_(y)
        , month_(m)
        , day_(d)
    {
        cout << "CREATE Date : ";
        khs();
        cout << endl;
    }
    int year() const
    {
        return year_;
    }
    int month() const
    {
        return month_;
    }
    int day() const
    {
        return day_;
    }
    void year(int y)
    {
        year_ = y;
    }
    void month(int m)
    {
        month_ = m;
    }
    void day(int d)
    {
        day_ = d;
    }
    void showDate()
    {
        cout << setw(4) << setfill('0') << year_ << "-"
             << setw(2) << setfill('0') << month_ << "-"
             << setw(2) << setfill('0') << day_;
    }
    void khs() const
    {
        cout << "(" << year_ << ", " << month_ << ", " << day_ << ")";
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
    Time time_;
    Date date_;

public:
    DateTime()
        : date_()
        , time_()
    {
        cout << "CREATE DateTime : (1, 1, 1, 0, 0, 0)" << endl;
    }
    DateTime(const Date& d, const Time& t)
        : date_(d)
        , time_(t)
    {
        cout << "CREATE DateTime : ";
        d.khs();
        cout << " ";
        t.khs();
        cout << endl;
    }
    DateTime(const DateTime& dt)
        : date_(dt.date_)
        , time_(dt.time_)
    {
        cout << "COPY   DateTime : ";
        date_.khs();
        cout << " ";
        time_.khs();
        cout << endl;
    }
    DateTime(int y, int m1, int d, int h, int m2, int s)
        : date_(y, m1, d)
        , time_(h, m2, s)
    {
        cout << "CREATE DateTime : (" << y << ", " << m1 << ", " << d << ", " << h << ", " << m2 << ", " << s << ")" << endl;
    }
    int year() const
    {
        return date_.year();
    }
    int month() const
    {
        return date_.month();
    }
    int day() const
    {
        return date_.day();
    }
    int hour() const
    {
        return time_.hour();
    }
    int minute() const
    {
        return time_.minute();
    }
    int second() const
    {
        return time_.second();
    }
    void year(int y)
    {
        date_.year(y);
    }
    void month(int m)
    {
        date_.month(m);
    }
    void day(int d)
    {
        date_.day(d);
    }
    void hour(int h)
    {
        time_.hour(h);
    }
    void minute(int m)
    {
        time_.minute(m);
    }
    void second(int s)
    {
        time_.second(s);
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
    const Date date(1000, 10, 10), dt(date);
    const Time time(1, 1, 1), tm(time);
    DateTime date_time(dt, tm);
    const DateTime cnt(date_time);
    cout << "DateTime : " << cnt.year() << " " << cnt.month() << " " << cnt.day();
    cout << " " << cnt.hour() << " " << cnt.minute() << " " << cnt.second();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.year(year);
        date_time.month(month);
        date_time.day(day);
        date_time.hour(hour);
        date_time.minute(minute);
        date_time.second(second);
        date_time.showDateTime();
        cout << endl;
    }
}
/**************************************************************
	Problem: 1577
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:1260 ms
	Memory:1272 kb
****************************************************************/

