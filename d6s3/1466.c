#include<stdio.h>

int recursive()
{
    char a;
    a=getchar();
    if(a!=EOF)
        recursive();
    if(a!=EOF)
        putchar(a);
}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2204 kb
****************************************************************/

