#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a[105][105];
    int b=0;

    while ((gets(a[b++]))!=NULL) ;


    for (b-=2; b>=0; b--) {
        printf("%s\n", a[b]);
    }

    return 0;
}

/**************************************************************
	Problem: 2414
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

