#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_STR_LEN 15

int strToInt(char *s)
{
    int ans=0;
    int f=0;
    int n;
    int i;
    if (strlen(s)==0)
        return -1;
    if (!isdigit(s[0]))
        return 0;
    n=strlen(s);
    for (i=0; ; i++) {
        if (isdigit(s[i])) {
            ans*=10;
            ans+=s[i]-'0';
        } else
            return ans;
    }
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

