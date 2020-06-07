#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    double a;

    scanf("%lf", &a);

    printf("%c %d %g", a<0?'-':'+', (int)floor(fabs(a)), fabs(a)-floor(fabs(a)));

    return 0;
}

/**************************************************************
	Problem: 1243
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

