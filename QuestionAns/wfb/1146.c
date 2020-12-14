#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double func(double x)
{
    double y;
    if(x<0) y = -x;
    else if(x<1) y = sin(2*x);
    else if(x<5) y = sqrt((x*x+1)*x);
    else y = 2*x+10;
    return y;
}
int output(int n, double x)
{
   printf("case %d:y=%.6g.\n",n,x);
}

int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
/**************************************************************
	Problem: 1146
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

