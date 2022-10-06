#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i,j,s,k,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&m);
            if(m%2==0)
                s+=m;
            if(m%2==1)
                s+=(m+1);
        }
        printf("Case %d: %d\n",i+1,s);
    }
}

/**************************************************************
	Problem: 1420
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

