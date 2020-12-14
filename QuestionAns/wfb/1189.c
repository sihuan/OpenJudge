#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX_STR_LEN 1005

int str_len(char s[])
{
    int i;
    for(i=0; s[i]; ++i)
        ;
    return i;
}

int main()
{
    int n;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", str_len(s));
    return 0;
}

/**************************************************************
	Problem: 1189
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

