#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Time {
public:
        int h, m, s;
        Time(int hh = 0, int mm = 0, int ss = 0):h(hh), m(mm), s(ss) {

        }
        Time(const Time& T) {
                h = T.h;
                m = T.m;
                s = T.s;
                cout << "There was a call to the copy constructor : " << h << "," << m << "," << s << endl;
        }
        Time& setTime (int a, int b, int c) {h = a; m = b; s = c; return *this;}
        Time& setTime (const Time& T) {h = T.h; m = T.m; s = T.s;return *this;}
        Time& getTime () {return *this;}
        void showTime () {cout << setw(2) << setfill('0') << fixed << h << ":" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << endl;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:2384 ms
	Memory:1268 kb
****************************************************************/

