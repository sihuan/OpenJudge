#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define SWAP(a,b,t) t=a; a=b; b=t;
#define llu long long unsigned
int isPrime(int n)
{
    if(n == 2 || n==3 || n==5 || n==7 || n==13 || n==17
       || n==19 || n==31 || n==61)
        return 1;
    else return 0;
}
void Solve(int n)
{
    llu x = pow(2,n)-1;
    if(isPrime(n))printf("%llu\n",x);
    else printf("no\n");
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        Solve(n);
    }
    return 0;
}

/**************************************************************
	Problem: 2026
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:760 kb
****************************************************************/

