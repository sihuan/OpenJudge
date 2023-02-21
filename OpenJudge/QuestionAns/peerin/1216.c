#include <stdio.h>
#define MAX_STR_LEN 101

char * str_cpy(char * t,char * s,int n){

  int idxT = 0, idxS = 0;
  while(idxS < n && s[idxS] != '\0')
    t[idxT++] = s[idxS++];
  t[idxT] = '\0';
  return t;
}


int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        p = str_cpy(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1216
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

