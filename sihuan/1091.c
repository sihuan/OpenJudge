#include <stdio.h>
int main() {
  int q, w, e;
  scanf("start = %d, step = %d, end = %d", &q, &w, &e);
  printf("%d", q);
  for (int i = 0;; i++) {
    q = q + w;
    if ((w > 0 && q > e) || (w < 0 && q < e)) {
      break;
    }
    printf(" %d", q);
  }
}
/**************************************************************
	Problem: 1091
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

