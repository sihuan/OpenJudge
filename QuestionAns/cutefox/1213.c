#include<stdio.h>
#define MAX_STR_LEN 104
char * str_cat(char * t, char * s)
{
    char *p3;
    for(p3 = t; *p3!='\0'; p3++)
    {
    }
    char *p2;
    for(p2 = s; *p2!='\0'; p2++)
    {
        *p3=*p2;
        p3++;
    }
    *p3='\0';
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

