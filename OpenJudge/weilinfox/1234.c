#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


#define MAX_STR_LEN 105
char * revs(char * s)
{
    int i, j;
    char c;
    for (i=0, j=strlen(s)-1; i<j; i++, j--) {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }

    return;
}

int main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
/**************************************************************
	Problem: 1234
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

