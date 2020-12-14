#include <stdio.h>

int main()
{
    int T, q, i, j, m, n, k;
    int ar[1001];
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &q);
        for (i = 0; i < q; i++)
            scanf("%d", &ar[i]);
        scanf("%d %d", &m, &n);
        k = 0;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (j)
                    printf(" ");
                printf("%2d", ar[k]);
                k++;
            }
            printf("\n");
        }
        printf("\n");
    }
}
/**************************************************************
	Problem: 1770
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

