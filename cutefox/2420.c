#include <stdio.h>
#include <stdlib.h>
int main()
{
  unsigned long long  m,n;
  while(scanf("%llu",&n)!=EOF)
  {
      m=1.0*n/2*(n+1);
              printf("%llu\n",m);
  }
}
/**************************************************************
	Problem: 2420
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

