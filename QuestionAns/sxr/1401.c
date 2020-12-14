#include <stdio.h>
#include <math.h>

int main()
{
    double d, r;
    scanf("%lf",&d);
    r = d/2.0;
    printf("area = %.6f\n",4*r*r*acos(-1));
    printf("volume = %.6f", 4*r*r*r*acos(-1)/3);
    return 0;
}

/**************************************************************
	Problem: 1401
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

