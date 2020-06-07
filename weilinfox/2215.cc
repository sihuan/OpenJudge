#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Time {
public:
    int h, s, m;
    Time (int a, int b, int c):h(a), m(b), s(c) {}
    int operator - (Time& t) {
        return abs((h-t.h)*3600 + (m-t.m)*60 + s-t.s);
    }
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

