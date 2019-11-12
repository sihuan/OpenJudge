#include <stdio.h>
int main() {
  int x, s, a, b, c, d;
  scanf("%d", &x);
  s = 100 - x;
  a = s / 20;
  b = (s - 20 * a) / 10;
  c = (s - 20 * a - 10 * b) / 5;
  d = s - 20 * a - 10 * b - c * 5;
  printf("$20 bills: %d\n", a);
  printf("$10 bills: %d\n", b);
  printf(" $5 bills: %d\n", c);
  printf(" $1 bills: %d\n", d);
  return 0;
}
/**************************************************************
	Problem: 1013
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

