#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Octal Decimal Hexadecimal\n");
  printf("%-5o %-7d %x\n", a, a, a);
  printf("%-5o %-7d %x\n", b, b, b);
  return 0;
}
/**************************************************************
	Problem: 1158
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

