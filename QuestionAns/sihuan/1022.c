#include <stdio.h>
int main() {
  int a, b;
  for (;;) {
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0) {
      break;
    } else {
      printf("%d\n", a + b);
    }
  }
  return 0;
}
/**************************************************************
	Problem: 1022
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

