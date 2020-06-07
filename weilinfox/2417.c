#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int get_array(int a[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    return 0;
}

int shift_array(int a[], int n)
{
    int i;
    int t;

    t=a[0];
    for (i=1; i<n; i++) {
        a[i-1]=a[i];
    }
    a[n-1]=t;

    return 0;
}

int put_array(int a[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        if (i==0)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
    }
    putchar('\n');
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    get_array(a, n);
    shift_array(a, n);
    put_array(a, n);
    return 0;
}

/**************************************************************
	Problem: 2417
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

