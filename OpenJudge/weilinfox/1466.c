#include <stdio.h>

int recursive(void)
{
    int recursive(void);
    char ch;
    if ((ch=getchar())!=EOF) {
        recursive();
    } else
        return 0;

    putchar(ch);
    return 0;
}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2208 kb
****************************************************************/

