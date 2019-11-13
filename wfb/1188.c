#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 100

double strToDouble(char str[])
{
    double n = 0;
    int isFu = 0;//是否是负数
    int cnt = 0;//小数的位数
    int isImg = 0;//是否进入读小数状态
    int preFirst = 1;//是否在数字整体之前
    char *p;
    for(p=str; *p; ++p)
    {
        if(preFirst && *p == '+') preFirst = 0;
        if(preFirst && *p == '-')
        {
            preFirst = 0;
            isFu = 1;
        }
        if(isdigit(*p))
        {
            preFirst = 0;
            n = n*10 + *p-'0';
            if(isImg) ++cnt;
        }
        else if(*p == '.')
        {
            preFirst = 0;
            isImg = 1;
        }
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
	Problem: 1188
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

