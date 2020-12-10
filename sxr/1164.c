#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("+");
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1164
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

