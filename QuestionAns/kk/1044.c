#include<stdio.h>
int main()
{

    int N,a,sum;

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            break;
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
	Problem: 1044
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

