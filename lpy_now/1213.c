#include<stdio.h>
#define MAX_STR_LEN 202
#define MAX_STR_LEN 102
char * str_cat(char * t, char * s)
{
    int i,j;
    for(i = 0; t[i] != '\0'; i++)
    {
       ;
    }
    for(j = 0; s[j] != '\0'; j++)
    {
       t[i+j] = s[j];
    }
    t[i+j] = '\0';/*将最后一项赋值\0*/
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

