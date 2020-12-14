#include <stdio.h>
#define MAX_STR_LEN 109

char * str_cat(char * t, char * s)
{
    int i=0;
    while(t[i++]!=0);
    //printf("%d",i);
    int k;
    for(k=0;s[k]!=0;++k)
    {
        t[i+k-1]=s[k];
    }
    t[i+k-1]=s[k];
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

