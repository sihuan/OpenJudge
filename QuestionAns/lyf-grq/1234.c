#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 101
char * revs(char * s)
{
	int i,j;
	char t,k;
	k=(char)strlen(s);
	for(i=0,j=k-1;i<k/2;i++,j--)
	{
		t=s[i];
        s[i]=s[j];
        s[j]=t;
	}
	s[k]='\0';
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

