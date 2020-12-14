#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n;
    int a[50];
    a[0]=1;
    a[1]=1;
    for(i=2;i<=45;i++)
        a[i]=a[i-1]+a[i-2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    return 0;
}

/**************************************************************
	Problem: 1095
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

