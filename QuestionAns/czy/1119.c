#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    /*unsigned long long */int b=0,c=0,n=0,i=0,k=0,j=0,m=0,sum=0,min=0,max=0,d=0,kl=0;
    int a[100020];
   // scanf("%d",&n);
    while(1)
    {
        sum=0;
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
        }
        int max=0,min=0x7FFFFFFF;
        for(i=0;i<n;++i)
        {
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        sum=max-min;
        printf("%d\n",sum*2);
    }

    return 0;
}

/**************************************************************
	Problem: 1119
	User: 201601160202
	Language: C
	Result: Accepted
	Time:56 ms
	Memory:1064 kb
****************************************************************/

