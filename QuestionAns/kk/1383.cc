#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
#include <iostream>

using namespace std;

double* allocate(int n)
{
    return (double *)malloc(sizeof(double)*n);
}

void input(double* p, int n)
{
    for(int i=0;i<n;i++)
        scanf("%lf",&p[i]);
}

void output(double* p, int n)
{
    int st,ed;
    scanf("%d%d",&st,&ed);
    if(st>n||ed<1)
    {
        printf("no output");
        return;
    }
    if(st<1)
        st=1;
    if(ed>n)
        ed=n;
    for(int i=st-1;i<ed;i++)
        printf("%g\n",p[i]);
}

void release(double* p)
{
    free(p);
}

int main()
{
    int len;
    double *array;
    cin>>len;
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}

/**************************************************************
	Problem: 1383
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:72 ms
	Memory:3612 kb
****************************************************************/

