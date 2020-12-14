#include<stdio.h>

int recursive()
{
    char a;
    a=getchar();
    if(a!=EOF)
    {
        recursive();
        putchar(a);
    }
    return 0;
}

int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2212 kb
****************************************************************/

