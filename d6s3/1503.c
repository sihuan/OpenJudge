#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int m, n, g, mp;
    while (scanf("%d/%d", &m, &n) != EOF) {
        if (m % n == 0) {
            printf("%d\n", m / n);
            continue;
        }
        g = gcd(m, n);
        if (g == 1 && m < n) {
            printf("%d/%d\n", m, n);
            continue;
        }
        m /= g, n /= g;
        if (m < n)
            printf("%d/%d\n", m, n);
        else {
            mp = m / n;
            m = m - mp * n;
            printf("%d+%d/%d\n", mp, m, n);
        }
    }
}

/**************************************************************
	Problem: 1503
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

