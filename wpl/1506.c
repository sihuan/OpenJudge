#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int k=1,i=1;
    while(scanf("%d",&n)!=EOF)
    {
        for(k=1;k<=n;k++)
        {
            for(i=1;i<=k-1;i++)
            {
                printf("0 ");
            }
            if(k<n)printf("1 ");
            if(k==n)printf("1");
            for(i=1;i<=n-k;i++)
            {
                if(i==n-k)
                {
                    printf("0\n");
                }
                else
                    printf("0 ");
            }
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1506
	User: 201901060819
	Language: C
	Result: Accepted
	Time:92 ms
	Memory:748 kb
****************************************************************/

