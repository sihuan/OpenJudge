#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int sec_;

public:
    Time()
        : sec_(0)
    {
    }
    void setTime(int h, int m, int s)
    {
        sec_ = h * 3600 + m * 60 + s;
        while (sec_ >= 86400)
            sec_ -= 86400;
    }
    void showTime()
    {
        cout << setw(2) << setfill('0');
        cout << sec_ / 3600 << ":";
        cout << setw(2) << setfill('0');
        cout << sec_ % 3600 / 60 << ":";
        cout << setw(2) << setfill('0');
        cout << sec_ % 3600 % 60 << endl;
    }
    Time& inputTime()
    {
        int h, m, s;
        cin >> h >> m >> s;
        setTime(h, m, s);
        return *this;
    }
};

int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
        t.inputTime().showTime();
}

/**************************************************************
	Problem: 1387
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2204 ms
	Memory:1268 kb
****************************************************************/

