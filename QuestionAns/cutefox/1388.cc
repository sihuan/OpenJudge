
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    Time():h(0),m(0),s(0){}
    Time(int hh,int mm,int ss) : h(hh),m(mm),s(ss){}
    Time(const Time &t)
    {
        h = t.h;m = t.m;s = t.s;
        cout << "There was a call to the copy constructor : " << h << "," << m << "," << s << endl;
    }
public:
    Time &setTime(int hh ,int mm ,int ss)
    {
        h = hh;m = mm;s = ss;
        return* this;
    }
    Time &setTime(const Time & t)
    {
        h = t.hour();
        m = t.minute();
        s = t.second();
        return *this;
    }
    Time &getTime()
    {
        return *this;
    }
public:
    int hour(int hh){return h = hh;}
    int minute(int mm){return m = mm;}
    int second(int ss ){return s = ss;}
public:
    int hour()const{return h;}
    int minute()const{return m;}
    int second()const{return s;}
public:
    void showTime() const
    {
        cout << setw(2) << setfill('0');
        cout << setw(2) << h << ":";
        cout << setw(2) << m << ":";
        cout << setw(2) << s << endl;
    }
};


int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

/**************************************************************
	Problem: 1388
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:2216 ms
	Memory:1268 kb
****************************************************************/

