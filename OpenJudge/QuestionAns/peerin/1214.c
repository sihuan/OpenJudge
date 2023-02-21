#include <stdio.h>
#define MAX_STR_LEN 101


int str_len(char *s){
  int len = 0;
  while(s[len++] != '\0') ;
  return len;
}

char * str_cat(char *t,char *s,int n){
  int i = 0;
  int tL = str_len(t);
  while(s[i] != '\0' && n-- > 0){
    t[tL + i - 1] = s[i];
    i++;
  }
  t[tL + i - 1] = '\0';
  return t;
}



int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        gets(str);
        p = str_cat(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1214
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

