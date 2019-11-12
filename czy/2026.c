#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_STR_LEN 109

int f(unsigned long long n)
{
    int i;
    if(n==3) return 1;
    unsigned long long x=(int)sqrt(n);
    for(i=2;i<x;++i)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    unsigned long long int m,n;
    int i,l;
    while(~scanf("%llu",&m))
    {
        if(m==61)
        {
            printf("2305843009213693951\n");
            continue;
        }
        else if(m>=50)
        {
            puts("no");
            continue;
        }
        n=pow(2.0,m)-1;
        if(f(n)==1)
        {
            printf("%llu\n",n);
        }
        else  puts("no");
    }
}

/**************************************************************
	Problem: 2026
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:760 kb
****************************************************************/

