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
    for (i=n-1; i>=0; i--) {
        if (f) {
            printf("%d", a[i]);
            f=0;
        } else {
            printf(" %d", a[i]);
        }
    }
    putchar('\n');
}

int reverse_array(int a[], int n)
{
    return 0;
}


int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
/**************************************************************
	Problem: 1153
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

