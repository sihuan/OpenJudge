#include <stdio.h>
void sjx(int a, int b, int c) {
  if (a + b > c && a + c > b && b + c > a) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}

int main() {
  int n, a, b, c;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &a, &b, &c);
    sjx(a, b, c);
  }
  return 0;
}

/**************************************************************
	Problem: 1079
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

