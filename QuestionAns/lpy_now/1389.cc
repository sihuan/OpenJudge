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
    Time &inputTime()
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        this->hour(hour);this->minute(minute);this->second(second);
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
        if(h >= 0&& h<24 && m >=0 && m < 60 && s >= 0 && s < 60){
        cout << setw(2) << setfill('0');
        cout << setw(2) << h << ":";
        cout << setw(2) << m << ":";
        cout << setw(2) << s << endl;
        }
        else
            cout << "Time error" << endl;
    }
};
 


int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 4 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            tt.showTime();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime();
        if(i % 4 == 3)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}

/**************************************************************
	Problem: 1389
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:2204 ms
	Memory:1268 kb
****************************************************************/

