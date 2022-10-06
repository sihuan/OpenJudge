#include <stdio.h>
#include <stdlib.h>
#define N 45
int main()
{int a[50],i,m,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {a[0]=1;a[1]=2;
    scanf("%d",&m);
    if(m<=2)
        printf("%d\n",a[m-1]);
    else
    {
         for(k=2;k<m;k++)
    a[k]=a[k-1]+a[k-2];
    printf("%d\n",a[k-1]);
    }
    }




    }
/**************************************************************
	Problem: 1095
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

