#include <stdio.h>
int main() {
  int n, a, b, c;
  scanf("%d", &n);
  c = n;
  a = n / 100;
  n = n % 100;
  b = n / 10;
  n = n % 10;
  if (a * a * a + b * b * b + n * n * n == c) {
    printf("YES");
  } else {
    printf("NO");
  }
}
/**************************************************************
	Problem: 1012
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

