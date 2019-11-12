#include <math.h>
#include <stdio.h>
int main() {
  double x, n;
  scanf("%lf", &x);
  n = (log10(x)) / (log10(2));
  printf("%d", (int)n);
  return 0;
}
/**************************************************************
	Problem: 1016
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

