#include <stdio.h>

int main()
{
    int m, n, i, s = 0, t;
    scanf("%d %d", &m, &n);
    if (n < m) {
        t = m;
        m = n;
        n = t;
    }
    for (i = m; i <= n; i++) {
        if (i % 4 == 0 && i % 6 == 0 && i > 0)
            s += i;
    }
    printf("%d", s);
}
/**************************************************************
	Problem: 1269
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

