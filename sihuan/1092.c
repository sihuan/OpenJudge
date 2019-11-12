#include <stdio.h>
#include <string.h>

int main() {
  char s[103];
  scanf("%s", s);
  int k = strlen(s);
  for (int i = k-1; i >= 0; i--) {
    printf("%c", s[i]);
  }
  return 0;
}
/**************************************************************
	Problem: 1092
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

