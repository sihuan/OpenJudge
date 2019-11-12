#include <stdio.h>
int main() {
  int n, a, sum;
  for (;;) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    } else {
      sum = 0;
      for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
      }
      printf("%d\n",sum);
    }
  }
}
/**************************************************************
	Problem: 1044
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

