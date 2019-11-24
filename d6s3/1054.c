#include <stdio.h>

int main()
{
    int ar[101][101];
    int m, n, mp, np, h = 0, i, j, t, lj, js = 0;
    while (scanf("%d %d", &m, &n) && !(m == 0 && n == 0)) {
        if (h == 1 && (mp != m || np != n)) {
            if (js++ != 0)
                printf("\n");
            printf("Not satisfied the definition of matrix addition!\n");
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    scanf("%d", &lj);
            for (i = 0; i < 101; i++)
                for (j = 0; j < 101; j++)
                    ar[i][j] = 0;
            h = 0;
            continue;
        }
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++) {
                scanf("%d", &t);
                ar[i][j] += t;
            }
        h += 1;
        if (h == 2) {
            if (js++ != 0)
                printf("\n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++)
                    if (j == 0)
                        printf("%d", ar[i][j]);
                    else
                        printf(" %d", ar[i][j]);
                printf("\n");
            }
            h = 0;
            for (i = 0; i < 101; i++)
                for (j = 0; j < 101; j++)
                    ar[i][j] = 0;
        }
        mp = m;
        np = n;
    }
}
/**************************************************************
	Problem: 1054
	User: 201901060610
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

