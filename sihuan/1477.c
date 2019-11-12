#include <stdio.h>
#include <stdlib.h>
#define OVERFLOW -1

long long fibonacci(int n) {
  long long preVal = 1;
  long long prePreVal = 1;
  if (n <= 1)
    return 1;
  else if (n > 91)
    return -1;
  long long loop = 1;
  long long returnVal = 0;
  while (loop < n) {
    returnVal = preVal + prePreVal;
    prePreVal = preVal;
    preVal = returnVal;
    loop++;
  }
  return returnVal;
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
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

