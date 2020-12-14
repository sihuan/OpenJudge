#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,j,n;
    int i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d %d",&a,&b);
        x=(a>b?a:b);
        y=(a>b?b:a);
        for(j=y;j<x;j++)
            printf("%d ",j);
        printf("%d\n",x);
        printf("\n");
        i++;
    }
    return 0;
}

/**************************************************************
	Problem: 1168
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

