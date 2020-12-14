#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 105

char * trim(char *s)
{
	int length = strlen(s);
	int i;
	for(i=length-1; i>=0; --i)
	{
		if(!isspace(s[i])) break;
	}
	s[i+1] = '\0';
	char *ss;
	for(ss=s; *ss!='\0'; ++ss)
    {
        if(!isspace(*ss)) break;
    }
	return ss;
}

int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
/**************************************************************
	Problem: 1229
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

