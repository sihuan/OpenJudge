#include <stdio.h>
int main() {
  int a, b, c, t;
  scanf("%d %d %d", &a, &b, &c);
  if (a <= b) {
    t = a;
    a = b;
    b = t;
  }
  if (b <= c) {
    t = b;
    b = c;
    c = t;
  }
  if (a <= b) {
    t = a;
    a = b;
    b = t;
  }
  printf("%d %d %d\n",c,b,a);
  return 0;
}

/**************************************************************
	Problem: 1018
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

