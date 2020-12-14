#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t,n,m,i,j,max=0;
    int s[10010];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        for(j=0;j<=10010;j++)
            s[j]=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&m);
            ++s[m];
        }
        for(j=0; j<=10000; j++)
        {
            if(s[j]>max)
                max=s[j];
        }
        printf("%d",max);
        for(j=0; j<=10000; j++)
        {
            if(s[j]==max)
                printf(" %d",j);
        }
        printf("\n");
        max=0;
    }
    return 0;
}
/**************************************************************
	Problem: 1767
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

