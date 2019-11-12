#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
    friend class Time;
private:
    int y,m,d;
public:
    Date(int a,int b,int c):y(a),m(b),d(c){}
    void showDate()
    {
        cout<<setw(4)<<setfill('0')<<y<<"-"<<setw(2)<<setfill('0')<<m<<"-"<<setw(2)<<setfill('0')<<d;
    }
};
class Time
{
    friend class Date;
private:
    int h,minu,s;
public:
    Time(int a,int b,int c):h(a),minu(b),s(c){}
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<minu<<":"<<setw(2)<<setfill('0')<<s;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:2268 ms
	Memory:1268 kb
****************************************************************/

