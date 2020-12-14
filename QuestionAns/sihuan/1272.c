#include<stdio.h>
int digits(int n){
 int i, j;
  for (i = 0, j = 1; n / j != 0; i++, j *= 10) {
  }
  return i;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1272
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

