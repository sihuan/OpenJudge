#include <stdio.h>

int main() {
  int x,t, n, sum;
  scanf("%d",&x);
  for (int i = 0; i < x; i++)
  {
      sum = 0;
      scanf("%d",&n);
      for (int j = 0; j < n; j++)
      {
          scanf("%d",&t);
          sum += t;
      }
      printf("%d\n",sum);
  }
}
/**************************************************************
	Problem: 1043
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

