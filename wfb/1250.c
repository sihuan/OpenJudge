#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define t1 asin(st/a)
#define t2 asin(ed/a)

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    double a,b,st,ed;
    for(i=0; i<n; ++i)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&st,&ed);
        printf("%.3lf\n",2*a*b*((t2-t1)/2+(sin(2*t2)-sin(2*t1))/4));
    }

    return 0;
}

/**************************************************************
	Problem: 1250
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

