#include <stdio.h>
#define MAX_SIZE 100

int swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int get_array(int a[])
{
    int b, i = 0;
    while (scanf("%d", &b) != EOF)
        a[i++] = b;
    return i;
}

int put_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (i == 0)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
}

int sort_array(int a[], int n)
{
    int i, j, t, m;
    for (i = 0; i < n - 1; i++) {
        int m = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[m])
                m = j;
        }
        swap(&a[m], &a[i]);
    }
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

