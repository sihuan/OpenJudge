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
        printf("%.2lf\n",1/(cos(x)*cos(x)*cos(x)));
    }

    return 0;
}

/**************************************************************
	Problem: 1206
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

