#include <stdio.h>

#define SUM(n) (((n)*1.0+1)*(n)/2.0)
  

int main(int argc, char *argv[])
{
  long double n;
  while (scanf("%Lf", &n) != EOF) {
    printf("%.0Lf\n",SUM(n));
  }
  return 0;
}


/**************************************************************
	Problem: 2420
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

