#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
    friend class DateTime;
    friend class Time;
private:
    int y,m,d;
public:
    Date():y(1),m(1),d(1)
    {
        cout<<"CREATE Date : ("<<y<<", "<<m<<", "<<d<<")"<<endl;
    }
    Date(int a,int b,int c):y(a),m(b),d(c)
    {
        cout<<"CREATE Date : ("<<y<<", "<<m<<", "<<d<<")"<<endl;
    }
    Date(const Date& p):y(p.y),m(p.m),d(p.d)
    {
        cout<<"COPY   Date : ("<<y<<", "<<m<<", "<<d<<")"<<endl;
    }
    void showDate()
    {
        cout<<setw(4)<<setfill('0')<<y<<"-"<<setw(2)<<setfill('0')<<m<<"-"<<setw(2)<<setfill('0')<<d;
    }
    void setDate(int a,int b,int c)
    {
        y=a;m=b;d=c;
    }
};
class Time
{
    friend class DateTime;
    friend class Date;
private:
    int h,minu,s;
public:
    Time():h(0),minu(0),s(0)
    {
        cout<<"CREATE Time : ("<<h<<", "<<minu<<", "<<s<<")"<<endl;
    }
    Time(int a,int b,int c):h(a),minu(b),s(c)
    {
        cout<<"CREATE Time : ("<<h<<", "<<minu<<", "<<s<<")"<<endl;
    }
    Time(const Time& p):h(p.h),minu(p.minu),s(p.s)
    {
        cout<<"COPY   Time : ("<<h<<", "<<minu<<", "<<s<<")"<<endl;
    }
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<minu<<":"<<setw(2)<<setfill('0')<<s;
    }
    void setTime(int a,int b,int c)
    {
        h=a;minu=b;s=c;
    }
};
class DateTime
{
    friend class Date;
    friend class Time;
private:
    Time t1;
    Date d1;
public:
    DateTime():t1(0,0,0),d1(1,1,1)
    {
        cout<<"CREATE DateTime : ("<<d1.y<<", "<<d1.m<<", "<<d1.d<<", "<<t1.h<<", "<<t1.minu<<", "<<t1.s<<")"<<endl;
    }
    DateTime(const Date& dd,const Time& tt):d1(dd),t1(tt)
    {
        cout<<"CREATE DateTime : ("<<d1.y<<", "<<d1.m<<", "<<d1.d<<") ("<<t1.h<<", "<<t1.minu<<", "<<t1.s<<")"<<endl;
    }
    DateTime(int a,int b,int c ,int d ,int e ,int f):d1(a,b,c),t1(d,e,f)
    {
        cout<<"CREATE DateTime : ("<<d1.y<<", "<<d1.m<<", "<<d1.d<<", "<<t1.h<<", "<<t1.minu<<", "<<t1.s<<")"<<endl;
    }
    DateTime(const DateTime& p):d1(p.d1),t1(p.t1)
    {
        cout<<"COPY   DateTime : ("<<p.d1.y<<", "<<p.d1.m<<", "<<p.d1.d<<") ("<<p.t1.h<<", "<<p.t1.minu<<", "<<p.t1.s<<")"<<endl;
    }
    DateTime setDateTime(int a,int b,int c ,int d ,int e ,int f)
    {
        d1.y=a;
        d1.m=b;
        d1.d=c;
        t1.h=d;
        t1.minu=e;
        t1.s=f;
        return *this;
    }
    void showDateTime()
    {
         cout<<setw(4)<<setfill('0')<<d1.y<<"-"<<setw(2)<<setfill('0')<<d1.m<<"-"<<setw(2)<<setfill('0')<<d1.d<<" ";
                 cout<<setw(2)<<setfill('0')<<t1.h<<":"<<setw(2)<<setfill('0')<<t1.minu<<":"<<setw(2)<<setfill('0')<<t1.s;
    }
    int year() const{return d1.y;}
    int month()const{return d1.m;}
    int day() const{return d1.d;}
    int hour() const{return t1.h;}
    int minute() const{return t1.minu;}
    int second() const{return t1.s;}
    int year(int a) {d1.y=a;}
    int month(int b){ d1.m=b;}
    int day(int c) { d1.d=c;}
    int hour(int d) {t1.h=d;}
    int minute(int e) {t1.minu=e;}
    int second(int f) {t1.s=f;}
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:1220 ms
	Memory:1272 kb
****************************************************************/

