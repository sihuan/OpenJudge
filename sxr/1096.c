#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n-i;j++)
                    printf(" ");
                for(j=1;j<=2*i-1;j++)
                    printf("+");
                printf("\n");
            }
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i-1;j++)
                    printf(" ");
                for(j=1;j<=2*(n-i)+1;j++)
                    printf("+");
                printf("\n");
            }
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}


/**************************************************************
	Problem: 1096
	User: 202001060915
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

