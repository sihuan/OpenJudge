#include <stdio.h>
#define MAX_STR_LEN 1001
char* str_upr(char *s)
{
	char *p;
	 for(p=s;*p!='\0';p++)
	{
      if(*p>='a'&&*p<='z')
        *p=*p-32;
	}
	return s;
}

int main()
{
    char str[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_upr(str);
        puts(p);
        puts(str);
    }
}

/**************************************************************
	Problem: 2297
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

