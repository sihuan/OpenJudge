#include <stdio.h>
#define MAX_STR_LEN 105
char * str_cat(char * t, char * s)
{
	char *ss = t;
	while(*ss != '\0')
		++ss;
	for( ; *s != '\0'; ++s,++ss)
	{
		*ss = *s;
	}
	*ss = '\0';
	return t;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1213
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

