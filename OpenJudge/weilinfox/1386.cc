#include <iostream>
#include <iomanip>
using namespace std;

class Time {
        int h, m, s;
public:
        void hour (int a) {h = a;}
        void minute (int a) {m = a;}
        void second (int a) {s = a;}
        int hour () {return h;}
        int minute () {return m;}
        int second () {return s;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

