#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    /*unsigned long long */int b=0,c=0,n=0,i=0,m=0,sum=0,min=0,max=0;
    int a[2000];
    scanf("%d",&n);
    for(m=0;m<n;++m)
    {
        scanf("%d",&b);
        a[1]=1;
    a[2]=2;
    for(i=3;i<=b;++i)
    {
        int temp=0;
        temp=a[1]+a[2];
        a[1]=a[2];
        a[2]=temp;
    }

    if(b==1)
    {
        printf("1\n");
        continue;
    }
    printf("%d\n",a[2]);
    }

    return 0;
}

/**************************************************************
	Problem: 1095
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

