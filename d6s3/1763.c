#include <stdio.h>

int main()
{
    int k, n, m, h, i, f;
    scanf("%d", &k);
    for (h = 0; h < k; h++) {
        scanf("%d %d", &n, &m);
        f = 0;
        for (i = 0; i <= n; i++)
            if ((2 * i + (n - i) * 4) == m) {
                printf("%d %d\n", i, n - i);
                f = 1;
            }
        if (f == 0)
            printf("no result\n");
    }
}
/**************************************************************
	Problem: 1763
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

