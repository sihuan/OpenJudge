#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack[100]={0,};
    int *top;
    int n;
    while(scanf("%d",&n) != EOF)
    {
        top = stack;
        int x;
        while(1)
        {
            x = n%2;
            n /= 2;
            *top++ = x;
            if(!n) break;
        }
        int *p = top-1;
        for( ; p>=stack; --p)
        {
            printf("%d",*p);
        }
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1039
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

