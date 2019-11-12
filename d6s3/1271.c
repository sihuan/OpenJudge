#include <stdio.h>

int digit_sum(int num) {
  int g[12] = {0};
  int n, sum = 0;
  for (n = 0; num != 0; n++) {
    g[n] = num % 10;
    num /= 10;
  }
  for (int i = 0; i < n; i++) {
    sum += g[i];
  }
  if (sum / 10 == 0) {
    return sum;
  } else {
    digit_sum(sum);
  }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

