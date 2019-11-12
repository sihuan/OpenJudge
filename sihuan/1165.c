#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + i; j++) {
      if (j < n - i - 1) {
        printf(" ");
      } else {
        printf("%d", (i+1)%10);
      }
    }
    if (i != n - 1) {
      printf("\n");
    }
  }
}
/**************************************************************
	Problem: 1165
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

