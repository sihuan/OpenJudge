#include <stdio.h>
#include <stdlib.h>

void get_num(int *a, int *b, int *c)
{
    scanf("%d%d%d",a,b,c);
}
void max_min(int *x, int *y, int a, int b, int c)
{
    int t = (a>b?a:b);
    int r = (a>b?b:a);
    *x=(t>c?t:c);
    *y=(r<c?r:c);
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

