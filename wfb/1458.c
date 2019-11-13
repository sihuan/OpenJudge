#include <stdio.h>
#include <stdlib.h>

int ans[10005];
int main()
{
    int n,i;
    int x;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%d",ans+i);
    }
    int a;
    while(scanf("%d",&a) != EOF)
    {
        if(a>n) printf("OUT OF RANGE\n");
        else printf("%d\n",ans[a-1]);
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:784 kb
****************************************************************/

