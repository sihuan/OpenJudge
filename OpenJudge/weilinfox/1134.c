#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_STR_LEN 15

int strToInt(char *s)
{
    int ans=0;
    int f=1;
    int n;
    int i=0;


    if (!isdigit(s[0]) && s[0]!='-' && s[0]!='+')
        return 0;
    else if (s[0]=='-') {
        f=-1;
        i++;
    } else if (s[0]=='+') {
        i++;
    }
    n=strlen(s);
    while (1) {
        if (isdigit(s[i])) {
            ans*=10;
            ans+=s[i]-'0';
        } else
            return f>0?ans:-ans;
        i++;
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
	Problem: 1134
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

