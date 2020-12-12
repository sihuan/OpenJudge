#include<stdio.h>

int main()
{
    int a,i,j,k,n,m;
    scanf("%d",&m);
    for(a=1;a<=m;a++)
    {
    scanf("%d",&n);
    if(n>0)
    {
    for(i=1;i<=n;i++)
    {
        int k=(i<10?i:(i%10));
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%d",k);
        printf("\n");
    }
    printf("\n");
    }
    else
    {
    n=n*(-1);
    for(i=n;i>=1;i--)
    {
        int k=(i<10?i:(i%10));
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%d",k);
        printf("\n");
    }
    printf("\n");
    }
    }
    return 0;
}
/**************************************************************
	Problem: 1166
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

