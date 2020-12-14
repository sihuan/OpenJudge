#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Date
{
public:
    Date(int year,int month,int day)
    {
        y = year;
        m = month;
        d = day;
    }
    void showDate(){
        cout<<y<<"-"<<setfill('0')<<setw(2)<<m<<"-"<<setfill('0')<<setw(2)<<d;
    }

private:
    int y,m,d;
};
class Time
{
public:
    Time(int hour,int minu,int sec)
    {
        h = hour;
        m = minu;
        s = sec;
    }
    void showTime(){
    cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s;
        }

private:
    int h,m,s;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

