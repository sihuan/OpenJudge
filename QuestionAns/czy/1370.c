#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 101

char * str_cat(char * str, char * s)
{   int i,j;
  char * p =(char *)malloc(260);
   for(i=0;str[i]!=0;i++)
    p[i]=str[i];
   for(j=0;s[j]!=0;j++)
   p[i+j]=s[j];
   p[i+j]=0;
  return p;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

