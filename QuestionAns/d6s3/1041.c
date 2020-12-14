#include <stdio.h>

int gcd(int a, int b) {
  int re, t;
  for (;;) {
    if (a == b) {
      return a;
    } else if (a == 0) {
      return b;
    } else if (b == 0) {
      return a;
    }

    else if (a < b) {
      t = a;
      a = b;
      b = t;
    }
    re = a % b;
    if (re == 0) {
      return b;
    }
    a = re;
  }
}

int lcm(int a, int b) {
  int x, m, n;
  x = gcd(a, b);
  if (x == 0) {
    return 0;
  }

  m = a / x;
  n = b / x;
  return x * m * n;
}

int main() {
  int a, b;
  while (scanf("%d %d", &a, &b) != EOF) printf("%d %d\n", gcd(a, b), lcm(a, b));
  return 0;
}
/**************************************************************
	Problem: 1041
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

