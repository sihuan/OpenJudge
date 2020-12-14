#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11

double strToDouble(char st[])
{
    double jg = 0.0;
    int fs = 0, i, xs = 0, xsws = 0, sq = 1;
    for (i = 0; i < strlen(st); i++) {
        if (sq && st[i] == '+')
            sq = 0;
        else if (sq && st[i] == '-') {
            sq = 0;
            fs = 1;
        }
        if (isdigit(st[i])) {
            sq = 0;
            jg = jg * 10 + (st[i] - '0');
            if (xs)
                xsws++;
        } else if (st[i] == '.')
            xs = 1;
    }
    jg *= pow(0.1, xsws);
    if (fs)
        return -jg;
    return jg;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
/**************************************************************
	Problem: 1188
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

