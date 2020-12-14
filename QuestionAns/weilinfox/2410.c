#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    double a, b;

    while(scanf("%lf%lf", &a, &b)==2)
    printf("%.4lf%%\n", b/a*100);

    return 0;
}

/**************************************************************
	Problem: 2410
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

