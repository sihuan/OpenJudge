#include <stdio.h>
#define MAX_STR_LEN 200

int recursive()
{
    char a;
    a=getchar();
    if(a==EOF)
        return ;
    else
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:2208 kb
****************************************************************/

