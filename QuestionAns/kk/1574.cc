#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;
class Date
{
public:
    Date(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }
    void showDate()
    {
        printf("%04d-%02d-%02d",year,month,day);
    }
private:
    int year,month,day;
};
class Time
{
public:
    Time(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d",hour,minute,second);
    }
private:
    int hour,minute,second;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:2652 ms
	Memory:1268 kb
****************************************************************/

