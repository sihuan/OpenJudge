#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
public:
    int year,month,day;
    Date()
    {
        year=1;
        month=1;
        day=1;
    }
    Date(int a,int b,int c)
    {
        year=a;
        month=b;
        day=c;
    }
    void setDate(int a,int b,int c)
    {
        year=a;
        month=b;
        day=c;
    }
};
class Time
{
public:
    int h,m,s;
    Time()
    {
        h=0;
        m=0;
        s=0;
    }
    Time(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;

    }
    void setTime(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
};

class DateTime
{
public:
   static char ch;
    static char ch2;
    Date d;
    Time t;
    DateTime()
    {
        d.year=d.month=d.day=1;
        t.h=t.m=t.s=0;
    }
    DateTime(const Date&a,const Time&b)
    {
        d.year=a.year;
        d.month=a.month;
        d.day=a.day;
        t.h=b.h;
        t.m=b.m;
        t.s=b.s;
    }
    DateTime(int a,int b,int c,int d,int e,int f):d(a,b,c),t(d,e,f)
    {

    }
    DateTime& setDateTime(int a,int b,int c,int x,int e,int f)
    {
        d.year=a;
        d.month=b;
        d.day=c;
        t.h=x;
        t.m=e;
        t.s=f;
        return *this;
    }
    void showDateTime()
    {
        cout<<setfill('0')<<d.year<<ch<<setw(2)<<d.month<<ch<<setw(2)<<d.day<<" "<<setw(2)<<t.h<<ch2<<setw(2)<<t.m<<ch2<<setw(2)<<t.s;
    }

};
char DateTime::ch='-';
char DateTime::ch2=':';

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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:1216 ms
	Memory:1268 kb
****************************************************************/

