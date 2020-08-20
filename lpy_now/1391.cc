#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Time {
private:
    int Time_hour, Time_minute, Time_second;
public:
    Time() {

    }
    Time(int h, int m, int s) {
        Time_hour = h, Time_minute = m, Time_second = s;
    }
    Time(Time &T) {
        Time_hour = T.Time_hour, Time_minute = T.Time_minute, Time_second = T.Time_second;
    }
    int hour(){
        return Time_hour;
    }
    int minute() {
        return Time_minute;
    }
    int second() {
        return Time_second;
    }
    void hour(int h) {
        Time_hour = h;
    }
    void minute(int m) {
        Time_minute = m;
    }
    void second(int s) {
        Time_second = s;
    }
    Time& setTime(int h, int m, int s) {
        Time_hour = h, Time_second = s, Time_minute = m;
        return *this;
    }
    Time& setTime(Time& T) {
        Time_hour = T.Time_hour, Time_minute = T.Time_minute, Time_second;
        return *this;
    }
    Time& getTime() {
        return *this;
    }
    Time& inputTime() {
        cin >> Time_hour >> Time_minute >> Time_second;
        return *this;
    }
    const void showTime() const {
        if (Time_hour >= 24 || Time_minute >= 60 || Time_second >= 60 || Time_hour < 0 || Time_minute < 0 || Time_second < 0) {
            cout << "Time error" << endl;
        }
        else {
            cout << setw(2) << setfill('0') << Time_hour << ":" << setw(2) << setfill('0') << Time_minute << ":" << setw(2) << setfill('0') << Time_second << endl;
        }
    }
    void showTime12Hour()const {
        if (Time_hour >= 24 || Time_minute >= 60 || Time_second >= 60 || Time_hour < 0 || Time_minute < 0 || Time_second < 0) {
            cout << "Time error" << endl;
        }
        else{
            if (Time_hour == 12) {
                cout << setw(2) << setfill('0') << 12 << ":" << setw(2) << setfill('0') << Time_minute << ":" << setw(2) << setfill('0') << Time_second << " p.m." << endl;
            }
            else if (Time_hour == 0) {
                cout << setw(2) << setfill('0') << 12 << ":" << setw(2) << setfill('0') << Time_minute << ":" << setw(2) << setfill('0') << Time_second << " a.m." << endl;
            }               
            else if (Time_hour > 12 && Time_hour < 24) {
                cout << setw(2) << setfill('0') << Time_hour - 12 << ":" << setw(2) << setfill('0') << Time_minute << ":" << setw(2) << setfill('0') << Time_second << " p.m." << endl;
            }              
            else {
                cout << setw(2) << setfill('0') << Time_hour << ":" << setw(2) << setfill('0') << Time_minute << ":" << setw(2) << setfill('0') << Time_second << " a.m." << endl;
            }              
        }
    }
};

int main()
{
    cout<<"Constant test output :"<<endl;
    const Time c(11, 59, 58);
    const Time cc(12, 0, 1);
    c.showTime12Hour();
    cc.showTime12Hour();
    c.showTime();
    cc.showTime();

    cout<<"\nTest data output :"<<endl;
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
            tt.showTime12Hour();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime12Hour();
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
	Problem: 1391
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:2184 ms
	Memory:1272 kb
****************************************************************/

