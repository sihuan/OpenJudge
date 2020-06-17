#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_STR_LEN 105
char * str_rev(char * t, char * s)
{
    int i, j;
    for (i=0, j=strlen(s)-1; i<=j; i++, j--) {
        t[i]=s[j];
        t[j]=s[i];
    }
    t[strlen(s)]='\0';
    return t;
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

