#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        if((m<=n)&&(m>0))
            printf("%d\n",num[m-1]);
        else
            printf("OUT OF RANGE\n");
    }
}

/**************************************************************
	Problem: 1458
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

