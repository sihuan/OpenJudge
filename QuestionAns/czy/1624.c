#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 10009
int f(int n)
{
    if(n==1) return 0;
    if(n==0) return 0;
    if(n==2) return 1;
    if(n==3) return 2;
    long long a=1;
    long long b=2;
    long long sum=0;
    long long i,j,k;
    for(i=3;i<n;++i)
    {
        sum=a+b;
        long long j=b;
        b=a+b;
        a=j;
    }
    return sum;
}
int main()
{
   int n=0;
   scanf("%d",&n);
   int i,m;
   for(i=0;i<n;++i)
   {
       scanf("%d",&m);
       printf("%d\n",f(m));
   }
}

/**************************************************************
	Problem: 1624
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

