#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int sec_;

public:
    Time(int h, int m, int s)
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
};

int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}

/**************************************************************
	Problem: 1385
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2180 ms
	Memory:1268 kb
****************************************************************/

