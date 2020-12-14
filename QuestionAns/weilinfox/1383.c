#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double* allocate(int n)
{
    return malloc(sizeof(double)*n);
}

void input(double* p, int n)
{
    int i;
    for (i=0; i<n; i++) {
        scanf("%lf", p+i);
    }
}

void release(double* p)
{
    free(p);
}

void output(double* p, int n)
{
    int m, nn, i;
    int f=0;
    scanf("%d%d", &m, &nn);
    if (m<1)
        m=1;
    for (i=m; i<=n && i<=nn; i++) {
        f=1;
        printf("%g\n", p[i-1]);
    }
    if (!f)
        printf("no output\n");
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:3092 kb
****************************************************************/

