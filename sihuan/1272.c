#include <stdio.h>
int digits(int n) {
  int i, j;
  for (i = 0, j = 1; n / j != 0; i++, j *= 10) {
  }
  return i;
}
//以上为 submit

int main() {
  int num;
  scanf("%d", &num);
  printf("%d\n", digits(num));
}
/*
Accepted
*/