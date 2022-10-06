#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 11
int strToInt(char str[])
{
    if(str[0]==0)
        return -1;
    if(str[0]<48||str[0]>57)
        return 0;
    int sum=0,i=0;
    while(str[i]>=48&&str[i]<=57)
    {
            sum=sum*10+str[i]-48;
            i++;
    }
    return sum;
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
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

