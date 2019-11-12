#include <stdio.h>

unsigned long long int f(int n)
{
    if(n<=0) return 0;
    if(n==1) return 1;
    return 2*f(n-1)+1;
}

int main()
{
    unsigned long long int  n;
    unsigned long long int i,j,k;
    scanf("%llu",&n);
    printf("%llu",f(n));
    return 0;
}

/**************************************************************
	Problem: 1769
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

