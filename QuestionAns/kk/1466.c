#include<stdio.h>
int recursive()
{
    char a;
    a=getchar();
    if(a==EOF)
        return;
    recursive();
    putchar(a);

}


int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2204 kb
****************************************************************/

