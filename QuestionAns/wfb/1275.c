#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define SWAP(a,b,t) t=a; a=b; b=t;

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; ++i)
    {
        if(i%3==1 && i%4==2 && i%5==3)
            printf("%d\n",i);
    }
}

/**************************************************************
	Problem: 1275
	User: 201601011420
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

