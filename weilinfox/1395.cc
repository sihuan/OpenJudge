#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Time {
public:
        int h, m, s;
        Time(int hh = 0, int mm = 0, int ss = 0):h(hh), m(mm), s(ss) {}
        Time(const Time& T) {h = T.h;m = T.m;s = T.s;}
        Time& setTime (int a, int b, int c) {h = a; m = b; s = c; return *this;}
        Time& setTime (const Time& T) {h = T.h; m = T.m; s = T.s;return *this;}
        Time& getTime () {return *this;}
        Time& inputTime () {cin >> h >> m >> s;return *this;}
        void showTime () {
        if (h > 23 || m > 59 || s > 59) cout << "Time error" << endl;
                else if (h < 0 || m < 0 || s < 0) cout << "Time error" << endl;
        else cout << setw(2) << setfill('0') << fixed << h << ":" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << endl;
    }
        int hour () {return this->h;}
        int minute () {return this->m;}
        int second() {return this->s;}
        void hour (int a) {h = a;}
        void minute (int a) {m = a;}
        void second (int a) {s = a;}
        void operator += (int n) {
                if ((h > 23 || m > 59 || s > 59) || (h < 0 || m < 0 || s < 0)) return;
                else {
                        h += n / 3600;
                        m += (n / 60) % 60;
                        s += n % 60;
                        if (s > 59) {s -= 60; m++;}
                        if (m > 59) {m -= 60; h++;}
                        if (h > 23) h -= 24;
                }
        }
        void operator -= (int n) {
                if ((h > 23 || m > 59 || s > 59) || (h < 0 || m < 0 || s < 0)) return;
                else {
                        h -= n / 3600;
                        m -= (n / 60) % 60;
                        s -= n % 60;
                        if (s < 0) {s += 60; m--;}
                        if (m < 0) {m += 60; h--;}
                        if (h < 0) h += 24;
                }
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:108 ms
	Memory:1272 kb
****************************************************************/

