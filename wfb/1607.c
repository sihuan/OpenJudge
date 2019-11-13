#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define SWAP(a,b,t) t=a; a=b; b=t;

int get_nums(int *n)
{
    int x;
    *n = 0;
    while(scanf("%d",&x) != EOF)
    {
        ++*n;
    }
    return n;
}

int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

