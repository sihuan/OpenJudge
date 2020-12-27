#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[16],count=0;
    int p,q,i,t;
    for(i=1; i<=15; i++)
    	scanf("%d",&a[i]);
    scanf("%d %d",&p,&q);
    if(p>q)
    {
        t=p;
        p=q;
        q=t;
    }
    for(i=1;i<=15;i++)
        if(a[i]>=p&&a[i]<=q)
           count++;
    printf("%d",count);
    return 0;
}

/**************************************************************
	Problem: 2292
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

