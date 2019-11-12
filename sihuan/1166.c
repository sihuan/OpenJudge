#include <stdio.h>

void zsj(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - (i + 1); j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * (i + 1) - 1; j++) {
      printf("%d", (i + 1) % 10);
    }
    printf("\n");
  }
}

void fsj(int n) {
  n *= -1;
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < n - i; j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++) {
      printf("%d", i % 10);
    }
    printf("\n");
  }
}

int main() {
  int n, jzt[1000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &jzt[i]);
  }
  for (int i = 0; i < n; i++) {
    if (jzt[i] > 0) {
      zsj(jzt[i]);
    } else {
      fsj(jzt[i]);
    }
    printf("\n");
  }
  return 0;
}
/**************************************************************
	Problem: 1166
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

