#include <stdio.h>

int lj(int min, int max) {
  int sum = 0;
  for (int i = min; i <= max; i++) {
    sum += i;
  }
  return sum;
}
int main() {
  int n, min[1000], max[1000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &min[i], &max[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("case %d:sum=%d.\n",i+1,lj(min[i],max[i]));
  }
  return 0;
}
/**************************************************************
	Problem: 1145
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

