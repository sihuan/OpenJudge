#include <stdio.h>
int main() {
  int k, m, n, ts;
  int x[102][102];
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    scanf("%d %d", &m, &n);
    for (int j = 0; j < m; j++) {
      for (int q = 0; q < n; q++) {
        scanf("%d", &x[j][q]);
      }
    }
    printf("case %d:", i + 1);
    ts = 0;
    for (int j = 0; j < m; j++) {
      ts += x[j][0];
    }
    printf("%lg", ((double)ts) / m);
    for (int j = 1; j < n; j++) {
      ts = 0;
      for (int q = 0; q < m; q++) {
        ts += x[q][j];
      }
      printf(" %lg", ((double)ts) / m);
    }
    printf("\n");
  }
}
/**************************************************************
	Problem: 1593
	User: 201801011012
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

