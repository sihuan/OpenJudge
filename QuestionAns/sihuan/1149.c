#include <stdio.h>
#include <string.h>

int main() {
  int n;
  char s[1002];
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++) {
    gets(s);
    printf("case %d:length=%d.\n", i + 1, strlen(s));
  }
  return 0;
}
/**************************************************************
	Problem: 1149
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

