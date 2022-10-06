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
        year=y;
        month=m;
        day=d;
    }
    Date (const Date &another)
    {
        year=another.year;
        month=another.month;
        day=another.day;
    }
    void setDate(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }
    void showDate()
    {
        printf("%04d-%02d-%02d",year,month,day);
    }
private:
    int year,month,day;
};

class Time
{
public:
    Time(int h=0,int m=0,int s=0)
    {
        hour=h;
        minute=m;
        second=s;
    }
    Time(const Time &another)
    {
        hour=another.hour;
        minute=another.minute;
        second=another.second;
    }
    void setTime(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d",hour,minute,second);
    }
private:
    int hour,minute,second;
};

class DateTime
{
public:
    DateTime(int y,int m,int d,int hh,int mm,int ss):date(y,m,d),time(hh,mm,ss){}
    DateTime(const Date &anotherDate,const Time &anotherTime):date(anotherDate),time(anotherTime){}
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
private:
    Date date;
    Time time;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:1408 ms
	Memory:1268 kb
****************************************************************/

