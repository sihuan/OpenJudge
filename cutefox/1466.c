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

}


int main()
{
    recursive();
    return 0;
}

/**************************************************************
	Problem: 1466
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2208 kb
****************************************************************/

