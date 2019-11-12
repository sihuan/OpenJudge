#include <stdio.h>

int main()

{
    int i,n,k;
    while(~scanf("%d",&n))
    {
        if(n==0)
            break;

        if(n%2==0)
        {
            for(k=1; k<=n; k++)
            {
                for(i=1; i<=n-k; i++)
                    printf(" ");
                for(i=1; i<=2*k-1; i++)
                {

                    printf("+");
                }
                printf("\n");
            }
            printf("\n");
        }
        else
        {
            for(k=n; k>0; k--)
            {
                for(i=1; i<=n-k; i++)
                    printf(" ");
                for(i=1; i<=2*k-1; i++)
                {
                    printf("+");
                }

                printf("\n");
            }printf("\n");

        }
    }
    return 0;
}

/**************************************************************
	Problem: 1096
	User: 201901060819
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

