#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,sum=0;
    while(scanf("%d",&n)&&n!=0)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

/**************************************************************
	Problem: 1044
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

