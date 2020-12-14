#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1009];
    while(gets(a)!=NULL)
    {
        int l=strlen(a);
        if((a[l-1]-'0')%2==0) puts("Even");
        else puts("Odd");
    }
    return 0;
}

/**************************************************************
	Problem: 2036
	User: 201601160202
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

