#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int a[1000000];
int main()
{
    int sum=0, num=0, f=1;
    int i, j, k;
    int t;

    i=0;
    while (scanf("%d", &a[i])==1) {
        i++;
    }
    for (j=0; j<i; j++) {
        for (k=i-1; k>j; k--) {
            if (a[k]>a[k-1]) {
                t=a[k];
                a[k]=a[k-1];
                a[k-1]=t;
            }
        }
    }
    for (j=0; j<i; j++) {
        if (a[j]!=a[j+1])
            break;
    }

    printf("maximum data is %d, whose occurences is %d.\n", a[0], j+1);

    return 0;
}


/**************************************************************
	Problem: 1424
	User: 201901060401
	Language: C
	Result: Accepted
	Time:384 ms
	Memory:4652 kb
****************************************************************/

