#include <stdio.h>

int cc(int n) {
  int a, b, c;
  a = n % 10;
  b = ((n - a) % 100) / 10;
  c = (n - a - 10 * b) / 100;
  if (a != b && a != c && b != c) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int tmp, n = 0, m[1000], sum[1000] = {0};
  while (scanf("%d", &tmp) != EOF) {
    m[n] = tmp;
    n++;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 100; j < 1000; j++) {
      if (j % m[i] == 0 && cc(j) == 1) {
        sum[i] += j;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    printf("case %d:%d\n", i + 1, sum[i]);
  }
  return 0;
}
/**************************************************************
	Problem: 1207
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

