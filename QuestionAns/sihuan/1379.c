#include <math.h>
#include <stdio.h>

int ss(int n) {
  if (n == 1 || n == 0) {
    return 0;
  } else {
    int k = (int)sqrt((double)n);
    for (int i = 2; i <= k; i++) {
      if (n % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  if (ss(n)) {
    printf("yes");
  } else {
    printf("no");
  }
}
/**************************************************************
	Problem: 1379
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

