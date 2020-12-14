#include <math.h>
#include <stdio.h>

int main()
{
    double x;
    int N;
    scanf("%d", &N);
    while (N--) {
        scanf("%lf", &x);
        printf("%.2lf\n", pow(1 + x * x, x) * (log(1 + x * x) + (2 * x * x) / (1 + x * x)));
    }
}
/**************************************************************
	Problem: 1200
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

