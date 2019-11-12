#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=0,flag=0;
    double x=0.0;
    scanf("%d",&a);
    x=sqrt(a);
    if(x==(int)x) flag=1;
    if(flag==1 && a%2==0 && a>0)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
    return 0;
}

/**************************************************************
	Problem: 1403
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

