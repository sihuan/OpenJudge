#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 15
int strToInt(char str[])
{
    int num=0;
    char *s;
    int isFu = 0;
    for(s=str; *s!='\0'; ++s)
    {
        if(s == str && *str == '-')
        {
            isFu = 1;
            continue;
        }
        else if(s==str && *str== '+') continue;
        if(!isdigit(*s)) continue;
        num = num*10 + *s-'0';
    }
    if(isFu) num=-num;
    return num;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
/**************************************************************
	Problem: 1135
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

