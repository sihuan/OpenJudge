#include <stdio.h>
#define MAX_SIZE 1001
int get_array(int a[])
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int put_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (i == 0)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
    printf("\n");
}
int reverse_array(int a[], int n)
{
    int b[MAX_SIZE];
    int i, j;
    for (i = 0, j = n - 1; i < n; i++, j--)
        b[j] = a[i];
    for (i = 0; i < n; i++)
        a[i] = b[i];
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

