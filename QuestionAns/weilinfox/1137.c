#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_STR_LEN 15
double strToDouble(char str[])
{
    int zs=0;
    double xs=0.0;
    double ans;
    int i, j;
    int flag=0;
    int len=strlen(str);
    int pos;

    if (len==0)
        return 0.0;
    if (str[0]=='-')
        pos=-1;
    else
        pos=1;
    for (i=0; i<len; i++) {
        if (isdigit(str[i])) {
            zs*=10;
            zs+=str[i]-'0';
        } else if (str[i]=='.' && i!=len-1) {
            flag=1;
            break;
        }
    }

    for (j=len-1; j>i; j--) {
        if (isdigit(str[j])) {
            xs/=10;
            xs+=str[j]-'0';
        }
    }
    xs/=10;
    return ans=pos*1.0*(zs+xs);
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

