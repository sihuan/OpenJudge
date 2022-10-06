#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int input(int b[],int m,int *max)
{
    int n;
    scanf("%d",&n);
    *max=n;
    b[0]=0;
    int j=1;
    for(int i=1;i<m;i++)
    {
        scanf("%d",&n);
        if(*max<n)
        {
            *max=n;
            memset(b,0,sizeof(b));
            b[0]=i;
            j=1;
        }
        else if(*max==n)
        {
            b[j]=i;
            j++;
        }
    }
    return j;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int max,m,num;
        scanf("%d",&m);
        int b[1001];
        num=input(b,m,&max);
        printf("Max = %d,Positions =",max);
        for(int j=0;j<num;j++)
            printf(" %d",b[j]);
        printf("\n");
    }
}

/**************************************************************
	Problem: 1934
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

