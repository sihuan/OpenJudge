#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n;
    int i, j;
    char c[105];

    scanf("%s", c);
    for (i=strlen(c)-1; i>=0; i--) {
        putchar(c[i]);
    }

    return 0;
}
/*
   for (i=0; i<n; i++)
        printf("%d ", a[i]);



        */

/**************************************************************
	Problem: 1092
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

