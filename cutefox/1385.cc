#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
private:
    int x,y,z;
public:
    Time(int a,int b,int c){x=a,y=b,z=c;}
    void showTime(){cout<<setfill('0')<<setw(2)<<x<<":"<<setfill('0')<<setw(2)<<y<<":"<<setfill('0')<<setw(2)<<z<<endl;}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

