#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 101

char * str_cat(char *t,char *s){
  int idx = 0,idx2 = 0;
  char *n = malloc(sizeof(char) * MAX_STR_LEN * 2);
  while(t[idx] != '\0'){
    n[idx] = t[idx];
    idx++;
  }
  
  while(s[idx2] != '\0'){
    n[idx + idx2] = s[idx2];
    idx2++;
  }
  n[idx + idx2] = '\0';
  return n;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(str);
        puts(s);
        puts(p);
        free(p);
    }
    return 0;
}
/**************************************************************
	Problem: 1370
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

