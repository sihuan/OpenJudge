#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 105
char * str_rev(char * t, char * s)
{
	int length = strlen(s);
	int i;
	for(i=0; i<length; ++i)
	{
		t[i] = s[length-i-1];
	}
	t[i] = '\0';
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

