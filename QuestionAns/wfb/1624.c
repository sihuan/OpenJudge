#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 100
int fib[45] = {0,0,1,2,};
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=4; i<41; ++i)
        fib[i] = fib[i-1] + fib[i-2];
    int m;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&m);
        printf("%d\n",fib[m]);
    }

    return 0;
}

/**************************************************************
	Problem: 1624
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

