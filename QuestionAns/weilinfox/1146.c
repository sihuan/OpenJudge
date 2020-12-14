#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double func(double x)
{
    if (x<0) {
        return fabs(x);
    } else if (x<1) {
        return sin(2*x);
    } else if (x<5) {
        return sqrt(x*x*x+x);
    } else {
        return 2*x+10;
    }
    
}

int output(int n, double x)
{
    printf ("case %d:y=%g.\n", n, x);
}

int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
/**************************************************************
	Problem: 1146
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

