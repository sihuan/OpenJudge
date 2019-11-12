#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_num(int *a,int *b,int *c)
{
    scanf("%d%d%d",a,b,c);
    return 0;
}

int max_min(int *mmax,int *mmin,int a,int b,int c)
{
    int max=a;
    int min=a;
    int i=0;
    if(a>=b && a>=c) *mmax=a;
    else if(b>=a && b>=c) *mmax=b;
    else if(c>=a && c>=b) *mmax=c;
    if(a<=b && a<=c) *mmin=a;
    else if(b<=a && b<=c) *mmin=b;
    else if(c<=a && c<=b) *mmin=c;
}


int main()
{
    int cases, i;
    int mmax, mmin, a, b, c;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        get_num(&a, &b, &c);
        max_min(&mmax, &mmin, a, b, c);
        printf("case %d : %d, %d\n", i, mmax, mmin);
    }
}

/**************************************************************
	Problem: 1382
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

