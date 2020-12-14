#include <stdio.h>
int main() {
  int k, m, n, t, s;
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    printf("case %d:", i + 1);
    scanf("%d %d", &m, &n);
    for (int p = 0; p < m; p++) {
      s = 0;
      for (int q = 0; q < n; q++) {
        scanf("%d", &t);
        s += t;
      }
      (p == 0) ? printf("%d", s) : printf(" %d", s);
    }
    printf("\n");
  }
}
/**************************************************************
	Problem: 1152
	User: 201801011012
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

