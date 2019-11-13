#include <iostream>
#include <iomanip>

using namespace std;

class Date{
private:
    int y_,m_,d_;
public:
    Date(int y,int m,int d) : y_(y),m_(m),d_(d) {}
    void showDate() const {
        cout<<setw(4)<<setfill('0')<<y_<<"-"<<
        setw(2)<<setfill('0')<<m_<<"-"<<
        setw(2)<<setfill('0')<<d_;
    }
};
class Time {
private:
    int h_,m_,s_;
public:
    Time(int h,int m,int s) : h_(h),m_(m),s_(s) {}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<h_<<":"<<
        setw(2)<<setfill('0')<<m_<<":"<<
        setw(2)<<setfill('0')<<s_;
    }
};
int main()
{
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1574
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:2240 ms
	Memory:1268 kb
****************************************************************/

