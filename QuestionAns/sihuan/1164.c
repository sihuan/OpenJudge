#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * (i + 1) - 1; j++) {
      printf("+");
    }
    printf("\n");
  }
}
/**************************************************************
	Problem: 1164
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

