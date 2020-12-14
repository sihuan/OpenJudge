#include <math.h>
#include <stdio.h>

int eq(double a, double b)
{
    if (fabs(a - b) < 0.000001)
        return 1;
    else
        return 0;
}

void prtfc(double a, double b, double c)
{
    int f;
    if (a > 0)
        f = 1;
    else
        f = -1;
    if (eq(a, 1.0) || eq(a, -1.0))
        printf("x^2");
    else if (f == 1)
        printf("%lgx^2", a);
    else if (f == -1)
        printf("%lgx^2", -a);
    if (eq(f * b, 1.0))
        printf(" + x");
    else if (eq(f * b, -1.0))
        printf(" - x");
    else if (f * b > 0)
        printf(" + %lgx", fabs(b));
    else if (f * b < 0)
        printf(" - %lgx", fabs(b));
    if (eq(c, 0.0))
        printf(" = 0");
    else if (f * c > 0)
        printf(" + %lg = 0", fabs(c));
    else if (f * c < 0)
        printf(" - %lg = 0", fabs(c));
    printf("\n");
}

void prtg(double a, double b, double c)
{
    double d = b * b - 4 * a * c;
    double x1, x2;
    double i, g;
    if (eq(d, 0.0)) {
        g = -b / (2 * a);
        if (eq(g, -0.0))
            g = 0;
        printf("only one real root : %lg\n", g);
    } else if (d > 0) {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        if (x1 > x2) {
            double t;
            t = x1;
            x1 = x2;
            x2 = t;
        }
        if (eq(x1, -0.0))
            x1 = 0;
        if (eq(x2, -0.0))
            x2 = 0;
        printf("two real roots : %lg, %lg\n", x1, x2);
    } else {
        printf("two imaginary roots : ");
        i = fabs(sqrt(-d) / (2 * a));
        if (eq(-b / (2 * a), 0.0) || eq(-b / (2 * a), -0.0)) {
            if (eq(i, 1.0))
                printf("i, -i");
            else
                printf("%lgi, -%lgi", i, i);
        } else if (eq(i, 1.0))
            printf("%lg+i, %lg-i", -b / (2 * a), -b / (2 * a));
        else
            printf("%lg+%lgi, %lg-%lgi", -b / (2 * a), i, -b / (2 * a), i);
        printf("\n");
    }
}

int main()
{
    int i = 1;
    double a, b, c;
    while (scanf("%lf", &a) != EOF) {
        if (a == 0 || a == -0)
            break;
        scanf("%lf %lf", &b, &c);
        printf("Case %d :\n", i++);
        prtfc(a, b, c);
        prtg(a, b, c);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1040
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

