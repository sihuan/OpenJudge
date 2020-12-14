#include <stdio.h>

void zsj(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - (i + 1); j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * (i + 1) - 1; j++) {
      printf("+");
    }
    printf("\n");
  }
}

void fsj(int n) {
  //   n *= -1;
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < n - i; j++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++) {
      printf("+");
    }
    printf("\n");
  }
}

int main() {
  int t, n = 0, nn[1000];
  while (1) {
    scanf("%d", &t);
    if (t == 0) {
      break;
    } else {
      nn[n] = t;
      n++;
    }
  }
  for (int i = 0; i < n; i++) {
    if (nn[i] % 2 == 0) {
      zsj(nn[i]);
    } else {
      fsj(nn[i]);
    }
    printf("\n");
  }

  return 0;
}
/**************************************************************
	Problem: 1096
	User: 201801011012
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

