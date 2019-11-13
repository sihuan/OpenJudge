#include <stdio.h>
#define MAX_STR_LEN 105
char *str_cpy(char *str,char *s)
{
	char * ss = str;
	while(*s != '\0')
	{
		*str++ = *s++;
	}
	*str = '\0';
	return ss;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL)
    {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}
/**************************************************************
	Problem: 1215
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

