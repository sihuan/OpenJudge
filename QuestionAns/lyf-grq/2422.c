#include <stdio.h>
#include <stdlib.h>
int chu5(int i)
{
    int n=0;
    while (i%5==0) 
	{
        n++;
        i/=5;
    }
    return n;
}
int main()
{
	int i,n;
    unsigned long long num5;

    while (scanf("%d", &n)!=EOF) 
	{
        num5=0;
        for (i=1; i<=n; i++) 
		{
            if (i%5==0) 
			{
                num5+=chu5(i);
            }
        }
        printf("%llu\n", num5);
    }
    return 0;
}
/**************************************************************
	Problem: 2422
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

