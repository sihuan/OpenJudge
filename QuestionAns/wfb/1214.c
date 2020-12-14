#include <stdio.h>
#define MAX_STR_LEN 105
char * str_cat(char * t, char * s, int n)
{
    char *ss = t;
    while(*ss != '\0')
        ++ss;
    int i;
    for(i=0; i<n && *s!='\0'; ++i)
    {
        *ss++ = *s++;
    }
    *ss = '\0';
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

