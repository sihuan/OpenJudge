#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX 1005

void GetTemp(char *temp,char *s)
{
    for( ; *s; ++s)
    {
        if(isdigit(*s))
            *temp++ = *s;
        else if(*s>='A' && *s<='Z')
            *temp++ = *s;
        else if(*s>='a' && *s<='z')
            *temp++ = *s-'a'+'A';
    }
    *temp = 0;
}
int isH(char s[])
{
    char *temp = (char *)malloc(sizeof(char)*MAX);
    GetTemp(temp,s);
    int i;
    int n = strlen(temp);
    int is = 1;
    for(i=0; i<n; ++i)
    {
        if(temp[i] != temp[n-1-i])
        {
            is = 0;
            break;
        }
    }
    return  is;
}
int main()
{
    char s[MAX];
    while(gets(s) != NULL)
    {
        if(isH(s))
            puts("Yes.");
        else
            puts("No.");
    }
    return 0;
}

/**************************************************************
	Problem: 1061
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

