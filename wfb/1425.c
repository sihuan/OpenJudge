#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SWAP(a,b,t) t=a; a=b; b=t;

int main()
{
    int y;
    char a;
    char b;
    int c;
    int n;
    scanf("%d %c %c %d %d",&y,&a,&b,&c,&n);
    int i;
    for(i=1; i<=n; ++i)
    {
        printf("%04d%02d%02d%02d%02d\n",y,a-'A'+1,b-'A'+1,c,i);
    }

    return 0;
}

/**************************************************************
	Problem: 1425
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

