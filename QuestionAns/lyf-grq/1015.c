#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   unsigned long long int n;
   unsigned long long int sum;
   scanf("%llu",&n);
   if(n%2==0)
    sum=n/2*(1+n);
   else
    sum=(n+1)/2*n;
   printf("%llu",sum);
}

/**************************************************************
	Problem: 1015
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

