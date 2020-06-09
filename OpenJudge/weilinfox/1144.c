#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 1000

int get_array(int a[])
{
    int n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

}

int put_array(int a[], int n)
{
    int f=1, i;
    for (i=0; i<n; i++) {
        if (f) {
            printf("%d", a[i]);
            f=0;
        } else {
            printf(",%d", a[i]);
        }
    }
    putchar('\n');
}

int max_value(int a[], int n)
{
    int max=a[0];
    while (n--) {
        if (max<a[n])
            max=a[n];
    }
    return max;
}

int max_index(int idx[], int a[], int n)
{
    int max=max_value(a, n);
    int num=0;
    int i, k=0;
    for (i=0; i<n; i++) {
        if (a[i]==max) {
            idx[k++]=i;
        }
    }
    return k;
}

int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
/**************************************************************
	Problem: 1144
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

