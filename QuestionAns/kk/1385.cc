#include <iostream>
#include <cstdio>

using namespace std;

class Time
{
public:
    Time(int hour,int minute,int second)
    {
        h=hour;
        m=minute;
        s=second;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d\n",h,m,s);
    }
private:
    int h,m,s;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:2496 ms
	Memory:1268 kb
****************************************************************/

