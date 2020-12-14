#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int a[1000000];
int b[1000000];
int main()
{
    int n;
    int i, j;
    int max;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n-1; i++) {
        b[i]=a[i]+a[i+1];
    }
    max=b[0];
    j=0;
    for (i=0; i<n-1; i++) {
        if (b[i]>max) {
            max=b[i];
            j=i;
        }
    }


    printf("%d + %d = %d\n", a[j], a[j+1], max);

    return 0;
}
/*
   for (i=0; i<n; i++)
        printf("%d ", a[i]);



        */

/**************************************************************
	Problem: 1422
	User: 201901060401
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:8560 kb
****************************************************************/

