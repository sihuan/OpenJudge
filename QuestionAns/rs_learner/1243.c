#include<stdio.h>
#include<math.h>
int main()
{
    double x,b,a;

    scanf("%lf",&x);
    if(x>=0)
    {
        a=floor(x);
        b=x-a;
        printf("+ %d",(int)a);
        printf(" %g",b);
    }
    if(x<0)
    {
        a=ceil(x);
        b=x-a;
        printf("- %d",(int)a*-1);
        printf(" %g",fabs(b));
    }
    return 0;
}
/**************************************************************
	Problem: 1243
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

