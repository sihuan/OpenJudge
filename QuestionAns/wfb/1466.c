#include <stdio.h>
int recursive()
{
    char n;
    if((n = getchar()) == EOF) return;
    recursive();
    putchar(n);
}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2204 kb
****************************************************************/

