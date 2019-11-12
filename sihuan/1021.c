#include <stdio.h>

int main() {
  int n, a, b, sum[1000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    sum[i] = a + b;
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n", sum[i]);
  }
  return 0;
}
/**************************************************************
	Problem: 1021
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

