#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 1005
int a[MAX_STR_LEN];
int b[MAX_STR_LEN];
int Read(int a[])
{
    int i=0;
    int n;
    while(scanf("%d",&n) && n)
    {
        a[i++] = n;
    }
    return i;
}

int main()
{
    int n1 = Read(a);
    int n2 = Read(b);
    int cntJ = 0;
    int cntM = n1+n2;
    int i,j;
    for(i=0; i<n1; ++i)
    {
        for(j=0; j<n2; ++j)
        {
            if(a[i] == b[j]) ++cntJ;
        }
    }
    cntM-=cntJ;
    if(!cntM) printf("100.00%%");
    else printf("%.2lf%%",100.0*cntJ/cntM);

    return 0;
}

/**************************************************************
	Problem: 1935
	User: 201601011420
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:756 kb
****************************************************************/

