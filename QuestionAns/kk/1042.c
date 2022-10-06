#include<stdio.h>
int main()
{
    int N,a,sum;
    while(scanf("%d",&N)!=EOF)
    {
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
	Problem: 1042
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

