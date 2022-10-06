#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

long long int mypow(long long int n)
{
    long long int x=1;
    while(n--)
        x*=2;
    return x;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    for(long long int i=0;mypow(i)<=n;i++)
    {
        if((n&mypow(i))==mypow(i))
            printf("%lld\n",i+1);
    }
}

/**************************************************************
	Problem: 2545
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

