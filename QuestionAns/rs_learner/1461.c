#include<stdio.h>
int main()
{
    int s[10001],i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    while(scanf("%d",&a)!=EOF)
    {
        if(a>0&&a<=n)
            printf("%d\n",s[a-1]);
        else if(a<0&&a>-n)
            printf("%d\n",s[n+a]);
        else
            printf("OUT OF RANGE\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1461
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

