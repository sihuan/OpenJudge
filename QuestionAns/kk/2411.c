#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char in;
    while(scanf("%c",&in)!=EOF)
    {
        if(in=='\n')
            continue;
        in=tolower(in);
        printf("%d\n",in-96);
    }
}

/**************************************************************
	Problem: 2411
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

