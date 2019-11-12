#include <stdio.h>
int main() {
  int a[3], r;
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  r = 0;
  for (int i = 0; i < 3; i++) {
    if (a[i] % 2 == 0) {
      r += a[i];
    } else {
      r = r + a[i] + 1;
    }
  }
  printf("%d\n", r);
  return 0;
}
/**************************************************************
	Problem: 1402
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

