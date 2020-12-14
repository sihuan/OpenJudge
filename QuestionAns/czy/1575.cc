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

    Date(int a,int b,int c):y(a),m(b),d(c){}
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
    Time(int a,int b,int c):h(a),minu(b),s(c){}
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
    Date d1;
    Time t1;
public:
    DateTime():d1(1,1,1),t1(0,0,0){}
    DateTime(const Date& dd,const Time& tt):d1(dd),t1(tt){}
    DateTime(int a,int b,int c ,int d ,int e ,int f):d1(a,b,c),t1(d,e,f)
    {
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:1224 ms
	Memory:1268 kb
****************************************************************/

