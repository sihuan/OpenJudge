#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

class Date
{
public:
    Date(int _y=1000,int _m=1,int _d=1)
    {
        y=_y;
        m=_m;
        d=_d;
    }
    Date(Date& ad)
    {
        y=ad.y;
        m=ad.m;
        d=ad.d;
    }
    void year(int _y)
    {
        y=_y;
    }
    int year() const
    {
        return y;
    }
    void month(int _m)
    {
        m=_m;
    }
    int month() const
    {
        return m;
    }
    void day(int _d)
    {
        d=_d;
    }
    int day() const
    {
        return d;
    }
    void print() const
    {
        printf("%d-%d-%d\n",y,m,d);
    }
    Date& operator = (Date& ad)
    {
        y=ad.y;
        m=ad.m;
        d=ad.d;
        return *this;
    }
private:
    int y,m,d;
};

int main()
{
    int year, month, day;
    while(cin >> year >> month >> day)
    {
        const Date date(year, month, day);
        date.print();
        cout << date.year() << "/" << date.month() << "/" << date.day() << endl;
    }
}

/**************************************************************
	Problem: 2584
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

