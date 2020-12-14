#include <math.h>
#include <stdio.h>

int is_primer(int num) {
  if (num == 1) {
    return 0;
  }
  int k;
  k = (int)sqrt((double)num);
  for (int i = 2; i <= k; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

