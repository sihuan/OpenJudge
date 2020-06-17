#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 1000

int get_array(int a[])
{
    int i=0;

    while (scanf("%d", &a[i++])==1);

    return i-1;
}

int put_array(int a[], int n)
{
    int f=1, i;
    for (i=0; i<n; i++) {
        if (f) {
            printf("%d", a[i]);
            f=0;
        } else {
            printf(" %d", a[i]);
        }
    }
    putchar('\n');
}

int sort_array(int a[], int n)
{
    int i, j;
    for (i=0; i<n; i++) {
        for (j=1; j<n-i; j++) {
            if (a[j]<a[j-1]) {
                int t;
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }

    return 0;
}

int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
/**************************************************************
	Problem: 1376
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

