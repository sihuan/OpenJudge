#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define swap(a,b,t) t=a;a=b;b=t;

int isIP(char IP[])
{
    char *p;
    int sum = 0;
    int cnt = 0;//用来记录数字位数
    int delCnt = 0;
    for(p = IP; *p != '\0'; ++p)
    {
        if(isdigit(*p))
        {
            ++cnt;
            sum = sum*10 + *p-'0';
        }
        else if(*p == '.')
        {
            if(sum>255 || sum<0 || cnt>3 || cnt<1) return 0;
            cnt = 0;
            ++delCnt;
            sum = 0;
        }
        else return 0;
    }
    if(delCnt != 3 || sum>255 || sum<0 || cnt>3 || cnt<1) return 0;
    else return 1;
}
int main()
{
    char IP[105];
    while(gets(IP) != NULL)
    {
        if(isIP(IP))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}

/**************************************************************
	Problem: 1301
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

