#include<stdio.h>
int main()
{
    int i,j,n,max,min,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&min,&max);
        for(j=min;j<=max;j++)
        {
           sum=sum+j;
        }
        printf("case %d:sum=%d.\n",i,sum);
        sum=0;
    }

    return 0;
}

/**************************************************************
	Problem: 1145
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

