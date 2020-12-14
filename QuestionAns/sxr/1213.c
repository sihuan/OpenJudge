#include <stdio.h>
#define MAX_STR_LEN 210

char * str_cat(char * t, char * s)
{
    int i,j=0;
    for(i=0;t[i]!='\0';i++)
        j++;
    for(i=0;s[i]!='\0';i++)
    {
        t[j+i]=s[i];
    }
    t[i+j]='\0';
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

