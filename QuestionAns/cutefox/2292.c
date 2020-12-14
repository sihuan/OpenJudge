#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[15],cnt=0;
    int p,q,i,tmp;
    for(i=0; i<15; i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&p,&q);
    if(p>q)
    {
        tmp=p;
        p=q;
        q=tmp;
    }
    for(i=0;i<15;i++)
        if(a[i]>=p&&a[i]<=q)
           cnt++;
    printf("%d",cnt);
    return 0;
}

/**************************************************************
	Problem: 2292
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

