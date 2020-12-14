#include<stdio.h>
int main()
{
    int i,j,n,c,h=0;
    scanf("%d",&n);
    for(j=1;j<=n/2+1;j++)
    {
        for(i=n/2+1-j;i>=1;i--)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",'A'+h);
            h++;
        }
        h=j;
        printf("\n");
    }
    h=n/2-1;
    for(j=n/2;j>=1;j--)
    {
        for(i=1;i<=n/2-j+1;i++)
        {
            printf(" ");
        }
        for(i=2*j-1;i>=1;i--)
        {
            printf("%c",'A'+h);
            h++;
        }
        h=j-2;
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1221
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

