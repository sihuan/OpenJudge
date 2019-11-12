#include <stdio.h>

int main() {
  int t, n, sum;
  while (scanf("%d", &n) != EOF) {
    sum = 0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &t);
      sum += t;
    }
    printf("%d\n", sum);
  }
}
/**************************************************************
	Problem: 1042
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

