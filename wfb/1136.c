#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 105
int is(char *s,int base)
{
    if(base == 2)
    {
        if(*s == '0' || *s == '1') return 1;
        else return 0;
    }
    else if(base == 8)
    {
        if(isdigit(*s) && *s<'8') return 1;
        else return 0;
    }
    else if(base == 10)
    {
        if(isdigit(*s)) return 1;
        else return 0;
    }
    else if(base == 16)
    {
        if(isdigit(*s))
            return 1;
        else if(*s>='A' && *s<='F')
        {
            *s -= 'A' - '9' - 1;
            return 1;
        }
        else if(*s>='a' && *s<='f')
        {
            *s -= 'a' - '9' - 1;
            return 1;
        }
        else return 0;
    }
}
int strToInt(char str[],int base)
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
        if(!is(s,base)) continue;
        num = num*base + *s-'0';
    }
    if(isFu) num=-num;
    return num;
}

int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

