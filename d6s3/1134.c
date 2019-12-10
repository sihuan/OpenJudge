#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11

int strToInt(char str[])
{
    int i, ss = 0, l = strlen(str), j, b;
    if (str[0] == '+' || str[0] == '-')
        j = 1;
    else if (isdigit(str[0]))
        j = 0;
    else
        return 0;
    for (; j < l; j++)
        if (!isdigit(str[j]))
            break;
    if (str[0] == '+' || str[0] == '-') {
        b = pow(10, j - 2);
        i = 1;
    } else {
        b = pow(10, j - 1);
        i = 0;
    }
    for (; i < j; i++) {
        ss += (str[i] - '0') * b;
        b /= 10;
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
	Problem: 1134
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

