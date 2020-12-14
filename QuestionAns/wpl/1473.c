#include <stdio.h>
#include <stdlib.h>

int digits(int n)
{
  int x=1;
  while(n/10!=0)
  {
      n=n/10;
      x++;
  }
  return x;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

