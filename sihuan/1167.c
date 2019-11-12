#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  if (n < 0) {
    printf("%d", n);
    for (int i = n + 1; i < 0; i++) {
      printf(" %d", i);
    }
  } else if (n > 0) {
    printf("1");
    for (int i = 2; i < n + 1; i++) {
      printf(" %d", i);
    }
  }else
  {
    printf("0");
  }
  
}
/**************************************************************
	Problem: 1167
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

