#include <stdio.h>
#include <stdlib.h>
#define	MAX_STR_LEN 1000
char* str_alcpy(char *t, char *s)
{
	int i=0;
	int j=0;
    while(s[i]!='\0')
	{
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
		{
            t[j]=s[i];
            j++;
        }
        i++;
    }
    t[j]='\0';
    return t;
}


int main()
{
    char str[MAX_STR_LEN], s[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_alcpy(s, str);
        puts(p);
        puts(s);
    }
}

/**************************************************************
	Problem: 2418
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

