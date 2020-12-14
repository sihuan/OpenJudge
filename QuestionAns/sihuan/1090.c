#include <stdio.h>
int main() {
  int q, w, e;
  scanf("start = %d, step = %d, times = %d", &q, &w, &e);
  printf("%d", q);
  for (int i = 0; i < e - 1; i++) {
    q = q + w;
    printf(" %d", q);
  }
}
/**************************************************************
	Problem: 1090
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

