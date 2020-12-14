#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,m;
    while(~scanf("%d",&n))
    {
        m=(n+1)/2;
        for(i=1; i<=m; i++)
        {
            for(k=0; k<m-i; k++)
            {
                printf(" ");
            }
            printf("*");
            if(i==1)
            {
                printf("\n");
                continue;
            }
            for(j=0; j<2*i-3; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for(i=m-1; i>0; i--)
        {
            for(k=0; k<m-i; k++)
            {
                printf(" ");
            }
            printf("*");
            if(i==1)
            {
                printf("\n");
                continue;
            }
            for(j=0; j<2*i-3; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1170
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

