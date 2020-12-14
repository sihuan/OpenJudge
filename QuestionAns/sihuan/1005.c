#include <stdio.h>

int main()
{
    double m , o, r, x, y;
    scanf("%lf %lf %lf",&m, &o, &r);
    scanf("%lf",&x);
    scanf("%lf",&y);
    printf("%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n",x/100*m,x/100*o,x/100*r,y/m*100,y/o*100,y/r*100);
    return 0;
}
/**************************************************************
	Problem: 1005
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

