#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char inp[100][101];
    int i=0;
    while(gets(inp[i])!=NULL)
        i++;
    i--;
    while(i>=0)
    {
        puts(inp[i]);
        i--;
    }

}

/**************************************************************
	Problem: 2414
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

