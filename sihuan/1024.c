#include <stdio.h>
int main() {
  int n, t, max, min;
  scanf("%d", &n);
  if (n > 0) {
    scanf("%d", &t);
    max = t;
    min = t;
    for (int i = 1; i < n; i++) {
      scanf("%d", &t);
      if (t > max) {
        max = t;
      }
      if (t < min) {
        min = t;
      }
    }
  }
  printf("The maximum number is %d.\nThe minimum number is %d.", max, min);
  return 0;
}
/**************************************************************
	Problem: 1024
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

