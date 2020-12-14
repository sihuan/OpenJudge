#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_STR_LEN 105
char * trim(char *s)
{
    int i, n;
    i=strlen(s)-1;
    while (isspace(s[i])) {
        s[i]='\0';
        i--;
    }
    for (n=0; isspace(s[n]); n++) ;
    for (i=0; i+n<=strlen(s); i++) {
        s[i]=s[i+n];
    }

    return s;
}

int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
/**************************************************************
	Problem: 1229
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

