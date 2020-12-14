#include <stdio.h>
#include <string.h>
int main() {
  int m, d, l, u, o;
  char s[102];
  char ch;
  scanf("%d", &m);
  getchar();
  printf("Case Digits Lowers Uppers Others\n");
  for (int i = 0; i < m; i++) {
    gets(s);
    d = 0;
    l = 0;
    u = 0;
    o = 0;
    for (int j = 0;; j++) {
      ch = s[j];
      if (ch == '\0') {
        break;
      }
      if ('0' <= ch && ch <= '9') {
        d++;
      } else if ('a' <= ch && ch <= 'z') {
        l++;
      } else if ('A' <= ch && ch <= 'Z') {
        u++;
      } else {
        o++;
      }
    }
    printf("%-5d%-7d%-7d%-7d%d\n", i + 1, d, l, u, o);
  }
}
/**************************************************************
	Problem: 1225
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

