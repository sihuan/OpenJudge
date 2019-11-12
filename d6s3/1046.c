#include <stdio.h>
int main()
{
    int a, b, c, d, m, n;
    int gj, mj, xj, cb, h = 1, i;
    char t[27];
    gets(t);
    while (scanf("%d,%d,%d/%d,%d,%d", &a, &b, &c, &d, &m, &n) != EOF) {
        cb = 0;
        i = 1;
        for (gj = 0; gj <= m / a; gj++) {
            xj = (m - a * gj - b * n + b * gj) * d / (c - b * d);
            mj = n - gj - xj;
            if ((gj * a * d + mj * b * d + xj * c == m * d )&& mj >= 0 && xj >= 0) {
                if (i == 1)
                    printf("COCKS,HENS,CHICKS\n");
                printf("%d,%d,%d\n", gj, mj, xj);
                cb = 1;
                i++;
            }
        }
        if (cb == 0)
            printf("Cannot buy!\n\n");
        else
            printf("\n");
    }
}
/**************************************************************
	Problem: 1046
	User: 201901060610
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

