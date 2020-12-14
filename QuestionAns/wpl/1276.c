#include <stdio.h>
#include <stdlib.h>

int print_graphic(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(j=(n-1)/2;j>=1;j--)
    {
        for(i=1;i<=j;i++)
        {
            printf("*");
        }
        for(k=1;k<=n-2*j;k++)
        {
            printf(" ");
        }
        for(i=1;i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(j=2;j<=(n-1)/2;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf("*");
        }
        for(k=1;k<=n-2*j;k++)
        {
            printf(" ");
        }
        for(i=1;i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

