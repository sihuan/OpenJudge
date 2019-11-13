#include <iostream>
#include <iomanip>

using namespace std;

class Date{
private:
    int y_,m_,d_;
public:
    Date() {y_=1; m_=1; d_=1; cout<<"CREATE Date : (";showD();cout<<")"<<endl;}
    Date(int y,int m,int d) : y_(y),m_(m),d_(d) {}
    Date(const Date& d) : y_(d.y_),m_(d.m_),d_(d.d_) {}
    void showDate() const {
        cout<<setw(4)<<setfill('0')<<y_<<"-"<<
        setw(2)<<setfill('0')<<m_<<"-"<<
        setw(2)<<setfill('0')<<d_;
    }
    void showD() const {cout<<y_<<", "<<m_<<", "<<d_;}
    const Date& setDate(int y,int m,int d) {y_=y; m_=m; d_=d; return *this;}
};
class Time {
private:
    int h_,m_,s_;
public:
    Time() {h_=0; m_=0; s_=0; cout<<"CREATE Time : (";showT();cout<<")"<<endl;}
    Time(int h,int m,int s) : h_(h),m_(m),s_(s) {cout<<"CREATE Time : (";showT();cout<<")"<<endl;}
    Time(const Time& t) : h_(t.h_),m_(t.m_),s_(t.s_) {cout<<"CREATE Time : (";showT();cout<<")"<<endl;}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<h_<<":"<<
        setw(2)<<setfill('0')<<m_<<":"<<
        setw(2)<<setfill('0')<<s_;
    }
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
    void showDateTime() const {d_.showDate();cout<<" ";t_.showTime();}
    const DateTime& setDateTime(int y,int m,int d,int h,int m1,int s) {d_.setDate(y,m,d); t_.setTime(h,m1,s); return *this;}

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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:1224 ms
	Memory:1268 kb
****************************************************************/

