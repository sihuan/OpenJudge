#include <math.h>
#include <stdio.h>

int main()
{
    int m, n, i, j, k, kp;
    double t;
    double a[51][51], b[51], c[51];
    scanf("%d", &m);
    for (kp = 1; kp <= m; kp++) {
        scanf("%d", &n);
        for (j = 1; j <= n; j++) {
            for (i = 1; i <= n; i++) {
                scanf("%lf", &a[j][i]);
            }
            scanf("%lf", &b[j]);
        }
        if (kp != 1)
            printf("\n");
        for (j = 1; j <= n - 1; j++) {
            if (a[j][j] == 0) {
                for (i = j + 1; i <= n; i++) {
                    if (a[i][j] != 0) {
                        for (k = 1; k <= n; k++) {
                            a[i][k] += a[j][k];
                            a[j][k] = a[i][k] - a[j][k];
                            a[i][k] -= a[j][k];
                        }
                        b[i] += b[j];
                        b[j] = b[i] - b[j];
                        b[i] -= b[j];
                    }
                    continue;
                }
            }
        }
        for (j = 1; j <= n - 1; j++) {
            for (i = j + 1; i <= n; i++) {
                t = a[i][j] / a[j][j];
                b[i] = b[i] - t * b[j];
                for (k = 1; k <= n; k++)
                    a[i][k] = a[i][k] - t * a[j][k];
            }
        }

        c[n] = b[n] / a[n][n];
        for (j = n - 1; j >= 1; --j) {
            c[j] = b[j];
            for (k = n; k >= j + 1; --k)
                c[j] = c[j] - c[k] * a[j][k];
            c[j] = c[j] / a[j][j];
        }
        for (j = 1; j <= n; ++j)
            printf("x%d=%.3lf\n", j, c[j]);
    }
}
/**************************************************************
	Problem: 1434
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

