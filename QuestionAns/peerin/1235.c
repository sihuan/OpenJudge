#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 101

char *str_rev(char *t,char *s){
  int len = strlen(s);
  for(int i = len - 1;i >= 0;--i){
    t[i] = s[len - i - 1];
  }
  t[len] = '\0';
  return t;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
/**************************************************************
	Problem: 1235
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

