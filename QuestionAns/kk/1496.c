#include<stdio.h>
int main()
{
    int N;
    int K,i=1,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&K);
        printf("case %d : ",i);
        for(j=1;j<=K;j++)
            printf("|");
        printf("\n");
    }
}
/**************************************************************
	Problem: 1496
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

