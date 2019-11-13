#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Time {
private :
    int t_;
public:
    Time() {t_=0;}

    Time(int h,int m,int s) {t_ = h*3600+m*60+s;}
    int hour() const {return t_/3600;}
    int minute() const {return (t_%3600)/60;}
    int second() const {return t_%60;}
    void hour(int h) {t_ = t_%3600 + h*3600;}
    void minute(int m) {t_ = t_ - minute()*60 + m*60;}
    void second(int s) {t_ = t_ - second() + s;}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<hour()<<":"
        <<setw(2)<<setfill('0')<<minute()<<":"
        <<setw(2)<<setfill('0')<<second()<<endl;
    }
};

int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        t.hour(hour);
        t.minute(minute);
        t.second(second);
        cout<<setw(2)<<setfill('0')<<t.hour()<<":";
        cout<<setw(2)<<setfill('0')<<t.minute()<<":";
        cout<<setw(2)<<setfill('0')<<t.second()<<endl;
    }
}

/**************************************************************
	Problem: 1386
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:3068 ms
	Memory:1268 kb
****************************************************************/

