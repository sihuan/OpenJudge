#include <stdio.h>
#include <string.h>

void str_trans(char s[]) {
  int l = strlen(s);
  for (int i = 0; i < l; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] - 32;
    }
  }
}
//以上 submit

int main() {
  char s[101];
  gets(s);
  str_trans(s);
  puts(s);
  return 0;
}
/*
AC
*/