#include <stdio.h>

long long unsigned getN(long long unsigned n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return 2*getN(n-1) + 1;
}
int main()
{
    long long unsigned n;
    scanf("%llu",&n);
    printf("%llu",getN(n));

    return 0;
}

/**************************************************************
	Problem: 1769
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

