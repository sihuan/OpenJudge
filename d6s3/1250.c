#include <math.h>
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    while (N--) {
        double a, b, l, r;
        scanf("%lf %lf %lf %lf", &a, &b, &l, &r);
        double t1 = acos(l / a);
        double t2 = acos(r / a);
        double y = 0.5 * a * b * (2 * t1 - sin(2 * t1) - 2 * t2 + sin(2 * t2));
        printf("%.3lf\n", y);
    }
}
/**************************************************************
	Problem: 1250
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

