#include<stdio.h>
int main()
{
    int a[15],p,q;
    for(int i=0;i<15;i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&p,&q);
    if(p>q)
    {
        int t;
        t=p;
        p=q;
        q=t;
    }
    int j=0;
    for(int i=0;i<15;i++)
        if(a[i]>=p&&a[i]<=q)
            j++;
    printf("%d",j);
}

/**************************************************************
	Problem: 2292
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

