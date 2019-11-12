#include <iostream>
#include <stdio.h>
#include <cstring>
#include<algorithm>
#include <string.h>
#define mod  1000000007
#define INF  0x3f3f3f3f
#define Fuck() cout << "MMP" << endl
using namespace std;

bool cmp(const int &a,const int &b )
{
    return a>b;
}

const int max_n=100005;

bool flag=true;

int main()
{
    double a=0,b=0,c=0,d=0,e=0;
    scanf("%lf  %lf  %lf  %lf",&a,&b,&c,&d);
    //e=a+b+c+d;
    printf("%0.0lf\n",a+b+c+d);
    return 0;
}

/**************************************************************
	Problem: 2126
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

