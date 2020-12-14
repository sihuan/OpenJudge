#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11

int strToInt(char str[])
{
    int ss = 0, i, j, l, b = 1;
    l = strlen(str);
    for (i = l - 1; i >= 0; i--)
        if (isdigit(str[i])) {
            ss += (str[i] - '0') * b;
            b *= 10;
        }
    if (str[0] == '-')
        return -ss;
    return ss;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

