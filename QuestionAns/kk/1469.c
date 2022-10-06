#include<stdio.h>
int main()
{
    int kis[200001]={0};
    int N,i,j,k;
    int max=0,maxis=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&k);
        kis[k]++;
    }
    for(j=0;j<N;j++)
    {
        if(kis[j]>max)
        {
            max=kis[j];
            maxis=j;
        }

    }
    printf("%d",max);
}

/**************************************************************
	Problem: 1469
	User: 202001060117
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:1456 kb
****************************************************************/

