#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1005
#define MAX_LENGTH 105

char cnvchar(char c)
{
    if(c >= 'A' && c <= 'Z')
        c += 'a'-'A';
    else c+= 'A'-'a';
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

