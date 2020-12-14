#include <stdio.h>
#include <ctype.h>
#define MAX_STR_LEN 101

char* str_alcpy(char *t, char *s)
{
    int i=0, j=0;
    while(s[i]!='\0'){
        if(isalpha(s[i])){
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

