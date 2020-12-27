#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned long long int n;
   while(scanf("%llu",&n)!=EOF)
   {
   	if(n%2==0)
   	printf("%llu\n",n/2*(1+n));
   	else
   	printf("%llu\n",(n+1)/2*n);
   }
}


/**************************************************************
	Problem: 2420
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

