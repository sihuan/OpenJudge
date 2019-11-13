#include <iostream>
#include <iomanip>

using namespace std;

class Date{
private:
    int y_,m_,d_;
public:
    Date() {y_=1; m_=1; d_=1; cout<<"CREATE Date : (";showD();cout<<")"<<endl;}
    Date(int y,int m,int d) : y_(y),m_(m),d_(d) {cout<<"CREATE Date : (";showD();cout<<")"<<endl;}
    Date(const Date& d) : y_(d.y_),m_(d.m_),d_(d.d_) {cout<<"COPY   Date : (";showD();cout<<")"<<endl;}
    void showDate() const {
        cout<<setw(4)<<setfill('0')<<y_<<"-"<<
        setw(2)<<setfill('0')<<m_<<"-"<<
        setw(2)<<setfill('0')<<d_;
    }
    int y() const {return y_;}
    int m() const {return m_;}
    int d() const {return d_;}
    void y(int y1) {y_=y1;}
    void m(int m1) {m_=m1;}
    void d(int d1) {d_=d1;}
    void showD() const {cout<<y_<<", "<<m_<<", "<<d_;}
    const Date& setDate(int y,int m,int d) {y_=y; m_=m; d_=d; return *this;}
};
class Time {
private:
    int h_,m_,s_;
public:
    Time() {h_=0; m_=0; s_=0; cout<<"CREATE Time : (";showT();cout<<")"<<endl;}
    Time(int h,int m,int s) : h_(h),m_(m),s_(s) {cout<<"CREATE Time : (";showT();cout<<")"<<endl;}
    Time(const Time& t) : h_(t.h_),m_(t.m_),s_(t.s_) {cout<<"COPY   Time : (";showT();cout<<")"<<endl;}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<h_<<":"<<
        setw(2)<<setfill('0')<<m_<<":"<<
        setw(2)<<setfill('0')<<s_;
    }
    int h() const {return h_;}
    int m() const {return m_;}
    int s() const {return s_;}
    void h(int h1) {h_=h1;}
    void m(int m1) {m_=m1;}
    void s(int s1) {s_=s1;}
    void showT() const {cout<<h_<<", "<<m_<<", "<<s_;}
    const Time& setTime(int h,int m,int s) {h_=h; m_=m; s_=s; return *this;}
};
class DateTime{
private:
    Time t_;
    Date d_;
public:
    DateTime() {cout<<"CREATE DateTime : (";d_.showD();cout<<", ";t_.showT();cout<<")"<<endl;}
    DateTime(const Date& d,const Time& t) : t_(t),d_(d) {cout<<"CREATE DateTime : (";d_.showD();cout<<") (";t_.showT();cout<<")"<<endl;}
    DateTime(int y,int m,int d,int h,int m1,int s) : t_(h,m1,s),d_(y,m,d) {cout<<"CREATE DateTime : (";d_.showD();cout<<", ";t_.showT();cout<<")"<<endl;}
    DateTime(const DateTime& d) : t_(d.t_),d_(d.d_) {cout<<"COPY   DateTime : (";d_.showD();cout<<") (";t_.showT();cout<<")"<<endl;}
    void showDateTime() const {d_.showDate();cout<<" ";t_.showTime();}
    const DateTime& setDateTime(int y,int m,int d,int h,int m1,int s) {d_.setDate(y,m,d); t_.setTime(h,m1,s); return *this;}
    int year() const {return d_.y();}
    int month() const {return d_.m();}
    int day() const {return d_.d();}
    int hour() const {return t_.h();}
    int minute() const {return t_.m();}
    int second() const {return t_.s();}
    void year(int y1) {d_.y(y1);}
    void month(int m1) {d_.m(m1);}
    void day(int d1) {d_.d(d1);}
    void hour(int h1) {t_.h(h1);}
    void minute(int m1) {t_.m(m1);}
    void second(int s1) {t_.s(s1);}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:1240 ms
	Memory:1272 kb
****************************************************************/

