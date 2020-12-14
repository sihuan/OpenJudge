#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Date
{
private:
    int year,month,day;
public:
    Date(int _year,int _month,int _day):year(_year),month(_month),day(_day){}
    ~Date(){}
    void showDate()
    {
        cout<<year<<"-"<<setw(2)<<setfill('0')<<setw(2)<<month<<"-"<<setw(2)<<day;
    }

};
class Time
{
private:
    int h,m,s;
public:
    Time(int _h,int _m,int _s):h(_h),m(_m),s(_s){}
    ~Time(){}
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:1340 ms
	Memory:1268 kb
****************************************************************/

