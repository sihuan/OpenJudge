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
    virtual void print()=0;
    Date& operator = (Date& ad)
    {
        y=ad.y;
        m=ad.m;
        d=ad.d;
        return *this;
    }
    virtual ~Date()
    {
        cout<<"destruct Date "<<y<<" "<<m<<" "<<d<<endl;
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
    ~BritishStyle()
    {
        cout<<"destruct BritishStyle "<<y<<" "<<m<<" "<<d<<endl;

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
    ~AmericanStyle()
    {
        cout<<"destruct AmericanStyle "<<y<<" "<<m<<" "<<d<<endl;

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
    ~GermanStyle()
    {
        cout<<"destruct GermanStyle "<<y<<" "<<m<<" "<<d<<endl;
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
    ~SpanishStyle()
    {
        cout<<"destruct SpanishStyle "<<y<<" "<<m<<" "<<d<<endl;

    }
private:

};

int main()
{
    Date *date[100], *d;
    int year, month, day, cases = 0;
    while(cin >> year >> month >> day)
    {
        date[cases++] = new BritishStyle(year, month, day);
        date[cases++] = new AmericanStyle(year, month, day);
        date[cases++] = new GermanStyle(year, month, day);
        date[cases++] = new SpanishStyle(year, month, day);
    }
    for(int i = 0; i < cases; i++)
        date[i]->print();
    for(int i = 0; i < cases; i++)
        delete date[i];

}

/**************************************************************
	Problem: 2586
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

