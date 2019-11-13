#include <iostream>
#include <cstdio>

using namespace std;

class Time{
public:
    Time(int h,int m,int s) : hour(h),minute(m),second(s) {cout<<"Time "<<hour<<":"<<minute<<":"<<second<<" is created."<<endl;}
    ~Time() {cout<<"Time "<<hour<<":"<<minute<<":"<<second<<" is erased."<<endl;}
    int hour,minute,second;
};
class Alarm{
public:
    Alarm(int h,int m,int s,string n) : t_(h,m,s),n_(n) {cout<<"Alarm "<<n_<<" is created."<<endl;}
    ~Alarm() {cout<<"Alarm "<<n_<<" is erased."<<endl;}
    int remainSeconds(Time& now) const {
        return (t_.hour-now.hour)*3600 + (t_.minute-now.minute)*60 + (t_.second-now.second);
    }
    string getThing() const {return n_;}
private:
    Time t_;
    string n_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

