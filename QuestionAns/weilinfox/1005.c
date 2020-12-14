#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    double a, b, c;
    double x, y;
    scanf("%lf%lf%lf", &a, &b, &c);
    scanf("%lf%lf", &x, &y);

        printf("%.2lf %.2lf %.2lf\n", a/100.0*x, b/100.0*x, c/100.0*x);
        printf("%.2lf %.2lf %.2lf", 100.0/a*y, 100.0/b*y, 100.0/c*y);



    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

