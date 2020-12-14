#include <stdio.h>

int main()
{
    unsigned long long p, q, a, t;
    int i, n;
    while (scanf("%llu %llu %d", &p, &q, &n) != EOF) {
        unsigned long long a, temp;
        for (i = 0; i < n; i++) {
            scanf("%llu", &a);
            p = p - q * a;
            t = p;
            p = q;
            q = t;
        }
        if (q == 0)
            puts("YES");
        else
            puts("NO");
    }
}
/**************************************************************
	Problem: 1346
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

