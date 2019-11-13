#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Time {
private :
    int t_;
public:
    Time() {t_=0;}
    Time(const Time& t) {
        t_=t.time();
        cout<<"There was a call to the copy constructor : "
        <<t.hour()<<","<<t.minute()<<","<<t.second()<<endl;
    }
    Time(int h,int m,int s) {t_ = h*3600+m*60+s;}
    int hour() const {return t_/3600;}
    int minute() const {return (t_%3600)/60;}
    int second() const {return t_%60;}
    int time() const {return t_;}
    void hour(int h) {t_ = t_%3600 + h*3600;}
    void minute(int m) {t_ = t_ - minute()*60 + m*60;}
    void second(int s) {t_ = t_ - second() + s;}
    const Time& setTime(int h,int m,int s) {
        t_ = h*3600 + m*60 + s;
        return *this;
    }
    const Time& setTime(const Time& t) {
        t_ = t.time();
        return *this;
    }
    const Time& getTime() {return *this;}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<hour()<<":"
        <<setw(2)<<setfill('0')<<minute()<<":"
        <<setw(2)<<setfill('0')<<second()<<endl;
    }
    const Time& inputTime() {
        int h,m,s;
        cin>>h>>m>>s;
        t_ = h*3600 + m*60 + s;
        return *this;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:2756 ms
	Memory:1268 kb
****************************************************************/

