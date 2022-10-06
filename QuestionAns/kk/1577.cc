#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

class Date
{
public:
    Date(int y=1,int m=1,int d=1)
    {
        year_=y;
        month_=m;
        day_=d;
        cout<<"CREATE Date : ("<<year_<<", "<<month_<<", "<<day_<<")"<<endl;

    }
    Date (const Date &another)
    {
        year_=another.year_;
        month_=another.month_;
        day_=another.day_;
        cout<<"COPY   Date : ("<<year_<<", "<<month_<<", "<<day_<<")"<<endl;
    }
    void setDate(int y,int m,int d)
    {
        year_=y;
        month_=m;
        day_=d;
    }
    void showDate()
    {
        printf("%04d-%02d-%02d",year_,month_,day_);
    }
    void show()
    {
        printf("(%d, %d, %d) ",year_,month_,day_);
    }
    void year(int y)
    {
        year_=y;
    }
    int year() const
    {
        return year_;
    }
    void month(int m)
    {
        month_=m;
    }
    int month() const
    {
       return month_;
    }
    void day(int d)
    {
        day_=d;
    }
    int day() const
    {
        return day_;
    }
private:
    int year_,month_,day_;
};

class Time
{
public:
    Time(int h=0,int m=0,int s=0)
    {
        hour_=h;
        minute_=m;
        second_=s;
        cout << "CREATE Time : ("<<hour_<<", "<<minute_<<", "<<second_<<")"<<endl;
    }
    Time(const Time &another)
    {
        hour_=another.hour_;
        minute_=another.minute_;
        second_=another.second_;
        cout << "COPY   Time : ("<<hour_<<", "<<minute_<<", "<<second_<<")"<<endl;
    }
    void setTime(int h,int m,int s)
    {
        hour_=h;
        minute_=m;
        second_=s;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d",hour_,minute_,second_);
    }
    void show()
    {
        printf("(%d, %d, %d)\n",hour_,minute_,second_);
    }
    void hour(int h)
    {
        hour_=h;
    }
    int hour() const
    {
        return hour_;
    }
    void second(int s)
    {
        second_=s;
    }
    int second() const
    {
        return second_;
    }
    void minute(int m)
    {
        minute_=m;
    }
    int minute() const
    {
        return minute_;
    }

private:
    int hour_,minute_,second_;
};

class DateTime
{
public:
    DateTime(int y=1,int m=1,int d=1,int hh=0,int mm=0,int ss=0):date(y,m,d),time(hh,mm,ss)
    {
        printf("CREATE DateTime : (%d, %d, %d) (%d, %d, %d)\n",y,m,d,hh,mm,ss);
    }
    DateTime(const Date &anotherDate,const Time &anotherTime):date(anotherDate),time(anotherTime)
    {
        cout << "CREATE DateTime : ";
        date.show();
        time.show();
    }
    DateTime(const DateTime &another):time(another.time),date(another.date)
    {
        cout << "COPY   DateTime : ";
        date.show();
        time.show();

    }
    DateTime &setDateTime(int y,int m,int d,int hh,int mm,int ss)
    {
        date.setDate(y,m,d);
        time.setTime(hh,mm,ss);
        return *this;
    }
    void showDateTime()
    {
        date.showDate();
        cout<<" ";
        time.showTime();
    }
    void year(int y)
    {
        date.year(y);
    }
    int year() const
    {
        return date.year();
    }
    void month(int m)
    {
        date.month(m);
    }
    int month() const
    {
       return date.month();
    }
    void day(int d)
    {
        date.day(d);
    }
    int day() const
    {
        return date.day();
    }
    void hour(int h)
    {
        time.hour(h);
    }
    int hour() const
    {
        return time.hour();
    }
    void second(int s)
    {
        time.second(s);
    }
    int second() const
    {
        return time.second();
    }
    void minute(int m)
    {
        time.minute(m);
    }
    int minute() const
    {
        return time.minute();
    }
private:
    Time time;
    Date date;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:1412 ms
	Memory:1272 kb
****************************************************************/

