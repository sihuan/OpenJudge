#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char cnvchar(char c)
{
    if(c>='a'&&c<='z')
        return toupper(c);
    else
        return tolower(c);
}

int main()
{
    char ch;
    ch = getchar();
    ch = cnvchar(ch);
    putchar(ch);
    return 0;
}
/**************************************************************
	Problem: 2046
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

