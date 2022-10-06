#include<stdio.h>
int main()
{
    int N,a,b,i,sum;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&a,&b);
        sum=(a+b)*(b-a+1)/2;
        printf("case %d:sum=%d.\n",i,sum);
    }
}


/**************************************************************
	Problem: 1145
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

