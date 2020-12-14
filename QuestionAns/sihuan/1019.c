#include <stdio.h>
int main() {
  int k, m, n;
  int i, x;
  scanf("%d%d%d", &k, &m, &n);
  x = m * n;
  printf("%d", m);
  for (i = m + 1; i <= k; i++) {
    if ((i % m == 0 && i % n != 0) || (i % m != 0 && i % n == 0))
      printf(" %d", i);
  }
  return 0;
}
/**************************************************************
	Problem: 1019
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

