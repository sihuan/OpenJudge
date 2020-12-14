#include <stdio.h>
#include <stdlib.h>
 int main() {
    char ch;
    int a, b;
    scanf("%d %c %d =", &a, &ch, &b);
     ch== '+'? printf("%d %c %d = %d", a, ch, b, a + b) : printf("%d %c %d = %d", a, ch, b, a - b);
      return 0;
      }

/**************************************************************
	Problem: 1905
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

