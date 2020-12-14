#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char s1[30],s2[30];
    gets(s1);
    gets(s2);
    if(strlen(s1)>=strlen(s2))
    {
        puts(s1);
        puts(s2);
    }
    else
    {
        puts(s2);
        puts(s1);
    }

    return 0;
}

/**************************************************************
	Problem: 1017
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

