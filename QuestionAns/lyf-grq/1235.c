#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 101
char * str_rev(char * t, char * s)
{
    char a[MAX_STR_LEN];
    int i,j;
    for(i=0;s[i]!='\0';i++)
        a[i]=s[i];
    i--;
    for(j=0;i>=0;i--,j++)
    {
        t[j]=a[i];
    }
        t[j]='\0';
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

