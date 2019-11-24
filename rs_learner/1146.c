#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double func(double x)
{
    double result,a;
    if(x<0)
        result=fabs(x);
    else if(x<1&&x>=0)
    {
        a=2*x;
         result=sin(a);
    }

    else if(x>=1&&x<5)
    {
        a=x*x*x+x;
        result=sqrt(a);
    }
    else
        result=2*x+10;
    return(result);

}
void output(int i,double x)
{
        printf("case %d:y=%.6g.\n",i,x);
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

