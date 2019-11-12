#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int flag=1;
    long i,k,n,m,sum,temp;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&m);
        sum=0;
        for(k=1;k<=m;++k)
        {
            scanf("%d",&temp);
            if(temp%2==0)
            {
                sum=sum+temp;
            }
            else
            {
                sum=sum+temp+1;
            }
        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}

/**************************************************************
	Problem: 1420
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

