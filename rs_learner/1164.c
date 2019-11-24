#include<stdio.h>
int main()
{
    /*int x,y,i,j;
    scanf("%d%d",&x,&y);
    printf("=====\n");
    for(i=x;i<=y;i++)
    {
         for(j=2;j<i-1;j++)
         {
             if(i%j==0)
                break;
             if(j==i)
                printf("%d\n",i);
         }

    }

    printf("=====\n");*/
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(x=1;x<=2*i-1;x++)
            printf("+");
        printf("\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1164
	User: 201801020908
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

