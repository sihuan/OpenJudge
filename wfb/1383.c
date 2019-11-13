#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
double* allocate(int n)
{
    return (double *)malloc(sizeof(double)*n);
}
void input(double* p, int n)
{
    int i;
    for(i=0; i<n; ++i)
        scanf("%lf",p+i);
}
void output(double* p, int n)
{
    int st,ed;
    scanf("%d%d",&st,&ed);
    if(st<1) st = 1;
    if(ed>n) ed=n;
    int i;
    for(i=st-1; i<ed; ++i)
    {
        printf("%lg\n",*(p+i));
    }
    if(i==st-1) puts("no output");
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:3092 kb
****************************************************************/

