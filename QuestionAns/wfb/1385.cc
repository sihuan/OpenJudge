#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Time {
private :
    int t_;
public:
    Time(int h,int m,int s) {t_ = h*3600+m*60+s;}
    int getHour() const {return t_/3600;}
    int getMin() const {return (t_%3600)/60;}
    int getSec() const {return t_%60;}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<getHour()<<":"
        <<setw(2)<<setfill('0')<<getMin()<<":"
        <<setw(2)<<setfill('0')<<getSec()<<endl;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:2796 ms
	Memory:1268 kb
****************************************************************/

