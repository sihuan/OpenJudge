#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b, c;
    int i, j;
    int n;

    scanf("%d", &n);

    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    for (i=0; i<(n%7)*4; i++) {
        putchar(' ');
    }
    j=n%7;
    for (i=1; i<31; i++) {
        printf("%3d", i);
        if (++j%7==0)
            putchar('\n');
        else
            putchar(' ');
    }

    return 0;
}

/**************************************************************
	Problem: 1100
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

