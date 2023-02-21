#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 101

char *revs(char *s){
  int len = strlen(s);
  char s2[MAX_STR_LEN];
  for(int i = len - 1;i >= 0;--i){
    s2[i] = s[len - i - 1];
  }
  s2[len] = '\0';
  strcpy(s,s2);
  return s;
}

int main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
/**************************************************************
	Problem: 1234
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

