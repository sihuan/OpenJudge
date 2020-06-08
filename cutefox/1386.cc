#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
public:
    Time() {};
    //读
    int hour(void);
    int minute(void);
    int second(void);
    //写
    void hour(int);
    void minute(int);
    void second(int);
private:
    int hh,mm,ss;
};
int Time::hour(void){
     return hh;
}
int Time::minute(void){
    return mm;
}
int Time::second(void){
    return ss;
}
void Time::hour(int hh){
    this->hh = hh;//前面那个是成员变量,后一个为形参
}
void Time::minute(int mm){
    this->mm = mm;//前面那个是成员变量,后一个为形参
}
void Time::second(int ss){
    this->ss = ss;//前面那个是成员变量,后一个为形参
}


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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

