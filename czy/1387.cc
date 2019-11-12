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
    Time()
    {

    }
    int hour(){return hh;}
    int minute(){return mm;}
    int second(){return ss;}
    void hour(int h){hh=h;}
    void minute(int m){mm=m;}
    void second(int s){ss=s;}
    Time inputTime()
    {
        cin>>hh>>mm>>ss;
        return *this;
    }
    void showTime()
    {
        cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
    }
};


int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
        t.inputTime().showTime();
}

/**************************************************************
	Problem: 1387
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:2572 ms
	Memory:1268 kb
****************************************************************/

