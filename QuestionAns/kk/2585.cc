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
        cout<<"construct Date "<<y<<" "<<m<<" "<<d<<endl;
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
protected:
    int y,m,d;
};

class BritishStyle :public Date
{
public:
    BritishStyle(int y,int m,int d):Date(y,m,d)
    {
        cout<<"construct BritishStyle "<<y<<" "<<m<<" "<<d<<endl;
    }
    void print()
    {
        printf("%d/%d/%d\n",d,m,y);
    }
private:

};

class AmericanStyle:public Date
{
    public:
    AmericanStyle(int y,int m,int d):Date(y,m,d)
    {
        cout<<"construct AmericanStyle "<<y<<" "<<m<<" "<<d<<endl;
    }
    void print()
    {
        printf("%d-%d-%d\n",m,d,y);
    }
private:

};

class GermanStyle:public Date
{
    public:
    GermanStyle(int y,int m,int d):Date(y,m,d)
    {
        cout<<"construct GermanStyle "<<y<<" "<<m<<" "<<d<<endl;
    }
    void print()
    {
        printf("%d-%d-%d\n",y,m,d);
    }
private:

};

class SpanishStyle:public Date
{
public:
    SpanishStyle(int y,int m,int d):Date(y,m,d)
    {
        cout<<"construct SpanishStyle "<<y<<" "<<m<<" "<<d<<endl;
    }
    void print()
    {
        printf("%d-%d-%d\n",d,m,y);
    }
private:

};

int main()
{
    int year, month, day;
    while(cin >> year >> month >> day)
    {
        BritishStyle british(year, month, day);
        british.Date::print();
        british.print();
        AmericanStyle american(year, month, day);
        american.Date::print();
        american.print();
        GermanStyle german(year, month, day);
        german.Date::print();
        german.print();
        SpanishStyle spanish(year, month, day);
        spanish.Date::print();
        spanish.print();
    }
}

/**************************************************************
	Problem: 2585
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

