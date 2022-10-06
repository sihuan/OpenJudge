#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

class Time
{
public:
    Time(){}
    Time(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
        printf("Time %d:%d:%d is created.\n",hour,minute,second);
    }
    ~Time()
    {
        printf("Time %d:%d:%d is erased.\n",hour,minute,second);
    }
    int getTime()
    {
        return hour*3600+minute*60+second;
    }
private:
    int hour,minute,second;
};

class Alarm
{
public:
    Alarm(int h,int m,int s,string n):time(h,m,s)
    {
        name=n;
        cout<< "Alarm "<<name<<" is created."<<endl;
    }
    string getThing()
    {
        return name;
    }
    int remainSeconds(Time& now)
    {
        return time.getTime()-now.getTime();
    }
    ~Alarm()
    {
        cout<< "Alarm "<<name<<" is erased."<<endl;
    }
private:
    Time time;
    string name;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

