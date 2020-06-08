#include<iostream>
#include<iomanip>
 
using namespace std;
 
class Time
{
    int h,m,s;
public:
    Time(int hh=0,int mm=0,int ss=0):h(hh),m(mm),s(ss){}
    Time(Time const &t):h(t.h),m(t.m),s(t.s){}
    Time &inputTime(){int hh,mm,ss;cin>>hh>>mm>>ss;h=hh;m=mm;s=ss;return *this;}
    Time operator+=(int a)
    {
        if(h>=24||m>=60||s>=60||h<0||m<0||s<0) {}
        else
        {
            s+=a;
            while(s>=60)
            {
                s-=60;m++;
            }
            while(m>=60)
            {
                m-=60;h++;
            }
            h%=24;
            return *this;
        }
    }
    Time operator-=(int a)
    {
        if(h>=24||m>=60||s>=60||h<0||m<0||s<0) {}
        else
        {
            s-=a;
            while(s<0)
            {
                s+=60;m--;
            }
            while(m<0)
            {
                m+=60;h--;
            }
            while(h<0)
            {
                h+=24;
            }
            return *this;
        }
 
    }
    void showTime()
    {
        if(h>=24||m>=60||s>=60||h<0||m<0||s<0) cout<<"Time error"<<endl;
        else
        cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;
    }
};

int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        Time t;
        t.inputTime();
        Time tt(t);
        int num;
        cin>>num;
        t += num;
        t.showTime();
        tt -= num;
        tt.showTime();
    }
}

/**************************************************************
	Problem: 1395
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:100 ms
	Memory:1268 kb
****************************************************************/

