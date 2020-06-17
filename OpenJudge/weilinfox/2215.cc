#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


class Time {
public:
    Time (int h=0, int m=0, int s=0): h(h), m(m), s(s) {}
    int operator - (Time& t) {return abs((t.h - h)*3600 + (t.m - m)*60 + (t.s - s));}

    int h, m, s;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

