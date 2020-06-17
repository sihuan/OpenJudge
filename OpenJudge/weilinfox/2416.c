#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int print(int a, int b)
{
    int i, j;
    for (i=0; i<b; i++) {
        putchar('*');
    }
    putchar('\n');

    for (i=0; i<a-2; i++) {
        printf("*%*c\n", b-1,'*');
    }

    for (i=0; i<b; i++) {
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

