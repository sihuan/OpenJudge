#include <math.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n > 0 && n % 2 == 0 && (int)sqrt((double)n) == sqrt((double)n)) {
    printf("yes");
  } else {
    printf("no");
  }
  return 0;
}
/**************************************************************
	Problem: 1403
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

