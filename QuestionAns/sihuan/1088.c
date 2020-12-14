#include <stdio.h>
#include <stdlib.h>
int main() {
  int a, g, s;
  scanf("%d", &a);
  g = a % 10;
  s = ((a - g) % 100) / 10;
  if (a < 10 && a > -10) {
    printf("%d", abs(g));
  } else {
    printf("%d%d", abs(s), abs(g));
  }
  return 0;
}
/**************************************************************
	Problem: 1088
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

