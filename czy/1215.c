#include <stdio.h>
#include <math.h>
#define MAX_STR_LEN 109

int str_cpy(char *str,char *s)
{
    int i=0,n=0;
    for(i=0;;++i)
    {
        if(s[i]=='\0') break;
        ++n;
    }
    for(i=0;i<n;++i)
    {
        str[i]=s[i];
    }
    str[n]='\0';
    return str;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL)
    {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}
/**************************************************************
	Problem: 1215
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

