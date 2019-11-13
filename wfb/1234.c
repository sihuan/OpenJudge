#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 105

#define SWAP(a,b,t) t=a; a=b; b=t;
char * revs(char * s)
{
    char t;
    int l = strlen(s);
    int i=0;
    for(i=0; i<l/2; ++i)
    {
        SWAP(s[i],s[l-i-1],t);
    }
}
int main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
/**************************************************************
	Problem: 1234
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

