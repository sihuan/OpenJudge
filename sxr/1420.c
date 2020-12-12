#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,m,n,j;
    int sum=0;
    scanf("%d\n",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf(" %d",&a);
            if(a%2==0)
            sum += a;
            else sum = sum+a+1;
        }
        printf("Case %d: %d\n",i,sum);
        sum = 0;
    }
    return 0;
}
/**************************************************************
	Problem: 1420
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

