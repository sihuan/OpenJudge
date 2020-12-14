#include <stdio.h>

void jz(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == 0) {
        if (i == 0) {
          printf("1");
        } else {
          printf("0");
        }
      } else {
        if (j == i) {
          printf(" 1");
        } else {
          printf(" 0");
        }
      }
    }
    printf("\n");
  }
}

int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    jz(n);
    printf("\n");
  }
}

/**************************************************************
	Problem: 1506
	User: 201801011012
	Language: C
	Result: Accepted
	Time:84 ms
	Memory:748 kb
****************************************************************/

