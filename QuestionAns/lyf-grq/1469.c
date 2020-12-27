#include<stdio.h>
int main()
{
    int i,n,max=0,x;
    int b[200001]={0};
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&x);
        b[x]++;
        if(b[x]>max)
        max=b[x];
    }
    printf("%d\n",max);
}

/**************************************************************
	Problem: 1469
	User: 202001061101
	Language: C
	Result: Accepted
	Time:80 ms
	Memory:1456 kb
****************************************************************/

