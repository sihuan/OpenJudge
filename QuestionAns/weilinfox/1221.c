#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int i, j;
    int a;

    scanf("%d", &a);
    for (i=0; i<a/2+1; i++) {
        for (j=0; j<a/2-i; j++) {
            putchar(' ');
        }
        for (j=0; j<i*2+1; j++) {
            putchar('A'+i+j);
        }
        putchar('\n');
    }
    for (i=0; i<a/2+1; i++) {
        for (j=0; j<i+1; j++) {
            putchar(' ');
        }
        for (j=0; j<a-2-i*2; j++) {
            putchar('A'+a/2-i-1+j);
        }
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1221
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

