#include <ctype.h>
#include <stdio.h>
#define MAX_STR_LEN 1001

char* str_upr(char* s)
{
    char* ret = s;
    while (*(s++) != '\0')
        *(s - 1) = toupper(*(s - 1));
    return ret;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

