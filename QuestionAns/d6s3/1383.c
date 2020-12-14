#include <stdio.h>
#include <stdlib.h>

double* allocate(int n)
{
    return (double*)malloc(sizeof(double) * n);
}

void input(double* p, int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%lf", &p[i]);
}

int output(double* p, int n)
{
    int mp, np, i = 0, j = 0;
    scanf("%d %d", &mp, &np);
    if (np < 1 || mp > n) {
        printf("no output\n");
        return 0;
    }
    while (i < n && i < np) {
        if (i >= 0 && i >= mp - 1)
                printf("%lg\n", p[i]);
        i++;
    }
}

void release(double* p)
{
    free(p);
}

int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
/**************************************************************
	Problem: 1383
	User: 201901060610
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:3092 kb
****************************************************************/

