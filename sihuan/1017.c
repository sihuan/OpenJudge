#include <stdio.h>
#include <string.h>
int main() {
  char m[28], n[28];
  gets(m);
  gets(n);
  if (strlen(m) >= strlen(n)) {
    printf("%s\n%s", m, n);
  } else {
    printf("%s\n%s", n, m);
  }
  return 0;
}
/**************************************************************
	Problem: 1017
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

