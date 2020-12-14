#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11

int strToInt(char str[])
{
    int i, ss = 0, l = strlen(str), j, b;
    if(str[0]=='\0')
        return -1;
    for (j = 0; j < l; j++)
        if (!isdigit(str[j]))
            break;
    b = pow(10, j - 1);
    for (i = 0; i < j; i++) {
        ss += (str[i] - '0') * b;
        b /= 10;
    }
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
	Problem: 1133
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

