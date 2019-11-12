#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

using namespace std;

int get_num(int &a,int &b,int &c)
{
    cin>>a>>b>>c;
}

int max_min(int &mmax,int &mmin,int a,int b,int c)
{
    mmax=a;mmin=a;
    if(mmax<b) mmax=b;
    if(mmax<c) mmax=c;
    if(mmin>b) mmin=b;
    if(mmin>c) mmin=c;

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:16 ms
	Memory:1268 kb
****************************************************************/

