#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, c, p, s;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        p = (a + b + c) / 2.0;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.2lf\n", s);
    }
}
/**************************************************************
	Problem: 1302
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

