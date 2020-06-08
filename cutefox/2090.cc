#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Time
{
public:
    int h,m,s;
    Time(int a,int b,int c):h(a),m(b),s(c)
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
public:
    string s;
    Time t;
    string getThing()
    {
        return s;
    }
    Alarm(int a,int b,int c,string d):t(a,b,c)
    {
        s=d;
        cout<<"Alarm "<<s<<" is created."<<endl;
    }
    ~Alarm()
    {
        cout<<"Alarm "<<s<<" is erased."<<endl;

    }
    int remainSeconds(Time& now)
    {
        int sum=0;
        sum = (t.h*3600+t.m*60+t.s)-(now.h*3600+now.m*60+now.s);
        return sum;
    }
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

