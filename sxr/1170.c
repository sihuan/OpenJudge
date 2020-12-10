#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n/2+1; i++)
        {
            for(j=1; j<=n/2+1-i; j++)
                printf(" ");
            printf("*");
            if(i!=1)
            {
                for(j=1; j<=(i-1)*2-1; j++)
                    printf(" ");
                printf("*");
            }
            printf("\n");
        }
        for(i=1;i<=n/2;i++)
        {
            for(j=1;j<=i;j++)
                printf(" ");
            printf("*");
            if(i!=n/2)
            {
                for(j=1; j<=(n/2-i)*2-1; j++)
                    printf(" ");
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1170
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

