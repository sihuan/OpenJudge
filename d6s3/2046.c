#include<stdio.h>
#include<ctype.h>

char cnvchar(char c)
{
    if(islower(c))
        return toupper(c);
    if(isupper(c))
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

