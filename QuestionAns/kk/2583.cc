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
    void month(int _m)
    {
        m=_m;
    }
    void day(int _d)
    {
        d=_d;
    }
    void print()
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
    Date date, dd;
    dd.print();
    int year, month, day;
    while(cin >> year >> month >> day)
    {
        Date d(year, month, day);
        date = dd = d;
        date.print();
    }
}

/**************************************************************
	Problem: 2583
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

