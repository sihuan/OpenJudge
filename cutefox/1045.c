#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,first,i,sum=0;
    scanf("%d",&first);
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n",sum);
        printf("\n");
        sum=0;
    }
    return 0;
}

/**************************************************************
	Problem: 1045
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

