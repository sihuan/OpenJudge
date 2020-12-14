#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;

class Time
{
private :
    int hh,mm,ss;
public:
    Time(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;
    }
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
    }
};

int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}

/**************************************************************
	Problem: 1385
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:2628 ms
	Memory:1268 kb
****************************************************************/

