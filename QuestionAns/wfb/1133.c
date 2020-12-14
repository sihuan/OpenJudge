#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 15
int strToInt(char str[])
{
    if(*str == '\0') return -1;
    int num=0;
    char *s;
    for(s=str; *s!='\0'; ++s)
    {
        if(!isdigit(*s)) break;
        num = num*10 + *s-'0';
    }
    return num;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}

/**************************************************************
	Problem: 1133
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

