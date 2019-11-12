#include <stdio.h>

char cnvchar(char c)
{
    if(c>='A' && c<='Z') return c-'A'+'a';
    if(c>='a'&&c<='z') return c-'a'+'A';
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

