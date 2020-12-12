#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-i; j++)
            printf(" ");
        k=n-1;
        for(j=1; j<i; j++)
        {
            printf("%d",k);
            k--;
        }
        printf("1");
        k++;
        for(j=1; j<i; j++)
        {
            printf("%d",k);
            k++;
        }
        for(j=1; j<=n-i; j++)
            printf(" ");
        printf("\n");
    }
    for(i=1;i<2*n;i++)
        printf("1");
    printf("\n");
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=i; j++)
            printf(" ");
        k=n-1;
        for(j=1; j<n-i; j++)
        {
            printf("%d",k);
            k--;
        }
        printf("1");
        k++;
        for(j=1; j<n-i; j++)
        {
            printf("%d",k);
            k++;
        }
        for(j=1; j<=i; j++)
            printf(" ");
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1792
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

