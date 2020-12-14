#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Time{
public:
    Time(int h,int m,int s) : h_(h),m_(m),s_(s){}
    int operator - (const Time& t){
        return abs((h_-t.h_)*3600+(m_-t.m_)*60+(s_-t.s_));
    }

private:
    int h_,m_,s_;
};
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    Time t1(a, b, c);
    cin>>a>>b>>c;
    Time t2(a, b, c);
    cout<<"Deference is "<<(t2 - t1)<<" seconds."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2215
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

