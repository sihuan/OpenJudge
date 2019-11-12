#include <stdio.h>
#include <math.h>
#define MAX_STR_LEN 109

int str_rev(char *str,char *s)
{
    int i=0,k=0;
    for(i=0;;++i)
    {
        if(s[i]=='\0') break;
        ++k;
    }
    for(i=0;i<k;++i)
    {
        str[i]=s[k-i-1];
    }
    str[k]='\0';
    return str;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
/**************************************************************
	Problem: 1235
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

