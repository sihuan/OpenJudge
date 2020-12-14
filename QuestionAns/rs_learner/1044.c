#include<stdio.h>
int main()
{
    int n,i,sum=0,x;
    while(1)
    {
       scanf("%d",&n);
    if(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            sum=sum+x;
        }
        printf("%d",sum);
        sum=0;
        printf("\n");
    }
        else
            break;
    }

    return 0;
}

/**************************************************************
	Problem: 1044
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

