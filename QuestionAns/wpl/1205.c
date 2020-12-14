#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    double c=0,d=0;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        c=a*b;
        d=d+c;
    }
    printf("%.2lf",d);
    return 0;
}

/**************************************************************
	Problem: 1205
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

