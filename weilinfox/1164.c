#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b;
    int i, j;

    scanf("%d", &a);
    for(i=0; i<a; i++) {
        for(j=0; j<a-i-1; j++) {
            putchar(' ');
        }
        for(j=0; j<(i+1)*2-1; j++) {
            putchar('+');
        }
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1164
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

