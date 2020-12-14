#include <stdio.h>
int main() {
  int a, b;
  char c;
  do {
    scanf("%d%c%d", &a, &c, &b);
    if (c == ' ') {
      break;
    }
    switch (c) {
      case '+':
        printf("%d\n", a + b);
        break;
      case '-':
        printf("%d\n", a - b);
        break;
      case '*':
        printf("%d\n", a * b);
        break;
      case '/':
        printf("%d\n", a / b);
        break;
      case '%':
        printf("%d\n", a % b);
        break;
      default:
        printf("invalid op\n");
        break;
    }
  } while (1);
}
/**************************************************************
	Problem: 1026
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

