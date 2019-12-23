#include <math.h>
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    double x1, y1, x2, y2, x3, y3, a, js;
    while (N--) {
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        a = (y2 - y1) / ((x1 - x2) * (x1 - x2));
        js = a * (x3 * x3 * x3 - x2 * x2 * x2) / 3 - a * x1 * x3 * x3 + (y1 + a * x1 * x1) * (x3 - x2) + a * x1 * x2 * x2 - (y2 + y3) * (x3 - x2) / 2;
        printf("%.2lf\n", js);
    }
}
/**************************************************************
	Problem: 1251
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

