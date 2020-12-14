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
    DateTime date_time;
    date_time.showDateTime();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.setDateTime(year, month, day, hour, minute, second);
        date_time.showDateTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1576
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:1220 ms
	Memory:1268 kb
****************************************************************/

