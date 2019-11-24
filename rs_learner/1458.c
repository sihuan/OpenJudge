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
    //getchar();
    while(scanf("%d",&a)!=EOF)
    {
        if(a>n)
            printf("OUT OF RANGE\n");
        else
            printf("%d\n",s[a-1]);
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

