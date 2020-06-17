#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n;
    int i, j;
    char c[1005];

    scanf("%d", &n);
    getchar();
    for (i=0; i<n; i++) {
        gets(c);
        printf("case %d:length=%d.\n", i+1, strlen(c));
    }

    return 0;
}
/*
   for (i=0; i<n; i++)
        printf("%d ", a[i]);



        */

/**************************************************************
	Problem: 1149
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

