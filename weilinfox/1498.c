#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double a,b;
    int flag=0;
    scanf("%lf%lf", &a, &b);
    printf("%.1lf %.1lf\n", a, -b);
    printf("%.1lf %.1lf\n", -a, b);
    printf("%.1lf %.1lf", -a, -b);
    return 0;
}

/**************************************************************
	Problem: 1498
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

