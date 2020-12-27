#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[101],m,n,k;
    scanf("%d",&n);
     a[1]=1;
     a[2]=2;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m);
    if(m<=2)
        printf("%d\n",a[m]);
    else
    {
         for(k=3;k<=m;k++)
            a[k]=a[k-1]+a[k-2];
            printf("%d\n",a[m]);
    }
    }
}

/**************************************************************
	Problem: 1095
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

