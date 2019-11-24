#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            if(i!=a)
            {
               for(j=1;j<=i-1;j++)
            {
                printf("0 ");
            }
                printf("1 ");
            for(j=1;j<=a-i-1;j++)
            {
                printf("0 ");
            }
            printf("0");
            }
            if(i==a)
            {
                for(j=1;j<=a-1;j++)
                {
                    printf("0 ");
                }
                printf("1");
            }

          printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1506
	User: 201801020908
	Language: C
	Result: Accepted
	Time:108 ms
	Memory:748 kb
****************************************************************/

