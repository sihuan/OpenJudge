#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        if(m>0&&m<=n)
            printf("%d\n",num[m-1]);
        else if(m<0&&m>=-1*n)
            printf("%d\n",num[n+m]);
        else
            printf("OUT OF RANGE\n");
    }
}

/**************************************************************
	Problem: 1461
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

