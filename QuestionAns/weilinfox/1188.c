#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_STR_LEN 15
double strToDouble(char str[])
{
    double zs=0, xs=0;
    int flag;
    int pos=1, i, j;
    double p=0.1;

    for (i=0; i<strlen(str); i++) {
        if (isdigit(str[i]))
            break;
        else if (str[i]=='+') {
            break;
        } else if (str[i]=='-') {
            pos=-1;
            break;
        }
    }

    flag=0;
    for ( ; i<strlen(str); i++) {
        if (isdigit(str[i]) && !flag) {
            zs*=10;
            zs+=str[i]-'0';
        } else if (isdigit(str[i]) && flag) {
            xs+=p*(str[i]-'0');
            p*=0.1;
        } else if (str[i]=='.') {
            flag=1;
        }
    }

    return pos*(zs+xs);
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

