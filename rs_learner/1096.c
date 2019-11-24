#include<stdio.h>
int main()
{
    int a,i,j,n;
    while(1)
  {
     scanf("%d",&n);
    if(n==0)
        break;
    else if(n%2!=0)
    {
        for(j=n;j>=1;j--)
        {
            for(i=1;i<=n-j;i++)
        {
            printf(" ");
        }
        for(i=2*j-1;i>=1;i--)
        {
            printf("+");
        }
        printf("\n");
        }
        printf("\n");
    }
    else if(n%2==0)
    {
         for(j=1;j<=n;j++)
    {
        for(i=n-j;i>=1;i--)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("+");
        }
        printf("\n");
    }
    printf("\n");
    }

  }

    return 0;
}
/**************************************************************
	Problem: 1096
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

