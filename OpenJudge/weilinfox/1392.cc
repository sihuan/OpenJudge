#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Time {
public:
        int h, m, s;
        static int num, sum;
        Time(int hh = 0, int mm = 0, int ss = 0):h(hh), m(mm), s(ss) {
                sum++; num++;
        }
        Time(const Time& T) {
                h = T.h;m = T.m;s = T.s; sum++; num++;
                cout << "There was a call to the copy constructor : " << h << "," << m << "," << s << endl;
        }
        ~Time () {num--;};
        Time& setTime (int a, int b, int c) {h = a; m = b; s = c; return *this;}
        Time& setTime (const Time& T) {h = T.h; m = T.m; s = T.s;return *this;}
        Time& getTime () {return *this;}
        Time& inputTime () {cin >> h >> m >> s;return *this;}
        void showTime () {
        if (h > 23 || m > 59 || s > 59) cout << "Time error" << endl;
                else if (h < 0 || m < 0 || s < 0) cout << "Time error" << endl;
        else cout << setw(2) << setfill('0') << fixed << h << ":" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << endl;
    }
        void showTime12Hour () {
                if (h > 23 || m > 59 || s > 59) cout << "Time error" << endl;
                else if (h < 0 || m < 0 || s < 0) cout << "Time error" << endl;
                else if (h == 0) cout <<  "12:" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << " a.m." << endl;
                else if (h > 0 && h < 12) cout << setw(2) << setfill('0') << fixed << h << ":" << setw(2) << setfill('0') << fixed << m << ":" << setw(2)     << setfill('0') << fixed << s << " a.m." << endl;
                else if (h == 12) cout <<  "12:" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << " p.m." << endl;
                else cout << setw(2) << setfill('0') << fixed << h - 12 << ":" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << " p.m." << endl;
        }
        int hour () {return this->h;}
        int minute () {return this->m;}
        int second() {return this->s;}
        void hour (int a) {h = a;}
        void minute (int a) {m = a;}
        void second (int a) {s = a;}
        static int getNumber() {return sum;}
        static void displayNumber() {cout << "Now, There is " << sum << " object of Time." << endl;}

};

int Time::sum = 0, Time::num = 0;
#define const




int main()
{
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}

/**************************************************************
	Problem: 1392
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:2256 ms
	Memory:1272 kb
****************************************************************/

