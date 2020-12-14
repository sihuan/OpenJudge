#include<stdio.h>
#include <stdlib.h>
int main()
{
    double a;
    scanf("%lf",&a);
    int b=(int)a;
    if( a >= 0)
    {
        printf ("+ ");
    }
    else
    {
        printf ("- ");
        b = -b;
        a = -a;
    }
    printf("%d %lg",b,a-b);
    return 0;
}

/**************************************************************
	Problem: 1243
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

