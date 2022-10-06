#include<stdio.h>
int main()
{
    int n;
    int N,a,sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=0;
        for(int i=1;i<=N;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
}

/**************************************************************
	Problem: 1043
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

