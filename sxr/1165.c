#include<stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k=(i<10?i:(i%10));
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%d",k);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1165
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

