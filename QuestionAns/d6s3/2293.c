#include <stdio.h>

int main()
{
    long long a, b, c, p, q, x, y;
    scanf("%lld %lld %lld", &a, &b, &c);
    while (scanf("%lld %lld", &p, &q) != EOF) {
        int f = 0;
        for (x = q; x >= p; x--) {
            for (y = q; y >= p; y--) {
                if (a * x + b * y == c && (x != 0 || y != 0)) {
                    printf("%lld %lld\n", x, y);
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }
        if (f == 0)
            printf("no\n");
    }
}
/**************************************************************
	Problem: 2293
	User: 201901060610
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

