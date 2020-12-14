#include <stdio.h>
#include <stdlib.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX_STR_LEN 105
char * str_cat(char * str, char * s)
{
    char *ans = (char *)malloc(sizeof(char)*MAX_STR_LEN*2);
    char *ss = ans;
    for( ;*str; ++str)
        *ss++ = *str;
    for( ;*s; ++s)
        *ss++ = *s;
    *ss = 0;
    return ans;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

