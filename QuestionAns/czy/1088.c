#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    if(a<0) a=-a;
    else a=a;
    if(a<10 && a>=0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%.2d",a%100);
    }
    return 0;
}

/**************************************************************
	Problem: 1088
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

