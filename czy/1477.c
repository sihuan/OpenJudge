#include "stdio.h"
#include "string.h"
#define OVERFLOW -1
//9223372036854775807
#define ll (0x7FFFFFFF)
long long fibonacci(int n)
{
    if(n>91) return OVERFLOW;
    if(n==1) return 1;
    if(n==0) return 1;
    if(n==2) return 2;
    long long a=1;
    long long b=1;
    long long sum=0;
    long long i,j,k;
    for(i=1;i<n;++i)
    {
        sum=a+b;
        long long j=b;
        b=a+b;
        a=j;
    }
   // printf("%lld\n\n",sum);
    //if(sum<0) return OVERFLOW;
    return sum;

}


int main()
{
    int n;
    long long fib;
    while(scanf("%d", &n) != EOF)
    {
        fib = fibonacci(n);
        if(fib == OVERFLOW)
            puts("overflow");
        else
            printf("%lld\n", fib);
    }
    return 0;
}
/**************************************************************
	Problem: 1477
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

