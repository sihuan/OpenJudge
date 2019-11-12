#include <bits/stdc++.h>

using namespace std;

class Time
{
public:
    int h,m,s;
    Time(int aa,int bb,int cc):h(aa),m(bb),s(cc){}
    friend int operator -(Time &p,Time &q)
    {
        int x=p.h*3600+p.m*60+p.s-q.h*3600-q.m*60-q.s;
        if(x<0) x=-1*x;
        return x;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

