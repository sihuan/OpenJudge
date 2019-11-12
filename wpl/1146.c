#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double func(double x)
{
    double y,a;
    if(x<0)
    {
        y=x*(-1);
    }
    else if(x>=0&&x<1)
    {
        y=sin(x*2);
    }
    else if(x>=1&&x<5)
    {
        a=x*x*x+x;
        y=sqrt(a);
    }
    else
    {
        y=x*2+10;
    }
    return y;
}
int output(int n, double X)
{
       printf("case %d:y=%.6g.\n",n,X);
    return 0;
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
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

