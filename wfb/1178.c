#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ans[105];
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        if(n>=0 && n<=100)
        {
            ++ans[n];
        }
    }
    int i;
    int maxN = 0;
    for(i=0; i<=100; ++i)
    {
        if(ans[i]>maxN)
            maxN = ans[i];
    }
    for(i=0; i<=100; ++i)
    {
        if(ans[i] == maxN)
            printf("%d\n",i);
    }
    return 0;
}

/**************************************************************
	Problem: 1178
	User: 201601011420
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

