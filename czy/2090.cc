#include "bits/stdc++.h"
using namespace std;

class Time
{

public:
    int h,m,s;
    Time(int xx,int yy,int cc):h(xx),m(yy),s(cc)
    {
        cout<<"Time "<<h<<":"<<m<<":"<<s<<" is created."<<endl;
    }
    ~Time()
    {
        cout<<"Time "<<h<<":"<<m<<":"<<s<<" is erased."<<endl;
    }
};

class Alarm
{
protected:
    Time t;
    string s;
public:
    Alarm(int hhh,int mmm,int sss,string th):t(hhh,mmm,sss),s(th)
    {
        cout<<"Alarm "<<s<<" is created."<<endl;
    }
    ~Alarm()
    {
        cout<<"Alarm "<<s<<" is erased."<<endl;
    }
     int remainSeconds(Time& p)
     {
            return t.h*3600+t.m*60+t.s-(p.h*3600+p.m*60+p.s);
     }
     string getThing() {return s;}
};
int main()
{
    int h, m, s;
    string th;
    cin>>th;
    cin>>h>>m>>s;
    Alarm alarm(h,m,s,th);
    cin>>h>>m>>s;
    Time now(h,m,s);
    cout<<"Alarm "<<alarm.getThing()<<" will start after "<<alarm.remainSeconds(now)<<" seconds."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2090
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

