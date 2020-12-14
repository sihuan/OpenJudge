#include <iostream>
#include <iomanip>

using namespace std;

class Date{
private:
    int y_,m_,d_;
public:
    Date() {y_=1; m_=1; d_=1;}
    Date(int y,int m,int d) : y_(y),m_(m),d_(d) {}
    Date(const Date& d) : y_(d.y_),m_(d.m_),d_(d.d_) {}
    void showDate() const {
        cout<<setw(4)<<setfill('0')<<y_<<"-"<<
        setw(2)<<setfill('0')<<m_<<"-"<<
        setw(2)<<setfill('0')<<d_;
    }
    const Date& setDate(int y,int m,int d) {y_=y; m_=m; d_=d; return *this;}
};
class Time {
private:
    int h_,m_,s_;
public:
    Time() {h_=0; m_=0; s_=0;}
    Time(int h,int m,int s) : h_(h),m_(m),s_(s) {}
    Time(const Time& t) : h_(t.h_),m_(t.m_),s_(t.s_) {}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<h_<<":"<<
        setw(2)<<setfill('0')<<m_<<":"<<
        setw(2)<<setfill('0')<<s_;
    }
    const Time& setTime(int h,int m,int s) {h_=h; m_=m; s_=s; return *this;}
};
class DateTime{
private:
    Date d_;
    Time t_;
public:
    DateTime() {}
    DateTime(const Date& d,const Time& t) : d_(d),t_(t) {}
    DateTime(int y,int m,int d,int h,int m1,int s) : d_(y,m,d),t_(h,m1,s) {}
    void showDateTime() const {d_.showDate();cout<<" ";t_.showTime();}
    const DateTime& setDateTime(int y,int m,int d,int h,int m1,int s) {d_.setDate(y,m,d); t_.setTime(h,m1,s); return *this;}

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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:1236 ms
	Memory:1268 kb
****************************************************************/

