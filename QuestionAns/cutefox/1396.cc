#include<iostream>
#include<iomanip>
 
using namespace std;
 
class Time
{
    int h,m,s;
public:
    Time():h(0),m(0),s(0){}
    friend ostream &operator<<(ostream &os,const Time &t)
    {
        if(t.h>=0&&t.h<24&&t.m>=0&&t.m<60&&t.s>=0&&t.s<60)
            os<<setw(2)<<setfill('0')<<t.h<<":"<<setw(2)<<setfill('0')<<t.m<<":"<<setw(2)<<setfill('0')<<t.s;
        else
            os<<"error!!!";
        return os;
    }
    friend istream &operator>>(istream &is,Time &t)
    {
        is>>t.h>>t.m>>t.s;
        return is;
    }
    Time &operator++()
    {
        if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
        {
            ++s;
            if(s>=60)
            {
                s-=60;
                ++m;
            }
            if(m>=60)
            {
                m-=60;
                ++h;
            }
            if(h>=24)
                h-=24;
        }
        return *this;
    }
    Time operator++(int)
    {
        Time q=(*this);
        if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
        {
            ++s;
            if(s>=60)
            {
                s-=60;
                ++m;
            }
            if(m>=60)
            {
                m-=60;
                ++h;
            }
            if(h>=24)
                h-=24;
        }
        return q;
    }
    Time &operator--()
    {
        if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
        {
            --s;
            if(s<0)
            {
                s+=60;
                --m;
            }
            if(m<0)
            {
                m+=60;
                --h;
            }
            if(h<0)
                h+=24;
        }
        return *this;
    }
    Time operator--(int)
    {
        Time q=(*this);
        if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
        {
            --s;
            if(s<0)
            {
                s+=60;
                --m;
            }
            if(m<0)
            {
                m+=60;
                --h;
            }
            if(h<0)
                h+=24;
        }
        return q;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:1272 kb
****************************************************************/

