#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
int sum=0;

class Time
{
private :
    int hh,mm,ss,up,k;
public:
    Time(int h=0,int m=0,int s=0):hh(h),mm(m),ss(s)
    {
    }

    friend istream &operator >>(istream &in,Time &p)
    {
        in >> p.hh >> p.mm >>p.ss;
        return in;
    }
    friend ostream &operator <<(ostream &out ,Time p)
    {
        if(p.hh>=24||p.hh<0||p.mm>=60||p.mm<0||p.ss>=60||p.ss<0)
        {
            out << "error!!!" ;
            return out;
        }
        else
        {
            out << setw(2)<<setfill('0') <<p.hh << ":"<< setw(2) << setfill('0')  << p.mm << ":"  << setw(2)<< setfill('0') << p.ss;
            return out;
        }
    }
    friend Time operator ++(Time &p,int)
    {
        if(p.hh>=24||p.hh<0||p.mm>=60||p.mm<0||p.ss>=60||p.ss<0) return p;
        Time t = p;
        p.ss++;
        if(p.ss>=60)
        {
            p.ss-=60;
            p.mm++;
        }
        if(p.mm>=60)
        {
            p.mm-=60;
            p.hh++;
        }
        if(p.hh>=24)
        {
            p.hh-=24;
        }
        return t;
    }
    friend Time &operator ++(Time &p)
    {
        if(p.hh>=24||p.hh<0||p.mm>=60||p.mm<0||p.ss>=60||p.ss<0) return p;
        Time t = p;
        p.ss++;
        if(p.ss>=60)
        {
            p.ss=p.ss-60;
            p.mm++;
        }
        if(p.mm>=60)
        {
            p.mm=p.mm-60;
            p.hh++;
        }
        if(p.hh>=24)
        {
            p.hh=p.hh-24;
        }
        return p;
    }
    friend Time operator --(Time &p,int)
    {
        if(p.hh>=24||p.hh<0||p.mm>=60||p.mm<0||p.ss>=60||p.ss<0) return p;
        Time t = p;
        p.ss--;
        if(p.ss<0)
        {
            p.ss=p.ss+60;
            p.mm--;
        }
        if(p.mm<0)
        {
            p.mm=p.mm+60;
            p.hh--;
        }
        if(p.hh<0)
        {
            p.hh=p.hh+24;
        }
        return t;
    }
    friend Time &operator --(Time &p)
    {
        if(p.hh>=24||p.hh<0||p.mm>=60||p.mm<0||p.ss>=60||p.ss<0) return p;
        Time t = p;
        p.ss--;
        if(p.ss<0)
        {
            p.ss=p.ss+60;
            p.mm--;
        }
        if(p.mm<0)
        {
            p.mm=p.mm+60;
            p.hh--;
        }
        if(p.hh<0)
        {
            p.hh=p.hh+24;
        }
        return p;
    }

};


int main()
{
    Time t;
    int cases;
    cin>>cases;
    cout<<setw(8)<<left<<"++t"<<" ";
    cout<<setw(8)<<left<<"--t"<<" ";
    cout<<setw(8)<<left<<"t"<<" ";
    cout<<setw(8)<<left<<"t--"<<" ";
    cout<<setw(8)<<left<<"t++"<<" ";
    cout<<setw(8)<<left<<"t"<<right<<endl;
    for(int i = 1; i <= cases; ++i)
    {
        cin>>t;
        cout<<(++t)<<" ";
        cout<<(--t)<<" ";
        cout<<t<<" ";
        cout<<t--<<" ";
        cout<<t++<<" ";
        cout<<t<<endl;
    }
}

/**************************************************************
	Problem: 1396
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:64 ms
	Memory:1272 kb
****************************************************************/

