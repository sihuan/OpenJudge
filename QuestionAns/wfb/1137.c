#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 100

double strToDouble(char str[])
{
    double n = 0;
    int isFu = 0;
    if(str[0] == '-') isFu = 1;
    char *p;
    int cnt = 0;
    int isImg = 0;
    for(p=str; *p; ++p)
    {
        if(isdigit(*p))
        {
            n = n*10 + *p-'0';
            if(isImg) ++cnt;
        }
        else if(*p == '.')
            isImg = 1;
    }
    n *= pow(0.1,cnt);
    if(isFu == 1) n = -n;

    return n;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
/**************************************************************
	Problem: 1137
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

