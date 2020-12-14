#include <math.h>
#include <stdio.h>

int ss(int n) {
  if (n == 0 || n == 1) {
    return 0;
  }
  int k;
  k = (int)sqrt((double)n);
  for (int i = 2; i <= k; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  printf("=====\n");
  for (int i = n; i >= m; i--) {
    if (ss(i)) {
      printf("%d\n", i);
    }
  }
  printf("=====\n");
}
/**************************************************************
	Problem: 1027
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

