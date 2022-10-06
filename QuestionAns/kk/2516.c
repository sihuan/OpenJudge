#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 101
int str_swap(char s[], char t[])
{
    char temp[101];
    strcpy(temp,s);
    strcpy(s,t);
    strcpy(t,temp);
}

int main()
{
    char s[MAX_LEN], t[MAX_LEN];
    gets(s);
    gets(t);
    str_swap(s, t);
    puts(s);
    puts(t);
}

/**************************************************************
	Problem: 2516
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

