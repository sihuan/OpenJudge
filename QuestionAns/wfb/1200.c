#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SWAP(a,b,t) t=a; a=b; b=t;

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    double x;
    for(i=0; i<n; ++i)
    {
        scanf("%lf",&x);
        printf("%.2lf\n",pow(1+x*x,x)*(log(1+x*x)+2*x*x/(1+x*x)));
    }

    return 0;
}

/**************************************************************
	Problem: 1200
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

