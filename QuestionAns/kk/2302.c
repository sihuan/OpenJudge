#include<stdio.h>
void prf(int n)
{
    int i,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i-1;j++)
            printf("@ ");
        for(j=n-i;j>0;j--)
            printf("@@");
        printf("@@@");
        for(j=n-i;j>0;j--)
            printf("@@");
        for(j=1;j<=i-1;j++)
            printf(" @");
        printf("\n");
        for(j=1;j<=i;j++)
            printf("@ ");
        for(j=n-i-1;j>0;j--)
            printf("  ");
        printf("   ");
        for(j=n-i-1;j>0;j--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" @");
        printf("\n");
 
    }
}
void prs(int n)
{
    int j;
    for(j=1;j<=n-1;j++)
        printf("@ ");
    printf("@@@");
    for(j=1;j<=n-1;j++)
        printf(" @");
    printf("\n");
    for(j=1;j<=2*n-1;j++)
        printf("@ ");
    printf("@\n");
    for(j=1;j<=n-1;j++)
        printf("@ ");
    printf("@@@");
    for(j=1;j<=n-1;j++)
        printf(" @");
    printf("\n");
}
void prt(int n)
{
    int i,j;
    for(i=n-1;i>0;i--)
    {
 
        for(j=1;j<=i;j++)
            printf("@ ");
        for(j=n-i-1;j>0;j--)
            printf("  ");
        printf("   ");
        for(j=n-i-1;j>0;j--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" @");
        printf("\n");
        for(j=1;j<=i-1;j++)
            printf("@ ");
        for(j=n-i;j>0;j--)
            printf("@@");
        printf("@@@");
        for(j=n-i;j>0;j--)
            printf("@@");
        for(j=1;j<=i-1;j++)
            printf(" @");
        printf("\n");
    }
}
 
int main()
{
    int n;
    scanf("%d",&n);
    prf(n);
    prs(n);
    prt(n);
    return 0;
}

/**************************************************************
	Problem: 2302
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

