#include <math.h>
#include <stdio.h>

int main()
{
    int t, n, h, i, j, k, sa, sp, a;
    int ar[200002];
    double s;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        s = 0.0;
        for (j = 0; j < n; j++) {
            scanf("%d", &h);
            ar[j] = h;
            s += (double)h;
        }
        if (!(fabs((s / n) - (int)(s / n)) < 0.000001)) {
            if (i == 0)
                printf("0");
            else
                printf("\n0");
            continue;
        }
        sp = (int)(s / n);
        sa = 0;
        for (k = 0; k < n; k++)
            if (ar[k] == sp)
                sa += 1;
        if (i == 0)
            printf("%d", sa);
        else
            printf("\n%d", sa);
        if (sa == 0)
            continue;
        for (k = 0, a = 0; k < n; k++)
            if (ar[k] == sp)
                if (a == 0) {
                    printf("\n%d", k + 1);
                    a++;
                } else
                    printf(" %d", k + 1);
    }
}
/**************************************************************
	Problem: 1080
	User: 201901060610
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:1456 kb
****************************************************************/

