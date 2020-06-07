#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 1000

int main()
{
    int i;
    int n, m;
    char name[10];

    scanf("%d", &m);

    while (m--) {
        scanf("%s", name);
        scanf("%d", &n);
        printf("%8s |", name);
        for (i=0; i<n; i++) {
            putchar('=');
        }
        putchar('\n');
    }

    return 0;
}


/**************************************************************
	Problem: 1246
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

