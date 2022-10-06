#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <malloc.h>
#include <iostream>

using namespace std;

void get_num(int &a,int &b,int &c)
{
    scanf("%d%d%d",&a,&b,&c);
}
void max_min(int &mmax,int &mmin, int a,int b,int c)
{
    int tmax,tmin;
    tmax=a,tmin=a;
    if(b>tmax)
        tmax=b;
    if(c>tmax)
        tmax=c;
    if(b<tmin)
        tmin=b;
    if(c<tmin)
        tmin=c;
    mmax=tmax;
    mmin=tmin;

}
int main()
{
    int cases;
    int mmax, mmin, a, b, c;

    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        get_num(a, b, c);
        max_min(mmax, mmin, a, b, c);
        cout<<"case "<<i<<" : "<<mmax<<", "<<mmin<<endl;
    }
}
/**************************************************************
	Problem: 1382
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

